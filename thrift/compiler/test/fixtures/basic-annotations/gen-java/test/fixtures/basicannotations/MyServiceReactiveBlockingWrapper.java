/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basicannotations;

import java.util.*;

public class MyServiceReactiveBlockingWrapper 
  implements MyService {
  private final MyService.Reactive _delegate;

  public MyServiceReactiveBlockingWrapper(MyService.Reactive _delegate) {
    
    this._delegate = _delegate;
  }

  public MyServiceReactiveBlockingWrapper(org.apache.thrift.ProtocolId _protocolId, reactor.core.publisher.Mono<? extends com.facebook.thrift.client.RpcClient> _rpcClient, Map<String, String> _headers, Map<String, String> _persistentHeaders) {
    this(new MyServiceReactiveClient(_protocolId, _rpcClient, _headers, _persistentHeaders));
  }

  @java.lang.Override
  public void close() {
    _delegate.dispose();
  }

  @java.lang.Override
  public void ping() throws org.apache.thrift.TException {
      _delegate.ping().block();
  }

  @java.lang.Override
  public void ping(
        com.facebook.thrift.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      _delegate.ping(rpcOptions).block();
  }

  @java.lang.Override
  public com.facebook.thrift.client.ResponseWrapper<Void> pingWrapper(
    com.facebook.thrift.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      return _delegate.pingWrapper(rpcOptions).block();
  }
  @java.lang.Override
  public String getRandomData() throws org.apache.thrift.TException {
      return _delegate.getRandomData().block();
  }

  @java.lang.Override
  public String getRandomData(
        com.facebook.thrift.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      return _delegate.getRandomData(rpcOptions).block();
  }

  @java.lang.Override
  public com.facebook.thrift.client.ResponseWrapper<String> getRandomDataWrapper(
    com.facebook.thrift.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      return _delegate.getRandomDataWrapper(rpcOptions).block();
  }
  @java.lang.Override
  public boolean hasDataById( final long id) throws org.apache.thrift.TException {
      return _delegate.hasDataById(id).block();
  }

  @java.lang.Override
  public boolean hasDataById(
        final long id,
        com.facebook.thrift.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      return _delegate.hasDataById(id,rpcOptions).block();
  }

  @java.lang.Override
  public com.facebook.thrift.client.ResponseWrapper<Boolean> hasDataByIdWrapper(
    final long id,
    com.facebook.thrift.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      return _delegate.hasDataByIdWrapper(id, rpcOptions).block();
  }
  @java.lang.Override
  public String getDataById( final long id) throws org.apache.thrift.TException {
      return _delegate.getDataById(id).block();
  }

  @java.lang.Override
  public String getDataById(
        final long id,
        com.facebook.thrift.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      return _delegate.getDataById(id,rpcOptions).block();
  }

  @java.lang.Override
  public com.facebook.thrift.client.ResponseWrapper<String> getDataByIdWrapper(
    final long id,
    com.facebook.thrift.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      return _delegate.getDataByIdWrapper(id, rpcOptions).block();
  }
  @java.lang.Override
  public void putDataById( final long id, final String data) throws org.apache.thrift.TException {
      _delegate.putDataById(id, data).block();
  }

  @java.lang.Override
  public void putDataById(
        final long id,
        final String data,
        com.facebook.thrift.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      _delegate.putDataById(id,data,rpcOptions).block();
  }

  @java.lang.Override
  public com.facebook.thrift.client.ResponseWrapper<Void> putDataByIdWrapper(
    final long id,
    final String data,
    com.facebook.thrift.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      return _delegate.putDataByIdWrapper(id, data, rpcOptions).block();
  }
  @java.lang.Override
  public void lobDataById( final long id, final String data) throws org.apache.thrift.TException {
      _delegate.lobDataById(id, data).block();
  }

  @java.lang.Override
  public void lobDataById(
        final long id,
        final String data,
        com.facebook.thrift.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      _delegate.lobDataById(id,data,rpcOptions).block();
  }

  @java.lang.Override
  public com.facebook.thrift.client.ResponseWrapper<Void> lobDataByIdWrapper(
    final long id,
    final String data,
    com.facebook.thrift.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      return _delegate.lobDataByIdWrapper(id, data, rpcOptions).block();
  }
  @java.lang.Override
  public void doNothing() throws org.apache.thrift.TException {
      _delegate.doNothing().block();
  }

  @java.lang.Override
  public void doNothing(
        com.facebook.thrift.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      _delegate.doNothing(rpcOptions).block();
  }

  @java.lang.Override
  public com.facebook.thrift.client.ResponseWrapper<Void> doNothingWrapper(
    com.facebook.thrift.client.RpcOptions rpcOptions) throws org.apache.thrift.TException {
      return _delegate.doNothingWrapper(rpcOptions).block();
  }

}
