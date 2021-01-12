/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.refs;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.async.*;
import org.apache.thrift.meta_data.*;
import org.apache.thrift.server.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import org.apache.thrift.meta_data.FieldValueMetaData;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct(value="MyStruct", builder=MyStruct.Builder.class)
public final class MyStruct {

    @ThriftConstructor
    public MyStruct(
        @com.facebook.swift.codec.ThriftField(value=1, name="opt_ref", requiredness=Requiredness.OPTIONAL) final test.fixtures.refs.MyField optRef,
        @com.facebook.swift.codec.ThriftField(value=2, name="ref", requiredness=Requiredness.NONE) final test.fixtures.refs.MyField ref,
        @com.facebook.swift.codec.ThriftField(value=3, name="req_ref", requiredness=Requiredness.REQUIRED) final test.fixtures.refs.MyField reqRef
    ) {
        this.optRef = optRef;
        this.ref = ref;
        this.reqRef = reqRef;
    }
    
    @ThriftConstructor
    protected MyStruct() {
      this.optRef = null;
      this.ref = null;
      this.reqRef = null;
    }
    
    public static class Builder {
    
        private test.fixtures.refs.MyField optRef = null;
        private test.fixtures.refs.MyField ref = null;
        private test.fixtures.refs.MyField reqRef = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="opt_ref", requiredness=Requiredness.OPTIONAL)
        public Builder setOptRef(test.fixtures.refs.MyField optRef) {
            this.optRef = optRef;
            return this;
        }
    
        public test.fixtures.refs.MyField getOptRef() { return optRef; }
    
            @com.facebook.swift.codec.ThriftField(value=2, name="ref", requiredness=Requiredness.NONE)
        public Builder setRef(test.fixtures.refs.MyField ref) {
            this.ref = ref;
            return this;
        }
    
        public test.fixtures.refs.MyField getRef() { return ref; }
    
            @com.facebook.swift.codec.ThriftField(value=3, name="req_ref", requiredness=Requiredness.REQUIRED)
        public Builder setReqRef(test.fixtures.refs.MyField reqRef) {
            this.reqRef = reqRef;
            return this;
        }
    
        public test.fixtures.refs.MyField getReqRef() { return reqRef; }
    
        public Builder() { }
        public Builder(MyStruct other) {
            this.optRef = other.optRef;
            this.ref = other.ref;
            this.reqRef = other.reqRef;
        }
    
        @ThriftConstructor
        public MyStruct build() {
            MyStruct result = new MyStruct (
                this.optRef,
                this.ref,
                this.reqRef
            );
            return result;
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("MyStruct");
    private final test.fixtures.refs.MyField optRef;
    public static final int _OPT_REF = 1;
    private static final TField OPT_REF_FIELD_DESC = new TField("opt_ref", TType.STRUCT, (short)1);
        private final test.fixtures.refs.MyField ref;
    public static final int _REF = 2;
    private static final TField REF_FIELD_DESC = new TField("ref", TType.STRUCT, (short)2);
        private final test.fixtures.refs.MyField reqRef;
    public static final int _REQ_REF = 3;
    private static final TField REQ_REF_FIELD_DESC = new TField("req_ref", TType.STRUCT, (short)3);
    static {
      NAMES_TO_IDS.put("optRef", 1);
      FIELD_METADATA.put(1, OPT_REF_FIELD_DESC);
      NAMES_TO_IDS.put("ref", 2);
      FIELD_METADATA.put(2, REF_FIELD_DESC);
      NAMES_TO_IDS.put("reqRef", 3);
      FIELD_METADATA.put(3, REQ_REF_FIELD_DESC);
    }
    
    @com.facebook.swift.codec.ThriftField(value=1, name="opt_ref", requiredness=Requiredness.OPTIONAL)
    public test.fixtures.refs.MyField getOptRef() { return optRef; }
    
    
    @com.facebook.swift.codec.ThriftField(value=2, name="ref", requiredness=Requiredness.NONE)
    public test.fixtures.refs.MyField getRef() { return ref; }
    
    
    @com.facebook.swift.codec.ThriftField(value=3, name="req_ref", requiredness=Requiredness.REQUIRED)
    public test.fixtures.refs.MyField getReqRef() { return reqRef; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("optRef", optRef);
        helper.add("ref", ref);
        helper.add("reqRef", reqRef);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        MyStruct other = (MyStruct)o;
    
        return
            Objects.equals(optRef, other.optRef) &&
            Objects.equals(ref, other.ref) &&
            Objects.equals(reqRef, other.reqRef) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            optRef,
            ref,
            reqRef
        });
    }
    
    
    public static MyStruct read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(MyStruct.NAMES_TO_IDS, MyStruct.FIELD_METADATA);
      MyStruct.Builder builder = new MyStruct.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _OPT_REF:
          if (__field.type == TType.STRUCT) {
            test.fixtures.refs.MyField optRef = test.fixtures.refs.MyField.read0(oprot);
            builder.setOptRef(optRef);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _REF:
          if (__field.type == TType.STRUCT) {
            test.fixtures.refs.MyField ref = test.fixtures.refs.MyField.read0(oprot);
            builder.setRef(ref);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _REQ_REF:
          if (__field.type == TType.STRUCT) {
            test.fixtures.refs.MyField reqRef = test.fixtures.refs.MyField.read0(oprot);
            builder.setReqRef(reqRef);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      if (this.optRef != null) {
        oprot.writeFieldBegin(OPT_REF_FIELD_DESC);
        this.optRef.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.ref != null) {
        oprot.writeFieldBegin(REF_FIELD_DESC);
        this.ref.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.reqRef != null) {
        oprot.writeFieldBegin(REQ_REF_FIELD_DESC);
        this.reqRef.write0(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
}
