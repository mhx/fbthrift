// Autogenerated by Thrift for thrift/compiler/test/fixtures/exceptions/src/module.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module


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
    premadeCodecTypeSpec_string *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_Fiery *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_Serious *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_ComplexFieldNames *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_CustomFieldNames *thrift.TypeSpec = nil
    premadeCodecTypeSpec_i32 *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_ExceptionWithPrimitiveField *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_ExceptionWithStructuredAnnotation *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_Banal *thrift.TypeSpec = nil
    premadeCodecTypeSpec_void *thrift.TypeSpec = nil
)

// Premade codec specs initializer
var premadeCodecSpecsInitOnce = sync.OnceFunc(func() {
    premadeCodecTypeSpec_string = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_STRING,
},

    }
    premadeCodecTypeSpec_module_Fiery = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewFiery() },
},

    }
    premadeCodecTypeSpec_module_Serious = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewSerious() },
},

    }
    premadeCodecTypeSpec_module_ComplexFieldNames = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewComplexFieldNames() },
},

    }
    premadeCodecTypeSpec_module_CustomFieldNames = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewCustomFieldNames() },
},

    }
    premadeCodecTypeSpec_i32 = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_I32,
},

    }
    premadeCodecTypeSpec_module_ExceptionWithPrimitiveField = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewExceptionWithPrimitiveField() },
},

    }
    premadeCodecTypeSpec_module_ExceptionWithStructuredAnnotation = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewExceptionWithStructuredAnnotation() },
},

    }
    premadeCodecTypeSpec_module_Banal = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewBanal() },
},

    }
    premadeCodecTypeSpec_void = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_VOID,
},

    }
})

// Premade struct specs
var (
    premadeStructSpec_Fiery *thrift.StructSpec = nil
    premadeStructSpec_Serious *thrift.StructSpec = nil
    premadeStructSpec_ComplexFieldNames *thrift.StructSpec = nil
    premadeStructSpec_CustomFieldNames *thrift.StructSpec = nil
    premadeStructSpec_ExceptionWithPrimitiveField *thrift.StructSpec = nil
    premadeStructSpec_ExceptionWithStructuredAnnotation *thrift.StructSpec = nil
    premadeStructSpec_Banal *thrift.StructSpec = nil
    premadeStructSpec_reqRaiserDoBland *thrift.StructSpec = nil
    premadeStructSpec_respRaiserDoBland *thrift.StructSpec = nil
    premadeStructSpec_reqRaiserDoRaise *thrift.StructSpec = nil
    premadeStructSpec_respRaiserDoRaise *thrift.StructSpec = nil
    premadeStructSpec_reqRaiserGet200 *thrift.StructSpec = nil
    premadeStructSpec_respRaiserGet200 *thrift.StructSpec = nil
    premadeStructSpec_reqRaiserGet500 *thrift.StructSpec = nil
    premadeStructSpec_respRaiserGet500 *thrift.StructSpec = nil
)

// Premade struct specs initializer
var premadeStructSpecsInitOnce = sync.OnceFunc(func() {
    premadeStructSpec_Fiery = &thrift.StructSpec{
    Name:               "Fiery",
    IsUnion:            false,
    IsException:        true,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "message",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
    },
}
    premadeStructSpec_Serious = &thrift.StructSpec{
    Name:               "Serious",
    IsUnion:            false,
    IsException:        true,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "sonnet",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
    },
}
    premadeStructSpec_ComplexFieldNames = &thrift.StructSpec{
    Name:               "ComplexFieldNames",
    IsUnion:            false,
    IsException:        true,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "error_message",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "internal_error_message",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
        2: 1,
    },
}
    premadeStructSpec_CustomFieldNames = &thrift.StructSpec{
    Name:               "CustomFieldNames",
    IsUnion:            false,
    IsException:        true,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "error_message",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "internal_error_message",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
        2: 1,
    },
}
    premadeStructSpec_ExceptionWithPrimitiveField = &thrift.StructSpec{
    Name:               "ExceptionWithPrimitiveField",
    IsUnion:            false,
    IsException:        true,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "message",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "error_code",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
        2: 1,
    },
}
    premadeStructSpec_ExceptionWithStructuredAnnotation = &thrift.StructSpec{
    Name:               "ExceptionWithStructuredAnnotation",
    IsUnion:            false,
    IsException:        true,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "message_field",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "error_code",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
        2: 1,
    },
}
    premadeStructSpec_Banal = &thrift.StructSpec{
    Name:               "Banal",
    IsUnion:            false,
    IsException:        true,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_reqRaiserDoBland = &thrift.StructSpec{
    Name:               "reqRaiserDoBland",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_respRaiserDoBland = &thrift.StructSpec{
    Name:               "respRaiserDoBland",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_reqRaiserDoRaise = &thrift.StructSpec{
    Name:               "reqRaiserDoRaise",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_respRaiserDoRaise = &thrift.StructSpec{
    Name:               "respRaiserDoRaise",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRUCT),
            Name:                 "b",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_module_Banal,
            MustBeSetToSerialize: true,
        },        {
            ID:                   2,
            WireType:             thrift.Type(thrift.STRUCT),
            Name:                 "f",
            ReflectIndex:         1,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_module_Fiery,
            MustBeSetToSerialize: true,
        },        {
            ID:                   3,
            WireType:             thrift.Type(thrift.STRUCT),
            Name:                 "s",
            ReflectIndex:         2,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_module_Serious,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
        2: 1,
        3: 2,
    },
}
    premadeStructSpec_reqRaiserGet200 = &thrift.StructSpec{
    Name:               "reqRaiserGet200",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_respRaiserGet200 = &thrift.StructSpec{
    Name:               "respRaiserGet200",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqRaiserGet500 = &thrift.StructSpec{
    Name:               "reqRaiserGet500",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_respRaiserGet500 = &thrift.StructSpec{
    Name:               "respRaiserGet500",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: true,
        },        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRUCT),
            Name:                 "f",
            ReflectIndex:         1,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_module_Fiery,
            MustBeSetToSerialize: true,
        },        {
            ID:                   2,
            WireType:             thrift.Type(thrift.STRUCT),
            Name:                 "b",
            ReflectIndex:         2,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_module_Banal,
            MustBeSetToSerialize: true,
        },        {
            ID:                   3,
            WireType:             thrift.Type(thrift.STRUCT),
            Name:                 "s",
            ReflectIndex:         3,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_module_Serious,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
        1: 1,
        2: 2,
        3: 3,
    },
}
})

var premadeCodecSpecsMapOnce = sync.OnceValue(
    func() map[string]*thrift.TypeSpec {
        // Relies on premade codec specs initialization
        premadeCodecSpecsInitOnce()
        return map[string]*thrift.TypeSpec{
            "string": premadeCodecTypeSpec_string,
            "module.Fiery": premadeCodecTypeSpec_module_Fiery,
            "module.Serious": premadeCodecTypeSpec_module_Serious,
            "module.ComplexFieldNames": premadeCodecTypeSpec_module_ComplexFieldNames,
            "module.CustomFieldNames": premadeCodecTypeSpec_module_CustomFieldNames,
            "i32": premadeCodecTypeSpec_i32,
            "module.ExceptionWithPrimitiveField": premadeCodecTypeSpec_module_ExceptionWithPrimitiveField,
            "module.ExceptionWithStructuredAnnotation": premadeCodecTypeSpec_module_ExceptionWithStructuredAnnotation,
            "module.Banal": premadeCodecTypeSpec_module_Banal,
            "void": premadeCodecTypeSpec_void,
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
