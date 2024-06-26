/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
* @generated by Thrift
*/

#import <Foundation/Foundation.h>

#import <thrift/TProtocol.h>
#import <thrift/TApplicationException.h>
#import <thrift/TProtocolException.h>
#import <thrift/TProtocolUtil.h>
#import <thrift/TProcessor.h>
#import <thrift/TObjective-C.h>
#import <thrift/TBase.h>
#import <thrift/TBaseStruct.h>
#import <thrift/TBaseException.h>
#import "transitive.h"

typedef int64_t IncludedInt64;

typedef Foo * TransitiveFoo;

@interface Included : TBaseStruct <TBase, NSCoding> {
  int64_t __thrift_MyIntField;
  Foo * __thrift_MyTransitiveField;

  BOOL __thrift_MyIntField_set;
  BOOL __thrift_MyTransitiveField_set;
}

@property (nonatomic) int64_t MyIntField;
@property (nonatomic, retain) Foo * MyTransitiveField;

- (id) init NS_DESIGNATED_INITIALIZER;
- (id) initWithCoder:(NSCoder *)decoder NS_DESIGNATED_INITIALIZER;
- (id) initWithMyIntField: (int64_t) MyIntField MyTransitiveField: (Foo *) MyTransitiveField NS_DESIGNATED_INITIALIZER;
- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;
- (void) validate;
- (NSDictionary *) toDict;

- (BOOL) MyIntFieldIsSet;
- (BOOL) MyTransitiveFieldIsSet;
@end

@interface includesConstants : TBaseStruct {
}
+ (Included *) ExampleIncluded;
+ (int64_t) IncludedConstant;
@end
