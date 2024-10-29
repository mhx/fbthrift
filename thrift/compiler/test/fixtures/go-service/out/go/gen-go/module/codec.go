// Autogenerated by Thrift for thrift/compiler/test/fixtures/go-service/src/module.thrift
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
    premadeCodecTypeSpec_module_GetEntityRequest *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_GetEntityResponse *thrift.TypeSpec = nil
    premadeCodecTypeSpec_list_string *thrift.TypeSpec = nil
    premadeCodecTypeSpec_module_NonComparableStruct *thrift.TypeSpec = nil
    premadeCodecTypeSpec_i64 *thrift.TypeSpec = nil
    premadeCodecTypeSpec_map_module_NonComparableStruct_i64 *thrift.TypeSpec = nil
    premadeCodecTypeSpec_bool *thrift.TypeSpec = nil
    premadeCodecTypeSpec_byte *thrift.TypeSpec = nil
    premadeCodecTypeSpec_i16 *thrift.TypeSpec = nil
    premadeCodecTypeSpec_i32 *thrift.TypeSpec = nil
    premadeCodecTypeSpec_double *thrift.TypeSpec = nil
    premadeCodecTypeSpec_binary *thrift.TypeSpec = nil
    premadeCodecTypeSpec_map_string_string *thrift.TypeSpec = nil
    premadeCodecTypeSpec_set_string *thrift.TypeSpec = nil
)

// Premade codec specs initializer
var premadeCodecSpecsInitOnce = sync.OnceFunc(func() {
    premadeCodecTypeSpec_string = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_STRING,
},

    }
    premadeCodecTypeSpec_module_GetEntityRequest = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewGetEntityRequest() },
},

    }
    premadeCodecTypeSpec_module_GetEntityResponse = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewGetEntityResponse() },
},

    }
    premadeCodecTypeSpec_list_string = &thrift.TypeSpec{
        CodecListSpec: &thrift.CodecListSpec{
    ElementWireType: thrift.STRING,
	ElementTypeSpec: premadeCodecTypeSpec_string,
},

    }
    premadeCodecTypeSpec_module_NonComparableStruct = &thrift.TypeSpec{
        CodecStructSpec: &thrift.CodecStructSpec{
    NewFunc: func() thrift.Struct { return NewNonComparableStruct() },
},

    }
    premadeCodecTypeSpec_i64 = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_I64,
},

    }
    premadeCodecTypeSpec_map_module_NonComparableStruct_i64 = &thrift.TypeSpec{
        CodecMapSpec: &thrift.CodecMapSpec{
	KeyTypeSpec:   premadeCodecTypeSpec_module_NonComparableStruct,
	ValueTypeSpec: premadeCodecTypeSpec_i64,
    KeyWireType:   thrift.STRUCT,
	ValueWireType: thrift.I64,
},

    }
    premadeCodecTypeSpec_bool = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_BOOL,
},

    }
    premadeCodecTypeSpec_byte = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_BYTE,
},

    }
    premadeCodecTypeSpec_i16 = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_I16,
},

    }
    premadeCodecTypeSpec_i32 = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_I32,
},

    }
    premadeCodecTypeSpec_double = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_DOUBLE,
},

    }
    premadeCodecTypeSpec_binary = &thrift.TypeSpec{
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_BINARY,
},

    }
    premadeCodecTypeSpec_map_string_string = &thrift.TypeSpec{
        CodecMapSpec: &thrift.CodecMapSpec{
	KeyTypeSpec:   premadeCodecTypeSpec_string,
	ValueTypeSpec: premadeCodecTypeSpec_string,
    KeyWireType:   thrift.STRING,
	ValueWireType: thrift.STRING,
},

    }
    premadeCodecTypeSpec_set_string = &thrift.TypeSpec{
        CodecSetSpec: &thrift.CodecSetSpec{
    ElementWireType: thrift.STRING,
	ElementTypeSpec: premadeCodecTypeSpec_string,
},

    }
})

// Premade struct specs
var (
    premadeStructSpec_GetEntityRequest *thrift.StructSpec = nil
    premadeStructSpec_GetEntityResponse *thrift.StructSpec = nil
    premadeStructSpec_NonComparableStruct *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetEntity *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetEntity *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetBool *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetBool *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetByte *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetByte *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetI16 *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetI16 *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetI32 *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetI32 *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetI64 *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetI64 *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetDouble *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetDouble *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetString *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetString *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetBinary *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetBinary *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetMap *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetMap *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetSet *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetSet *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetList *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetList *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetLegacyStuff *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetLegacyStuff *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetCtxCollision *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetCtxCollision *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetCtx1Collision *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetCtx1Collision *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetContextCollision *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetContextCollision *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetOutCollision *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetOutCollision *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetOut1Collision *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetOut1Collision *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetInCollision *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetInCollision *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetIn1Collision *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetIn1Collision *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetErrCollision *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetErrCollision *thrift.StructSpec = nil
    premadeStructSpec_reqGetEntityGetErr1Collision *thrift.StructSpec = nil
    premadeStructSpec_respGetEntityGetErr1Collision *thrift.StructSpec = nil
)

// Premade struct specs initializer
var premadeStructSpecsInitOnce = sync.OnceFunc(func() {
    premadeStructSpec_GetEntityRequest = &thrift.StructSpec{
    Name:               "GetEntityRequest",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "id",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
    },
}
    premadeStructSpec_GetEntityResponse = &thrift.StructSpec{
    Name:               "GetEntityResponse",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "entity",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
    },
}
    premadeStructSpec_NonComparableStruct = &thrift.StructSpec{
    Name:               "NonComparableStruct",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "foo",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.Type(thrift.LIST),
            Name:                 "bar",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_list_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   3,
            WireType:             thrift.Type(thrift.MAP),
            Name:                 "baz",
            ReflectIndex:         2,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_map_module_NonComparableStruct_i64,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
        2: 1,
        3: 2,
    },
}
    premadeStructSpec_reqGetEntityGetEntity = &thrift.StructSpec{
    Name:               "reqGetEntityGetEntity",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.STRUCT),
            Name:                 "r",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_module_GetEntityRequest,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
    },
}
    premadeStructSpec_respGetEntityGetEntity = &thrift.StructSpec{
    Name:               "respGetEntityGetEntity",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.STRUCT),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_module_GetEntityResponse,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetBool = &thrift.StructSpec{
    Name:               "reqGetEntityGetBool",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_respGetEntityGetBool = &thrift.StructSpec{
    Name:               "respGetEntityGetBool",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.BOOL),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_bool,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetByte = &thrift.StructSpec{
    Name:               "reqGetEntityGetByte",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_respGetEntityGetByte = &thrift.StructSpec{
    Name:               "respGetEntityGetByte",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.BYTE),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_byte,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetI16 = &thrift.StructSpec{
    Name:               "reqGetEntityGetI16",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_respGetEntityGetI16 = &thrift.StructSpec{
    Name:               "respGetEntityGetI16",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.I16),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_i16,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetI32 = &thrift.StructSpec{
    Name:               "reqGetEntityGetI32",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_respGetEntityGetI32 = &thrift.StructSpec{
    Name:               "respGetEntityGetI32",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetI64 = &thrift.StructSpec{
    Name:               "reqGetEntityGetI64",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_respGetEntityGetI64 = &thrift.StructSpec{
    Name:               "respGetEntityGetI64",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetDouble = &thrift.StructSpec{
    Name:               "reqGetEntityGetDouble",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_respGetEntityGetDouble = &thrift.StructSpec{
    Name:               "respGetEntityGetDouble",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.DOUBLE),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_double,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetString = &thrift.StructSpec{
    Name:               "reqGetEntityGetString",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_respGetEntityGetString = &thrift.StructSpec{
    Name:               "respGetEntityGetString",
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
    premadeStructSpec_reqGetEntityGetBinary = &thrift.StructSpec{
    Name:               "reqGetEntityGetBinary",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_respGetEntityGetBinary = &thrift.StructSpec{
    Name:               "respGetEntityGetBinary",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.STRING),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_binary,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetMap = &thrift.StructSpec{
    Name:               "reqGetEntityGetMap",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_respGetEntityGetMap = &thrift.StructSpec{
    Name:               "respGetEntityGetMap",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.MAP),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_map_string_string,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetSet = &thrift.StructSpec{
    Name:               "reqGetEntityGetSet",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_respGetEntityGetSet = &thrift.StructSpec{
    Name:               "respGetEntityGetSet",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.SET),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_set_string,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetList = &thrift.StructSpec{
    Name:               "reqGetEntityGetList",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
    },
    FieldSpecIDToIndex: map[int16]int{
    },
}
    premadeStructSpec_respGetEntityGetList = &thrift.StructSpec{
    Name:               "respGetEntityGetList",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.LIST),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_list_string,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetLegacyStuff = &thrift.StructSpec{
    Name:               "reqGetEntityGetLegacyStuff",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   -2,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "numNeg2",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },        {
            ID:                   -1,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "numNeg1",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },        {
            ID:                   1,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "numPos",
            ReflectIndex:         2,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        -2: 0,
        -1: 1,
        1: 2,
    },
}
    premadeStructSpec_respGetEntityGetLegacyStuff = &thrift.StructSpec{
    Name:               "respGetEntityGetLegacyStuff",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetCtxCollision = &thrift.StructSpec{
    Name:               "reqGetEntityGetCtxCollision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "ctx",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
    },
}
    premadeStructSpec_respGetEntityGetCtxCollision = &thrift.StructSpec{
    Name:               "respGetEntityGetCtxCollision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetCtx1Collision = &thrift.StructSpec{
    Name:               "reqGetEntityGetCtx1Collision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "ctx",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "ctx1",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
        2: 1,
    },
}
    premadeStructSpec_respGetEntityGetCtx1Collision = &thrift.StructSpec{
    Name:               "respGetEntityGetCtx1Collision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetContextCollision = &thrift.StructSpec{
    Name:               "reqGetEntityGetContextCollision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "context",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
    },
}
    premadeStructSpec_respGetEntityGetContextCollision = &thrift.StructSpec{
    Name:               "respGetEntityGetContextCollision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetOutCollision = &thrift.StructSpec{
    Name:               "reqGetEntityGetOutCollision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "out",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
    },
}
    premadeStructSpec_respGetEntityGetOutCollision = &thrift.StructSpec{
    Name:               "respGetEntityGetOutCollision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetOut1Collision = &thrift.StructSpec{
    Name:               "reqGetEntityGetOut1Collision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "out",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "out1",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
        2: 1,
    },
}
    premadeStructSpec_respGetEntityGetOut1Collision = &thrift.StructSpec{
    Name:               "respGetEntityGetOut1Collision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetInCollision = &thrift.StructSpec{
    Name:               "reqGetEntityGetInCollision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "in",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
    },
}
    premadeStructSpec_respGetEntityGetInCollision = &thrift.StructSpec{
    Name:               "respGetEntityGetInCollision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetIn1Collision = &thrift.StructSpec{
    Name:               "reqGetEntityGetIn1Collision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "in",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "in1",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
        2: 1,
    },
}
    premadeStructSpec_respGetEntityGetIn1Collision = &thrift.StructSpec{
    Name:               "respGetEntityGetIn1Collision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetErrCollision = &thrift.StructSpec{
    Name:               "reqGetEntityGetErrCollision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "err",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
    },
}
    premadeStructSpec_respGetEntityGetErrCollision = &thrift.StructSpec{
    Name:               "respGetEntityGetErrCollision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
    premadeStructSpec_reqGetEntityGetErr1Collision = &thrift.StructSpec{
    Name:               "reqGetEntityGetErr1Collision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "err",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.Type(thrift.I64),
            Name:                 "err1",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_i64,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        1: 0,
        2: 1,
    },
}
    premadeStructSpec_respGetEntityGetErr1Collision = &thrift.StructSpec{
    Name:               "respGetEntityGetErr1Collision",
    IsUnion:            false,
    IsException:        false,
    FieldSpecs:         []*thrift.FieldSpec{
        {
            ID:                   0,
            WireType:             thrift.Type(thrift.I32),
            Name:                 "success",
            ReflectIndex:         0,
            IsOptional:           true,
            ValueTypeSpec:        premadeCodecTypeSpec_i32,
            MustBeSetToSerialize: true,
        },    },
    FieldSpecIDToIndex: map[int16]int{
        0: 0,
    },
}
})

var premadeCodecSpecsMapOnce = sync.OnceValue(
    func() map[string]*thrift.TypeSpec {
        // Relies on premade codec specs initialization
        premadeCodecSpecsInitOnce()
        return map[string]*thrift.TypeSpec{
            "string": premadeCodecTypeSpec_string,
            "module.GetEntityRequest": premadeCodecTypeSpec_module_GetEntityRequest,
            "module.GetEntityResponse": premadeCodecTypeSpec_module_GetEntityResponse,
            "module.NonComparableStruct": premadeCodecTypeSpec_module_NonComparableStruct,
            "i64": premadeCodecTypeSpec_i64,
            "bool": premadeCodecTypeSpec_bool,
            "byte": premadeCodecTypeSpec_byte,
            "i16": premadeCodecTypeSpec_i16,
            "i32": premadeCodecTypeSpec_i32,
            "double": premadeCodecTypeSpec_double,
            "binary": premadeCodecTypeSpec_binary,
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
