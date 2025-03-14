<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift service:-
 * Bar
 */
interface BarAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * string
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b);
   */
  public function baz(keyset<int> $a, KeyedContainer<int, KeyedContainer<int, keyset<string>>> $b): Awaitable<string>;
}

/**
 * Original thrift service:-
 * Bar
 */
interface BarIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * string
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b);
   */
  public function baz(keyset<int> $a, KeyedContainer<int, KeyedContainer<int, keyset<string>>> $b): string;
}

/**
 * Original thrift service:-
 * Bar
 */
interface BarAsyncClientIf extends BarAsyncIf {
}

/**
 * Original thrift service:-
 * Bar
 */
interface BarClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * string
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b);
   */
  public function baz(keyset<int> $a, KeyedContainer<int, KeyedContainer<int, keyset<string>>> $b): Awaitable<string>;
}

/**
 * Original thrift service:-
 * Bar
 */
trait BarClientBase {
  require extends \ThriftClientBase;

  /**
   * Original thrift definition:-
   * string
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b);
   */
  public async function baz(keyset<int> $a, KeyedContainer<int, KeyedContainer<int, keyset<string>>> $b): Awaitable<string> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    $args = Bar_baz_args::fromShape(shape(
      'a' => $a,
      'b' => Vec\map($b, 
        $_val0 ==> dict($_val0)
      ),
    ));
    await $this->asyncHandler_->genBefore(BarStaticMetadata::THRIFT_SVC_NAME, "baz", $args);
    $currentseqid = $this->sendImplHelper($args, "baz", false, BarStaticMetadata::THRIFT_SVC_NAME );
    return (await $this->genAwaitResponseWithReadHeaders(Bar_baz_result::class, "baz", false, $currentseqid, $rpc_options))[0];
  }

}

class BarAsyncClient extends \ThriftClientBase implements BarAsyncClientIf {
  use BarClientBase;

  const string THRIFT_SVC_NAME = BarStaticMetadata::THRIFT_SVC_NAME;

}

class BarClient extends \ThriftClientBase implements BarClientIf {
  use BarClientBase;

  const string THRIFT_SVC_NAME = BarStaticMetadata::THRIFT_SVC_NAME;

}

// HELPER FUNCTIONS AND STRUCTURES

class Bar_baz_args implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
    1 => shape(
      'var' => 'a',
      'type' => \TType::SET,
      'etype' => \TType::I32,
      'elem' => shape(
        'type' => \TType::I32,
      ),
      'format' => 'harray',
    ),
    2 => shape(
      'var' => 'b',
      'type' => \TType::LST,
      'etype' => \TType::MAP,
      'elem' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::I32,
        'vtype' => \TType::SET,
        'key' => shape(
          'type' => \TType::I32,
        ),
        'val' => shape(
          'type' => \TType::SET,
          'etype' => \TType::STRING,
          'elem' => shape(
            'type' => \TType::STRING,
          ),
          'format' => 'harray',
        ),
        'format' => 'harray',
      ),
      'format' => 'harray',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'a' => 1,
    'b' => 2,
  ];

  const type TConstructorShape = shape(
    ?'a' => ?keyset<int>,
    ?'b' => ?vec<dict<int, keyset<string>>>,
  );

  const int STRUCTURAL_ID = 5283012534631553068;
  public keyset<int> $a;
  public vec<dict<int, keyset<string>>> $b;

  public function __construct(?keyset<int> $a = null, ?vec<dict<int, keyset<string>>> $b = null)[] {
    $this->a = $a ?? keyset[];
    $this->b = $b ?? vec[];
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'a'),
      Shapes::idx($shape, 'b'),
    );
  }

  public function getName()[]: string {
    return 'Bar_baz_args';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.baz_args",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_set" => tmeta_ThriftSetType::fromShape(
                    shape(
                      "valueType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "a",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_list" => tmeta_ThriftListType::fromShape(
                    shape(
                      "valueType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_map" => tmeta_ThriftMapType::fromShape(
                            shape(
                              "keyType" => tmeta_ThriftType::fromShape(
                                shape(
                                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                                )
                              ),
                              "valueType" => tmeta_ThriftType::fromShape(
                                shape(
                                  "t_set" => tmeta_ThriftSetType::fromShape(
                                    shape(
                                      "valueType" => tmeta_ThriftType::fromShape(
                                        shape(
                                          "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                                        )
                                      ),
                                    )
                                  ),
                                )
                              ),
                            )
                          ),
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "b",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

class Bar_baz_result extends \ThriftSyncStructWithResult implements \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const type TResult = string;

  const \ThriftStructTypes::TSpec SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?this::TResult,
  );

  const int STRUCTURAL_ID = 1365128170602685579;
  public ?this::TResult $success;

  public function __construct(?this::TResult $success = null)[] {
    $this->success = $success;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'success'),
    );
  }

  public function getName()[]: string {
    return 'Bar_baz_result';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.Bar_baz_result",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 0,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "success",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

class BarStaticMetadata implements \IThriftServiceStaticMetadata {
  const string THRIFT_SVC_NAME = 'Bar';

  public static function getServiceMetadata()[]: \tmeta_ThriftService {
    return tmeta_ThriftService::fromShape(
      shape(
        "name" => "module.Bar",
        "functions" => vec[
          tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "baz",
              "return_type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "arguments" => vec[
                tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 1,
                    "type" => tmeta_ThriftType::fromShape(
                      shape(
                        "t_set" => tmeta_ThriftSetType::fromShape(
                          shape(
                            "valueType" => tmeta_ThriftType::fromShape(
                              shape(
                                "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                              )
                            ),
                          )
                        ),
                      )
                    ),
                    "name" => "a",
                  )
                ),
                tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 2,
                    "type" => tmeta_ThriftType::fromShape(
                      shape(
                        "t_list" => tmeta_ThriftListType::fromShape(
                          shape(
                            "valueType" => tmeta_ThriftType::fromShape(
                              shape(
                                "t_map" => tmeta_ThriftMapType::fromShape(
                                  shape(
                                    "keyType" => tmeta_ThriftType::fromShape(
                                      shape(
                                        "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                                      )
                                    ),
                                    "valueType" => tmeta_ThriftType::fromShape(
                                      shape(
                                        "t_set" => tmeta_ThriftSetType::fromShape(
                                          shape(
                                            "valueType" => tmeta_ThriftType::fromShape(
                                              shape(
                                                "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                                              )
                                            ),
                                          )
                                        ),
                                      )
                                    ),
                                  )
                                ),
                              )
                            ),
                          )
                        ),
                      )
                    ),
                    "name" => "b",
                  )
                ),
              ],
            )
          ),
        ],
      )
    );
  }

  public static function getServiceMetadataResponse()[]: \tmeta_ThriftServiceMetadataResponse {
    return \tmeta_ThriftServiceMetadataResponse::fromShape(
      shape(
        'context' => \tmeta_ThriftServiceContext::fromShape(
          shape(
            'service_info' => self::getServiceMetadata(),
            'module' => \tmeta_ThriftModuleContext::fromShape(
              shape(
                'name' => 'module',
              )
            ),
          )
        ),
        'metadata' => \tmeta_ThriftMetadata::fromShape(
          shape(
            'enums' => dict[
            ],
            'structs' => dict[
            ],
            'exceptions' => dict[
            ],
            'services' => dict[
            ],
          )
        ),
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TServiceAnnotations {
    return shape(
      'service' => dict[],
      'functions' => dict[
      ],
    );
  }
}

