// Autogenerated by Thrift for thrift/compiler/test/fixtures/go-typedef/src/module1.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module1


import (
    "context"
    "fmt"
    "io"
    "reflect"

    module0 "module0"
    module2 "module2"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

var _ = module0.GoUnusedProtection__
var _ = module2.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = context.Background
var _ = fmt.Printf
var _ = io.EOF
var _ = reflect.Ptr
var _ = thrift.VOID
var _ = metadata.GoUnusedProtection__

type Finder interface {
    ByPlate(ctx context.Context, plate Plate) (*Automobile, error)
    AliasByPlate(ctx context.Context, plate Plate) (*Car, error)
    PreviousPlate(ctx context.Context, plate Plate) (Plate, error)
}

type FinderClientInterface interface {
    io.Closer
    Finder
}

type FinderClient struct {
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ FinderClientInterface = (*FinderClient)(nil)

func NewFinderChannelClient(channel thrift.RequestChannel) *FinderClient {
    return &FinderClient{
        ch: channel,
    }
}

func NewFinderClient(prot thrift.DO_NOT_USE_ChannelWrapper) *FinderClient {
    var channel thrift.RequestChannel
    if prot != nil {
        channel = prot.DO_NOT_USE_WrapChannel()
    }
    return NewFinderChannelClient(channel)
}

func (c *FinderClient) Close() error {
    return c.ch.Close()
}

func (c *FinderClient) ByPlate(ctx context.Context, plate Plate) (*Automobile, error) {
    in := &reqFinderByPlate{
        Plate: plate,
    }
    out := newRespFinderByPlate()
    err := c.ch.Call(ctx, "byPlate", in, out)
    if err != nil {
        return nil, err
    }
    return out.GetSuccess(), nil
}

func (c *FinderClient) AliasByPlate(ctx context.Context, plate Plate) (*Car, error) {
    in := &reqFinderAliasByPlate{
        Plate: plate,
    }
    out := newRespFinderAliasByPlate()
    err := c.ch.Call(ctx, "aliasByPlate", in, out)
    if err != nil {
        return nil, err
    }
    return out.GetSuccess(), nil
}

func (c *FinderClient) PreviousPlate(ctx context.Context, plate Plate) (Plate, error) {
    in := &reqFinderPreviousPlate{
        Plate: plate,
    }
    out := newRespFinderPreviousPlate()
    err := c.ch.Call(ctx, "previousPlate", in, out)
    if err != nil {
        return "", err
    }
    return out.GetSuccess(), nil
}


type FinderProcessor struct {
    processorFunctionMap map[string]thrift.ProcessorFunction
    functionServiceMap   map[string]string
    handler              Finder
}

func NewFinderProcessor(handler Finder) *FinderProcessor {
    p := &FinderProcessor{
        handler:              handler,
        processorFunctionMap: make(map[string]thrift.ProcessorFunction),
        functionServiceMap:   make(map[string]string),
    }
    p.AddToProcessorFunctionMap("byPlate", &procFuncFinderByPlate{handler: handler})
    p.AddToProcessorFunctionMap("aliasByPlate", &procFuncFinderAliasByPlate{handler: handler})
    p.AddToProcessorFunctionMap("previousPlate", &procFuncFinderPreviousPlate{handler: handler})
    p.AddToFunctionServiceMap("byPlate", "Finder")
    p.AddToFunctionServiceMap("aliasByPlate", "Finder")
    p.AddToFunctionServiceMap("previousPlate", "Finder")

    return p
}

func (p *FinderProcessor) AddToProcessorFunctionMap(key string, processorFunction thrift.ProcessorFunction) {
    p.processorFunctionMap[key] = processorFunction
}

func (p *FinderProcessor) AddToFunctionServiceMap(key, service string) {
    p.functionServiceMap[key] = service
}

func (p *FinderProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction) {
    return p.processorFunctionMap[key]
}

func (p *FinderProcessor) ProcessorFunctionMap() map[string]thrift.ProcessorFunction {
    return p.processorFunctionMap
}

func (p *FinderProcessor) FunctionServiceMap() map[string]string {
    return p.functionServiceMap
}

func (p *FinderProcessor) PackageName() string {
    return "module1"
}

func (p *FinderProcessor) GetThriftMetadata() *metadata.ThriftMetadata {
    return GetThriftMetadataForService("module1.Finder")
}


type procFuncFinderByPlate struct {
    handler Finder
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncFinderByPlate)(nil)

func (p *procFuncFinderByPlate) Read(decoder thrift.Decoder) (thrift.Struct, error) {
    args := newReqFinderByPlate()
    if err := args.Read(decoder); err != nil {
        return nil, err
    }
    decoder.ReadMessageEnd()
    return args, nil
}

func (p *procFuncFinderByPlate) Write(seqId int32, result thrift.WritableStruct, encoder thrift.Encoder) (err error) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = encoder.WriteMessageBegin("byPlate", messageType, seqId); err2 != nil {
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

func (p *procFuncFinderByPlate) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqFinderByPlate)
    result := newRespFinderByPlate()
    retval, err := p.handler.ByPlate(ctx, args.Plate)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing ByPlate: " + err.Error(), err)
        return x, x
    }

    result.Success = retval
    return result, nil
}


type procFuncFinderAliasByPlate struct {
    handler Finder
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncFinderAliasByPlate)(nil)

func (p *procFuncFinderAliasByPlate) Read(decoder thrift.Decoder) (thrift.Struct, error) {
    args := newReqFinderAliasByPlate()
    if err := args.Read(decoder); err != nil {
        return nil, err
    }
    decoder.ReadMessageEnd()
    return args, nil
}

func (p *procFuncFinderAliasByPlate) Write(seqId int32, result thrift.WritableStruct, encoder thrift.Encoder) (err error) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = encoder.WriteMessageBegin("aliasByPlate", messageType, seqId); err2 != nil {
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

func (p *procFuncFinderAliasByPlate) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqFinderAliasByPlate)
    result := newRespFinderAliasByPlate()
    retval, err := p.handler.AliasByPlate(ctx, args.Plate)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing AliasByPlate: " + err.Error(), err)
        return x, x
    }

    result.Success = retval
    return result, nil
}


type procFuncFinderPreviousPlate struct {
    handler Finder
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncFinderPreviousPlate)(nil)

func (p *procFuncFinderPreviousPlate) Read(decoder thrift.Decoder) (thrift.Struct, error) {
    args := newReqFinderPreviousPlate()
    if err := args.Read(decoder); err != nil {
        return nil, err
    }
    decoder.ReadMessageEnd()
    return args, nil
}

func (p *procFuncFinderPreviousPlate) Write(seqId int32, result thrift.WritableStruct, encoder thrift.Encoder) (err error) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = encoder.WriteMessageBegin("previousPlate", messageType, seqId); err2 != nil {
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

func (p *procFuncFinderPreviousPlate) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqFinderPreviousPlate)
    result := newRespFinderPreviousPlate()
    retval, err := p.handler.PreviousPlate(ctx, args.Plate)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing PreviousPlate: " + err.Error(), err)
        return x, x
    }

    result.Success = &retval
    return result, nil
}


