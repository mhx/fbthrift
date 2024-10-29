// Autogenerated by Thrift for thrift/annotation/python.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package python


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
    premadeCodecTypeSpec_python_Py3Hidden *thrift.TypeSpec = nil
    premadeCodecTypeSpec_string *thrift.TypeSpec = nil
    premadeCodecTypeSpec_python_PyDeprecatedHidden *thrift.TypeSpec = nil
    premadeCodecTypeSpec_python_Flags *thrift.TypeSpec = nil
    premadeCodecTypeSpec_python_Name *thrift.TypeSpec = nil
    premadeCodecTypeSpec_python_Adapter *thrift.TypeSpec = nil
    premadeCodecTypeSpec_bool *thrift.TypeSpec = nil
    premadeCodecTypeSpec_python_UseCAPI *thrift.TypeSpec = nil
)

// Premade codec specs initializer
var premadeCodecSpecsInitOnce = sync.OnceFunc(func() {
    premadeCodecTypeSpec_python_Py3Hidden = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewPy3Hidden() },
},

    }
    premadeCodecTypeSpec_string = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_STRING,
},

    }
    premadeCodecTypeSpec_python_PyDeprecatedHidden = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewPyDeprecatedHidden() },
},

    }
    premadeCodecTypeSpec_python_Flags = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewFlags() },
},

    }
    premadeCodecTypeSpec_python_Name = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewName() },
},

    }
    premadeCodecTypeSpec_python_Adapter = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewAdapter() },
},

    }
    premadeCodecTypeSpec_bool = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_BOOL,
},

    }
    premadeCodecTypeSpec_python_UseCAPI = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewUseCAPI() },
},

    }
})

// Premade struct specs
var (
    premadeStructSpec_Py3Hidden *thrift.StructSpec = nil
    premadeStructSpec_PyDeprecatedHidden *thrift.StructSpec = nil
    premadeStructSpec_Flags *thrift.StructSpec = nil
    premadeStructSpec_Name *thrift.StructSpec = nil
    premadeStructSpec_Adapter *thrift.StructSpec = nil
    premadeStructSpec_UseCAPI *thrift.StructSpec = nil
)

// Premade struct specs initializer
var premadeStructSpecsInitOnce = sync.OnceFunc(func() {
    premadeStructSpec_Py3Hidden = &thrift.StructSpec{
    Name:               "Py3Hidden",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_PyDeprecatedHidden = &thrift.StructSpec{
    Name:               "PyDeprecatedHidden",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "reason",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
    },
}
    premadeStructSpec_Flags = &thrift.StructSpec{
    Name:               "Flags",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_Name = &thrift.StructSpec{
    Name:               "Name",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "name",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
    },
}
    premadeStructSpec_Adapter = &thrift.StructSpec{
    Name:               "Adapter",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "name",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "typeHint",
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
    premadeStructSpec_UseCAPI = &thrift.StructSpec{
    Name:               "UseCAPI",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.BOOL),
            Name:                 "serialize",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_bool,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
    },
}
})

var premadeCodecSpecsMapOnce = sync.OnceValue(
    func() map[string]*thrift.TypeSpec {
        // Relies on premade codec specs initialization
        premadeCodecSpecsInitOnce()
        return map[string]*thrift.TypeSpec{
            "python.Py3Hidden": premadeCodecTypeSpec_python_Py3Hidden,
            "string": premadeCodecTypeSpec_string,
            "python.PyDeprecatedHidden": premadeCodecTypeSpec_python_PyDeprecatedHidden,
            "python.Flags": premadeCodecTypeSpec_python_Flags,
            "python.Name": premadeCodecTypeSpec_python_Name,
            "python.Adapter": premadeCodecTypeSpec_python_Adapter,
            "bool": premadeCodecTypeSpec_bool,
            "python.UseCAPI": premadeCodecTypeSpec_python_UseCAPI,
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
