// Autogenerated by Thrift for thrift/compiler/test/fixtures/types/src/module.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module


import (
    "context"
    "fmt"
    "reflect"

    included "included"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

var _ = included.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = context.Background
var _ = fmt.Printf
var _ = reflect.Ptr
var _ = thrift.ZERO
var _ = metadata.GoUnusedProtection__

type SomeService interface {
    BounceMap(ctx context.Context, m included.SomeMap) (included.SomeMap, error)
    BinaryKeyedMap(ctx context.Context, r []int64) (map[*TBinary]int64, error)
}

type SomeServiceClientInterface interface {
    thrift.ClientInterface
    SomeService
}

type SomeServiceChannelClient struct {
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ SomeServiceClientInterface = (*SomeServiceChannelClient)(nil)

func NewSomeServiceChannelClient(channel thrift.RequestChannel) *SomeServiceChannelClient {
    return &SomeServiceChannelClient{
        ch: channel,
    }
}

func (c *SomeServiceChannelClient) Close() error {
    return c.ch.Close()
}

type SomeServiceClient struct {
    chClient *SomeServiceChannelClient
}
// Compile time interface enforcer
var _ SomeServiceClientInterface = (*SomeServiceClient)(nil)

func NewSomeServiceClient(prot thrift.Protocol) *SomeServiceClient {
    return &SomeServiceClient{
        chClient: NewSomeServiceChannelClient(
            thrift.NewSerialChannel(prot),
        ),
    }
}

func (c *SomeServiceClient) Close() error {
    return c.chClient.Close()
}

func (c *SomeServiceChannelClient) BounceMap(ctx context.Context, m included.SomeMap) (included.SomeMap, error) {
    in := &reqSomeServiceBounceMap{
        M: m,
    }
    out := newRespSomeServiceBounceMap()
    err := c.ch.Call(ctx, "bounce_map", in, out)
    if err != nil {
        return nil, err
    }
    return out.GetSuccess(), nil
}

func (c *SomeServiceClient) BounceMap(ctx context.Context, m included.SomeMap) (included.SomeMap, error) {
    return c.chClient.BounceMap(ctx, m)
}

func (c *SomeServiceChannelClient) BinaryKeyedMap(ctx context.Context, r []int64) (map[*TBinary]int64, error) {
    in := &reqSomeServiceBinaryKeyedMap{
        R: r,
    }
    out := newRespSomeServiceBinaryKeyedMap()
    err := c.ch.Call(ctx, "binary_keyed_map", in, out)
    if err != nil {
        return nil, err
    }
    return out.GetSuccess(), nil
}

func (c *SomeServiceClient) BinaryKeyedMap(ctx context.Context, r []int64) (map[*TBinary]int64, error) {
    return c.chClient.BinaryKeyedMap(ctx, r)
}


type SomeServiceProcessor struct {
    processorFunctionMap map[string]thrift.ProcessorFunction
    functionServiceMap   map[string]string
    handler            SomeService
}

func NewSomeServiceProcessor(handler SomeService) *SomeServiceProcessor {
    p := &SomeServiceProcessor{
        handler:              handler,
        processorFunctionMap: make(map[string]thrift.ProcessorFunction),
        functionServiceMap:   make(map[string]string),
    }
    p.AddToProcessorFunctionMap("bounce_map", &procFuncSomeServiceBounceMap{handler: handler})
    p.AddToProcessorFunctionMap("binary_keyed_map", &procFuncSomeServiceBinaryKeyedMap{handler: handler})
    p.AddToFunctionServiceMap("bounce_map", "SomeService")
    p.AddToFunctionServiceMap("binary_keyed_map", "SomeService")

    return p
}

func (p *SomeServiceProcessor) AddToProcessorFunctionMap(key string, processorFunction thrift.ProcessorFunction) {
    p.processorFunctionMap[key] = processorFunction
}

func (p *SomeServiceProcessor) AddToFunctionServiceMap(key, service string) {
    p.functionServiceMap[key] = service
}

func (p *SomeServiceProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction) {
    return p.processorFunctionMap[key]
}

func (p *SomeServiceProcessor) ProcessorFunctionMap() map[string]thrift.ProcessorFunction {
    return p.processorFunctionMap
}

func (p *SomeServiceProcessor) FunctionServiceMap() map[string]string {
    return p.functionServiceMap
}

func (p *SomeServiceProcessor) PackageName() string {
    return "module"
}

func (p *SomeServiceProcessor) GetThriftMetadata() *metadata.ThriftMetadata {
    return GetThriftMetadataForService("module.SomeService")
}


type procFuncSomeServiceBounceMap struct {
    handler SomeService
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncSomeServiceBounceMap)(nil)

func (p *procFuncSomeServiceBounceMap) Read(iprot thrift.Decoder) (thrift.Struct, thrift.Exception) {
    args := newReqSomeServiceBounceMap()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncSomeServiceBounceMap) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Encoder) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("bounce_map", messageType, seqId); err2 != nil {
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

func (p *procFuncSomeServiceBounceMap) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqSomeServiceBounceMap)
    result := newRespSomeServiceBounceMap()
    retval, err := p.handler.BounceMap(ctx, args.M)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing BounceMap: " + err.Error(), err)
        return x, x
    }

    result.Success = retval
    return result, nil
}


type procFuncSomeServiceBinaryKeyedMap struct {
    handler SomeService
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncSomeServiceBinaryKeyedMap)(nil)

func (p *procFuncSomeServiceBinaryKeyedMap) Read(iprot thrift.Decoder) (thrift.Struct, thrift.Exception) {
    args := newReqSomeServiceBinaryKeyedMap()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncSomeServiceBinaryKeyedMap) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Encoder) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("binary_keyed_map", messageType, seqId); err2 != nil {
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

func (p *procFuncSomeServiceBinaryKeyedMap) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqSomeServiceBinaryKeyedMap)
    result := newRespSomeServiceBinaryKeyedMap()
    retval, err := p.handler.BinaryKeyedMap(ctx, args.R)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing BinaryKeyedMap: " + err.Error(), err)
        return x, x
    }

    result.Success = retval
    return result, nil
}


