/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package one.two.three;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
@SuppressWarnings({ "unused" })
public class Constants {

  public static final Included ExampleIncluded = new Included();
  static {
    ExampleIncluded.setMyIntField(2L);
    Foo tmp0 = new Foo();
    tmp0.setA(2L);

    ExampleIncluded.setMyTransitiveField(tmp0);
  }

  public static final Long IncludedConstant = 42L;

}