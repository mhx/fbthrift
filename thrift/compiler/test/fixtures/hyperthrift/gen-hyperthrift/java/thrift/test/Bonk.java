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
public class Bonk extends HyperThriftBase {
  public static final String TYPE_NAME = "thrift.test.Bonk";


  @Nullable
  public String message() {
    return getFieldValue(0);
  }

  @Nullable
  public int type() {
    return getFieldValue(1);
  }



  public static class Builder extends HyperThriftBase.Builder {
    public Builder() {
      super(2);
    }

    public Builder(Bonk other) {
      super(other);
    }

    @Nullable
    public String message() {
      return getFieldValue(0);
    }

    public Builder Bonk( String value) {
      setFieldValue(0, value);
      return this;
    }

    @Nullable
    public int type() {
      return getFieldValue(1);
    }

    public Builder Bonk( int value) {
      setFieldValue(1, value);
      return this;
    }

    public Bonk build() {
      Object[] fields = markBuilt();
      Bonk instance = new Bonk();
      instance.init(TYPE_NAME, fields);
      return instance;
    }
  }
}