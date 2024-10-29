// Autogenerated by Thrift for thrift/annotation/scope.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package scope


import (
    "reflect"
    "sync"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = reflect.Ptr

// Premade codec specs
var (
    premadeCodecTypeSpec_scope_Transitive *thrift.TypeSpec = nil
    premadeCodecTypeSpec_scope_Program *thrift.TypeSpec = nil
    premadeCodecTypeSpec_scope_Struct *thrift.TypeSpec = nil
    premadeCodecTypeSpec_scope_Union *thrift.TypeSpec = nil
    premadeCodecTypeSpec_scope_Exception *thrift.TypeSpec = nil
    premadeCodecTypeSpec_scope_Field *thrift.TypeSpec = nil
    premadeCodecTypeSpec_scope_Typedef *thrift.TypeSpec = nil
    premadeCodecTypeSpec_scope_Service *thrift.TypeSpec = nil
    premadeCodecTypeSpec_scope_Interaction *thrift.TypeSpec = nil
    premadeCodecTypeSpec_scope_Function *thrift.TypeSpec = nil
    premadeCodecTypeSpec_scope_EnumValue *thrift.TypeSpec = nil
    premadeCodecTypeSpec_scope_Const *thrift.TypeSpec = nil
    premadeCodecTypeSpec_scope_Enum *thrift.TypeSpec = nil
    premadeCodecTypeSpec_scope_Structured *thrift.TypeSpec = nil
    premadeCodecTypeSpec_scope_Interface *thrift.TypeSpec = nil
    premadeCodecTypeSpec_scope_RootDefinition *thrift.TypeSpec = nil
    premadeCodecTypeSpec_scope_Definition *thrift.TypeSpec = nil
)

// Premade codec specs initializer
var premadeCodecSpecsInitOnce = sync.OnceFunc(func() {
    premadeCodecTypeSpec_scope_Transitive = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewTransitive() },
},

    }
    premadeCodecTypeSpec_scope_Program = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewProgram() },
},

    }
    premadeCodecTypeSpec_scope_Struct = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewStruct() },
},

    }
    premadeCodecTypeSpec_scope_Union = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewUnion() },
},

    }
    premadeCodecTypeSpec_scope_Exception = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewException() },
},

    }
    premadeCodecTypeSpec_scope_Field = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewField() },
},

    }
    premadeCodecTypeSpec_scope_Typedef = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewTypedef() },
},

    }
    premadeCodecTypeSpec_scope_Service = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewService() },
},

    }
    premadeCodecTypeSpec_scope_Interaction = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewInteraction() },
},

    }
    premadeCodecTypeSpec_scope_Function = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewFunction() },
},

    }
    premadeCodecTypeSpec_scope_EnumValue = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewEnumValue() },
},

    }
    premadeCodecTypeSpec_scope_Const = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewConst() },
},

    }
    premadeCodecTypeSpec_scope_Enum = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewEnum() },
},

    }
    premadeCodecTypeSpec_scope_Structured = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewStructured() },
},

    }
    premadeCodecTypeSpec_scope_Interface = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewInterface() },
},

    }
    premadeCodecTypeSpec_scope_RootDefinition = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewRootDefinition() },
},

    }
    premadeCodecTypeSpec_scope_Definition = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewDefinition() },
},

    }
})

// Premade struct specs
var (
    premadeStructSpec_Transitive *thrift.StructSpec = nil
    premadeStructSpec_Program *thrift.StructSpec = nil
    premadeStructSpec_Struct *thrift.StructSpec = nil
    premadeStructSpec_Union *thrift.StructSpec = nil
    premadeStructSpec_Exception *thrift.StructSpec = nil
    premadeStructSpec_Field *thrift.StructSpec = nil
    premadeStructSpec_Typedef *thrift.StructSpec = nil
    premadeStructSpec_Service *thrift.StructSpec = nil
    premadeStructSpec_Interaction *thrift.StructSpec = nil
    premadeStructSpec_Function *thrift.StructSpec = nil
    premadeStructSpec_EnumValue *thrift.StructSpec = nil
    premadeStructSpec_Const *thrift.StructSpec = nil
    premadeStructSpec_Enum *thrift.StructSpec = nil
    premadeStructSpec_Structured *thrift.StructSpec = nil
    premadeStructSpec_Interface *thrift.StructSpec = nil
    premadeStructSpec_RootDefinition *thrift.StructSpec = nil
    premadeStructSpec_Definition *thrift.StructSpec = nil
)

// Premade struct specs initializer
var premadeStructSpecsInitOnce = sync.OnceFunc(func() {
    premadeStructSpec_Transitive = &thrift.StructSpec{
    Name:               "Transitive",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_Program = &thrift.StructSpec{
    Name:               "Program",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_Struct = &thrift.StructSpec{
    Name:               "Struct",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_Union = &thrift.StructSpec{
    Name:               "Union",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_Exception = &thrift.StructSpec{
    Name:               "Exception",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_Field = &thrift.StructSpec{
    Name:               "Field",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_Typedef = &thrift.StructSpec{
    Name:               "Typedef",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_Service = &thrift.StructSpec{
    Name:               "Service",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_Interaction = &thrift.StructSpec{
    Name:               "Interaction",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_Function = &thrift.StructSpec{
    Name:               "Function",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_EnumValue = &thrift.StructSpec{
    Name:               "EnumValue",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_Const = &thrift.StructSpec{
    Name:               "Const",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_Enum = &thrift.StructSpec{
    Name:               "Enum",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_Structured = &thrift.StructSpec{
    Name:               "Structured",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_Interface = &thrift.StructSpec{
    Name:               "Interface",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_RootDefinition = &thrift.StructSpec{
    Name:               "RootDefinition",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_Definition = &thrift.StructSpec{
    Name:               "Definition",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
})

var premadeCodecSpecsMapOnce = sync.OnceValue(
    func() map[string]*thrift.TypeSpec {
        // Relies on premade codec specs initialization
        premadeCodecSpecsInitOnce()
        return map[string]*thrift.TypeSpec{
            "scope.Transitive": premadeCodecTypeSpec_scope_Transitive,
            "scope.Program": premadeCodecTypeSpec_scope_Program,
            "scope.Struct": premadeCodecTypeSpec_scope_Struct,
            "scope.Union": premadeCodecTypeSpec_scope_Union,
            "scope.Exception": premadeCodecTypeSpec_scope_Exception,
            "scope.Field": premadeCodecTypeSpec_scope_Field,
            "scope.Typedef": premadeCodecTypeSpec_scope_Typedef,
            "scope.Service": premadeCodecTypeSpec_scope_Service,
            "scope.Interaction": premadeCodecTypeSpec_scope_Interaction,
            "scope.Function": premadeCodecTypeSpec_scope_Function,
            "scope.EnumValue": premadeCodecTypeSpec_scope_EnumValue,
            "scope.Const": premadeCodecTypeSpec_scope_Const,
            "scope.Enum": premadeCodecTypeSpec_scope_Enum,
            "scope.Structured": premadeCodecTypeSpec_scope_Structured,
            "scope.Interface": premadeCodecTypeSpec_scope_Interface,
            "scope.RootDefinition": premadeCodecTypeSpec_scope_RootDefinition,
            "scope.Definition": premadeCodecTypeSpec_scope_Definition,
        }
    },
)

func init() {
    premadeCodecSpecsInitOnce()
    premadeStructSpecsInitOnce()
}

// GetMetadataThriftType (INTERNAL USE ONLY).
// Returns metadata TypeSpec for a given full type name.
func GetCodecTypeSpec(fullName string) *thrift.TypeSpec {
    return premadeCodecSpecsMapOnce()[fullName]
}
