/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.sink;

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
@com.facebook.swift.codec.ThriftStruct(value="InitialResponse", builder=InitialResponse.Builder.class)
public final class InitialResponse {

    @ThriftConstructor
    public InitialResponse(
        @com.facebook.swift.codec.ThriftField(value=1, name="content", requiredness=Requiredness.NONE) final String content
    ) {
        this.content = content;
    }
    
    @ThriftConstructor
    protected InitialResponse() {
      this.content = null;
    }
    
    public static class Builder {
    
        private String content = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="content", requiredness=Requiredness.NONE)
        public Builder setContent(String content) {
            this.content = content;
            return this;
        }
    
        public String getContent() { return content; }
    
        public Builder() { }
        public Builder(InitialResponse other) {
            this.content = other.content;
        }
    
        @ThriftConstructor
        public InitialResponse build() {
            InitialResponse result = new InitialResponse (
                this.content
            );
            return result;
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("InitialResponse");
    private final String content;
    public static final int _CONTENT = 1;
    private static final TField CONTENT_FIELD_DESC = new TField("content", TType.STRING, (short)1);
    static {
      NAMES_TO_IDS.put("content", 1);
      FIELD_METADATA.put(1, CONTENT_FIELD_DESC);
    }
    
    @com.facebook.swift.codec.ThriftField(value=1, name="content", requiredness=Requiredness.NONE)
    public String getContent() { return content; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("content", content);
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
    
        InitialResponse other = (InitialResponse)o;
    
        return
            Objects.equals(content, other.content) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            content
        });
    }
    
    
    public static InitialResponse read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(InitialResponse.NAMES_TO_IDS, InitialResponse.FIELD_METADATA);
      InitialResponse.Builder builder = new InitialResponse.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _CONTENT:
          if (__field.type == TType.STRING) {
            String content = oprot.readString();
            builder.setContent(content);
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
      if (this.content != null) {
        oprot.writeFieldBegin(CONTENT_FIELD_DESC);
        oprot.writeString(this.content);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
}
