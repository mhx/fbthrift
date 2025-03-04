// Autogenerated by Thrift for thrift/compiler/test/fixtures/includes/src/service.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package service


import (
    "context"
    "fmt"
    "io"
    "reflect"

    module "module"
    includes "includes"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

var _ = module.GoUnusedProtection__
var _ = includes.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = context.Background
var _ = fmt.Printf
var _ = io.EOF
var _ = reflect.Ptr
var _ = thrift.VOID
var _ = metadata.GoUnusedProtection__

type MyService interface {
    Query(ctx context.Context, s *module.MyStruct, i *includes.Included) (error)
    HasArgDocs(ctx context.Context, s *module.MyStruct, i *includes.Included) (error)
}

type MyServiceClientInterface interface {
    io.Closer
    MyService
}

type MyServiceClient struct {
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ MyServiceClientInterface = (*MyServiceClient)(nil)

func NewMyServiceChannelClient(channel thrift.RequestChannel) *MyServiceClient {
    return &MyServiceClient{
        ch: channel,
    }
}

func NewMyServiceClient(prot thrift.DO_NOT_USE_ChannelWrapper) *MyServiceClient {
    var channel thrift.RequestChannel
    if prot != nil {
        channel = prot.DO_NOT_USE_WrapChannel()
    }
    return NewMyServiceChannelClient(channel)
}

func (c *MyServiceClient) Close() error {
    return c.ch.Close()
}

func (c *MyServiceClient) Query(ctx context.Context, s *module.MyStruct, i *includes.Included) (error) {
    in := &reqMyServiceQuery{
        S: s,
        I: i,
    }
    out := newRespMyServiceQuery()
    err := c.ch.Call(ctx, "query", in, out)
    if err != nil {
        return err
    }
    return nil
}

func (c *MyServiceClient) HasArgDocs(ctx context.Context, s *module.MyStruct, i *includes.Included) (error) {
    in := &reqMyServiceHasArgDocs{
        S: s,
        I: i,
    }
    out := newRespMyServiceHasArgDocs()
    err := c.ch.Call(ctx, "has_arg_docs", in, out)
    if err != nil {
        return err
    }
    return nil
}


type MyServiceProcessor struct {
    processorFunctionMap map[string]thrift.ProcessorFunction
    functionServiceMap   map[string]string
    handler              MyService
}

func NewMyServiceProcessor(handler MyService) *MyServiceProcessor {
    p := &MyServiceProcessor{
        handler:              handler,
        processorFunctionMap: make(map[string]thrift.ProcessorFunction),
        functionServiceMap:   make(map[string]string),
    }
    p.AddToProcessorFunctionMap("query", &procFuncMyServiceQuery{handler: handler})
    p.AddToProcessorFunctionMap("has_arg_docs", &procFuncMyServiceHasArgDocs{handler: handler})
    p.AddToFunctionServiceMap("query", "MyService")
    p.AddToFunctionServiceMap("has_arg_docs", "MyService")

    return p
}

func (p *MyServiceProcessor) AddToProcessorFunctionMap(key string, processorFunction thrift.ProcessorFunction) {
    p.processorFunctionMap[key] = processorFunction
}

func (p *MyServiceProcessor) AddToFunctionServiceMap(key, service string) {
    p.functionServiceMap[key] = service
}

func (p *MyServiceProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction) {
    return p.processorFunctionMap[key]
}

func (p *MyServiceProcessor) ProcessorFunctionMap() map[string]thrift.ProcessorFunction {
    return p.processorFunctionMap
}

func (p *MyServiceProcessor) FunctionServiceMap() map[string]string {
    return p.functionServiceMap
}

func (p *MyServiceProcessor) PackageName() string {
    return "service"
}

func (p *MyServiceProcessor) GetThriftMetadata() *metadata.ThriftMetadata {
    return GetThriftMetadataForService("service.MyService")
}


type procFuncMyServiceQuery struct {
    handler MyService
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncMyServiceQuery)(nil)

func (p *procFuncMyServiceQuery) Read(decoder thrift.Decoder) (thrift.Struct, error) {
    args := newReqMyServiceQuery()
    if err := args.Read(decoder); err != nil {
        return nil, err
    }
    decoder.ReadMessageEnd()
    return args, nil
}

func (p *procFuncMyServiceQuery) Write(seqId int32, result thrift.WritableStruct, encoder thrift.Encoder) (err error) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = encoder.WriteMessageBegin("query", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(encoder); err == nil && err2 != nil {
        err = err2
    }
    if err2 = encoder.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = encoder.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncMyServiceQuery) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqMyServiceQuery)
    result := newRespMyServiceQuery()
    err := p.handler.Query(ctx, args.S, args.I)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing Query: " + err.Error(), err)
        return x, x
    }

    return result, nil
}


type procFuncMyServiceHasArgDocs struct {
    handler MyService
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncMyServiceHasArgDocs)(nil)

func (p *procFuncMyServiceHasArgDocs) Read(decoder thrift.Decoder) (thrift.Struct, error) {
    args := newReqMyServiceHasArgDocs()
    if err := args.Read(decoder); err != nil {
        return nil, err
    }
    decoder.ReadMessageEnd()
    return args, nil
}

func (p *procFuncMyServiceHasArgDocs) Write(seqId int32, result thrift.WritableStruct, encoder thrift.Encoder) (err error) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = encoder.WriteMessageBegin("has_arg_docs", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(encoder); err == nil && err2 != nil {
        err = err2
    }
    if err2 = encoder.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = encoder.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncMyServiceHasArgDocs) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqMyServiceHasArgDocs)
    result := newRespMyServiceHasArgDocs()
    err := p.handler.HasArgDocs(ctx, args.S, args.I)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing HasArgDocs: " + err.Error(), err)
        return x, x
    }

    return result, nil
}


