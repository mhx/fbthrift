/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package thrift.test;

import java.util.List;
import java.util.Map;
import java.util.Set;
import javax.annotation.concurrent.Immutable;
import javax.annotation.Nullable;
import com.facebook.hyperthrift.HyperThriftBase;
import com.facebook.hyperthrift.reflect.HyperThriftType;

@Immutable
@HyperThriftType
public class NestedListsBonk extends HyperThriftBase {
  public static final String TYPE_NAME = "thrift.test.NestedListsBonk";


  @Nullable
  public List<List<List<thrift.test.Bonk>>> bonk() {
    return getFieldValue(0);
  }



  public static class Builder extends HyperThriftBase.Builder {
    public Builder() {
      super(1);
    }

    public Builder(NestedListsBonk other) {
      super(other);
    }

    @Nullable
    public List<List<List<thrift.test.Bonk>>> bonk() {
      return getFieldValue(0);
    }

    public Builder NestedListsBonk( List<List<List<thrift.test.Bonk>>> value) {
      setFieldValue(0, value);
      return this;
    }

    public NestedListsBonk build() {
      Object[] fields = markBuilt();
      NestedListsBonk instance = new NestedListsBonk();
      instance.init(TYPE_NAME, fields);
      return instance;
    }
  }
}
