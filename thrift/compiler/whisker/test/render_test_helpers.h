/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <folly/portability/GMock.h>
#include <folly/portability/GTest.h>

#include <thrift/compiler/whisker/ast.h>
#include <thrift/compiler/whisker/diagnostic.h>
#include <thrift/compiler/whisker/object.h>
#include <thrift/compiler/whisker/parser.h>
#include <thrift/compiler/whisker/render.h>

#include <optional>
#include <sstream>
#include <string>
#include <string_view>
#include <unordered_map>
#include <vector>

#include <fmt/core.h>
#include <fmt/ranges.h>

namespace whisker {

// Testing harness for rendering and conformance tests
class RenderTest : public testing::Test {
 public:
  static const inline std::string path_to_file = "path/to/test.whisker";

 private:
  struct source_state {
    source_manager src_manager;
    std::vector<diagnostic> diagnostics;
    diagnostics_engine diags;

    source_state()
        : diags(src_manager, [this](diagnostic d) {
            diagnostics.push_back(std::move(d));
          }) {}
    source_state(source_state&&) = delete;
    source_state& operator=(source_state&&) = delete;
  };
  std::optional<source_state> last_render_;

  class in_memory_partial_resolver : public partial_resolver {
   public:
    explicit in_memory_partial_resolver(source_manager& src_manager)
        : src_manager_(src_manager) {}

   private:
    std::optional<ast::root> resolve(
        const std::vector<std::string>& partial_path,
        diagnostics_engine& diags) override {
      // This implementation is dumb and parses the file every time. But that's
      // ok in a test.
      std::string virtual_path =
          fmt::format("{}", fmt::join(partial_path, "/"));
      auto source = src_manager_.get_file(virtual_path);
      if (!source.has_value()) {
        return std::nullopt;
      }
      return parse(*source, diags);
    }

    source_manager& src_manager_;
  };

 public:
  std::optional<diagnostic_level> strict_boolean_conditional;
  std::optional<diagnostic_level> strict_printable_types;
  std::optional<diagnostic_level> strict_undefined_variables;

  struct partials_by_path {
    /**
     * Mapping of partial path (delimited by '/') to the source code.
     */
    std::unordered_map<std::string, std::string> value;
  };

  static partials_by_path partials(
      std::initializer_list<std::pair<const std::string, std::string>>
          entries) {
    return {std::unordered_map<std::string, std::string>{std::move(entries)}};
  }

  std::optional<std::string> render(
      const std::string& source,
      const object& root_context,
      partials_by_path partials = {}) {
    auto& current = last_render_.emplace();

    auto src = current.src_manager.add_virtual_file(path_to_file, source);
    auto ast = parse(src, current.diags);
    if (!ast.has_value()) {
      return std::nullopt;
    }

    render_options options;
    if (strict_boolean_conditional.has_value()) {
      options.strict_boolean_conditional = *strict_boolean_conditional;
    }
    if (strict_printable_types.has_value()) {
      options.strict_printable_types = *strict_printable_types;
    }
    if (strict_undefined_variables.has_value()) {
      options.strict_undefined_variables = *strict_undefined_variables;
    }
    if (!partials.value.empty()) {
      auto partial_resolver =
          std::make_unique<in_memory_partial_resolver>(current.src_manager);
      for (const auto& [name, content] : partials.value) {
        current.src_manager.add_virtual_file(name, content);
      }
      options.partial_resolver = std::move(partial_resolver);
    }

    std::ostringstream out;
    if (whisker::render(
            out, *ast, root_context, current.diags, std::move(options))) {
      return out.str();
    }
    return std::nullopt;
  }

  const std::vector<diagnostic>& diagnostics() const {
    return last_render_.value().diagnostics;
  }
};

} // namespace whisker
