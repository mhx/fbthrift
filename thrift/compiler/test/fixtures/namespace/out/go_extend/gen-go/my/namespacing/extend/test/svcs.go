// Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace/src/extend.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package test


import (
    "context"
    "fmt"
    "reflect"

    test0 "my/namespacing/test"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

var _ = test0.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = context.Background
var _ = fmt.Printf
var _ = reflect.Ptr
var _ = thrift.ZERO
var _ = metadata.GoUnusedProtection__

type ExtendTestService interface {
    // Inherited/extended service
    test0.HsTestService

    Check(ctx context.Context, struct1 *test0.HsFoo) (bool, error)
}

type ExtendTestServiceChannelClientInterface interface {
    thrift.ClientInterface
    ExtendTestService
}

type ExtendTestServiceClientInterface interface {
    thrift.ClientInterface
    // Inherited/extended service
    test0.HsTestServiceClientInterface

    Check(struct1 *test0.HsFoo) (bool, error)
}

type ExtendTestServiceContextClientInterface interface {
    ExtendTestServiceClientInterface
    // Inherited/extended service
    test0.HsTestServiceContextClientInterface

    CheckContext(ctx context.Context, struct1 *test0.HsFoo) (bool, error)
}

type ExtendTestServiceChannelClient struct {
    // Inherited/extended service
    *test0.HsTestServiceChannelClient
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ ExtendTestServiceChannelClientInterface = (*ExtendTestServiceChannelClient)(nil)

func NewExtendTestServiceChannelClient(channel thrift.RequestChannel) *ExtendTestServiceChannelClient {
    return &ExtendTestServiceChannelClient{
        HsTestServiceChannelClient: test0.NewHsTestServiceChannelClient(channel),
        ch: channel,
    }
}

func (c *ExtendTestServiceChannelClient) Close() error {
    return c.ch.Close()
}

type ExtendTestServiceClient struct {
    // Inherited/extended service
    *test0.HsTestServiceClient
    chClient *ExtendTestServiceChannelClient
}
// Compile time interface enforcer
var _ ExtendTestServiceClientInterface = (*ExtendTestServiceClient)(nil)
var _ ExtendTestServiceContextClientInterface = (*ExtendTestServiceClient)(nil)

func NewExtendTestServiceClient(prot thrift.Protocol) *ExtendTestServiceClient {
    return &ExtendTestServiceClient{
        HsTestServiceClient: test0.NewHsTestServiceClient(prot),
        chClient: NewExtendTestServiceChannelClient(
            thrift.NewSerialChannel(prot),
        ),
    }
}

func (c *ExtendTestServiceClient) Close() error {
    return c.chClient.Close()
}

func (c *ExtendTestServiceChannelClient) Check(ctx context.Context, struct1 *test0.HsFoo) (bool, error) {
    in := &reqExtendTestServiceCheck{
        Struct1: struct1,
    }
    out := newRespExtendTestServiceCheck()
    err := c.ch.Call(ctx, "check", in, out)
    if err != nil {
        return false, err
    }
    return out.GetSuccess(), nil
}

func (c *ExtendTestServiceClient) Check(struct1 *test0.HsFoo) (bool, error) {
    return c.chClient.Check(context.Background(), struct1)
}

func (c *ExtendTestServiceClient) CheckContext(ctx context.Context, struct1 *test0.HsFoo) (bool, error) {
    return c.chClient.Check(ctx, struct1)
}


type ExtendTestServiceProcessor struct {
    // Inherited/extended processor
    *test0.HsTestServiceProcessor
}

func NewExtendTestServiceProcessor(handler ExtendTestService) *ExtendTestServiceProcessor {
    p := &ExtendTestServiceProcessor{
        test0.NewHsTestServiceProcessor(handler),
    }
    p.AddToProcessorFunctionMap("check", &procFuncExtendTestServiceCheck{handler: handler})
    p.AddToFunctionServiceMap("check", "ExtendTestService")

    return p
}

func (p *ExtendTestServiceProcessor) GetThriftMetadata() *metadata.ThriftMetadata {
    return GetThriftMetadataForService("extend.ExtendTestService")
}


type procFuncExtendTestServiceCheck struct {
    handler ExtendTestService
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncExtendTestServiceCheck)(nil)

func (p *procFuncExtendTestServiceCheck) Read(iprot thrift.Decoder) (thrift.Struct, thrift.Exception) {
    args := newReqExtendTestServiceCheck()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncExtendTestServiceCheck) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Encoder) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("check", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(oprot); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncExtendTestServiceCheck) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqExtendTestServiceCheck)
    result := newRespExtendTestServiceCheck()
    retval, err := p.handler.Check(ctx, args.Struct1)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing Check: " + err.Error(), err)
        return x, x
    }

    result.Success = &retval
    return result, nil
}


