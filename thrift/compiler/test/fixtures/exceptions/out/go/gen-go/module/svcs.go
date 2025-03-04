// Autogenerated by Thrift for thrift/compiler/test/fixtures/exceptions/src/module.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module


import (
    "context"
    "fmt"
    "io"
    "reflect"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

// (needed to ensure safety because of naive import list construction)
var _ = context.Background
var _ = fmt.Printf
var _ = io.EOF
var _ = reflect.Ptr
var _ = thrift.VOID
var _ = metadata.GoUnusedProtection__

type Raiser interface {
    DoBland(ctx context.Context) (error)
    DoRaise(ctx context.Context) (error)
    Get200(ctx context.Context) (string, error)
    Get500(ctx context.Context) (string, error)
}

type RaiserClientInterface interface {
    io.Closer
    Raiser
}

type RaiserClient struct {
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ RaiserClientInterface = (*RaiserClient)(nil)

func NewRaiserChannelClient(channel thrift.RequestChannel) *RaiserClient {
    return &RaiserClient{
        ch: channel,
    }
}

func NewRaiserClient(prot thrift.DO_NOT_USE_ChannelWrapper) *RaiserClient {
    var channel thrift.RequestChannel
    if prot != nil {
        channel = prot.DO_NOT_USE_WrapChannel()
    }
    return NewRaiserChannelClient(channel)
}

func (c *RaiserClient) Close() error {
    return c.ch.Close()
}

func (c *RaiserClient) DoBland(ctx context.Context) (error) {
    in := &reqRaiserDoBland{
    }
    out := newRespRaiserDoBland()
    err := c.ch.Call(ctx, "doBland", in, out)
    if err != nil {
        return err
    }
    return nil
}

func (c *RaiserClient) DoRaise(ctx context.Context) (error) {
    in := &reqRaiserDoRaise{
    }
    out := newRespRaiserDoRaise()
    err := c.ch.Call(ctx, "doRaise", in, out)
    if err != nil {
        return err
    } else if out.B != nil {
        return out.B
    } else if out.F != nil {
        return out.F
    } else if out.S != nil {
        return out.S
    }
    return nil
}

func (c *RaiserClient) Get200(ctx context.Context) (string, error) {
    in := &reqRaiserGet200{
    }
    out := newRespRaiserGet200()
    err := c.ch.Call(ctx, "get200", in, out)
    if err != nil {
        return "", err
    }
    return out.GetSuccess(), nil
}

func (c *RaiserClient) Get500(ctx context.Context) (string, error) {
    in := &reqRaiserGet500{
    }
    out := newRespRaiserGet500()
    err := c.ch.Call(ctx, "get500", in, out)
    if err != nil {
        return "", err
    } else if out.F != nil {
        return "", out.F
    } else if out.B != nil {
        return "", out.B
    } else if out.S != nil {
        return "", out.S
    }
    return out.GetSuccess(), nil
}


type RaiserProcessor struct {
    processorFunctionMap map[string]thrift.ProcessorFunction
    functionServiceMap   map[string]string
    handler              Raiser
}

func NewRaiserProcessor(handler Raiser) *RaiserProcessor {
    p := &RaiserProcessor{
        handler:              handler,
        processorFunctionMap: make(map[string]thrift.ProcessorFunction),
        functionServiceMap:   make(map[string]string),
    }
    p.AddToProcessorFunctionMap("doBland", &procFuncRaiserDoBland{handler: handler})
    p.AddToProcessorFunctionMap("doRaise", &procFuncRaiserDoRaise{handler: handler})
    p.AddToProcessorFunctionMap("get200", &procFuncRaiserGet200{handler: handler})
    p.AddToProcessorFunctionMap("get500", &procFuncRaiserGet500{handler: handler})
    p.AddToFunctionServiceMap("doBland", "Raiser")
    p.AddToFunctionServiceMap("doRaise", "Raiser")
    p.AddToFunctionServiceMap("get200", "Raiser")
    p.AddToFunctionServiceMap("get500", "Raiser")

    return p
}

func (p *RaiserProcessor) AddToProcessorFunctionMap(key string, processorFunction thrift.ProcessorFunction) {
    p.processorFunctionMap[key] = processorFunction
}

func (p *RaiserProcessor) AddToFunctionServiceMap(key, service string) {
    p.functionServiceMap[key] = service
}

func (p *RaiserProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction) {
    return p.processorFunctionMap[key]
}

func (p *RaiserProcessor) ProcessorFunctionMap() map[string]thrift.ProcessorFunction {
    return p.processorFunctionMap
}

func (p *RaiserProcessor) FunctionServiceMap() map[string]string {
    return p.functionServiceMap
}

func (p *RaiserProcessor) PackageName() string {
    return "module"
}

func (p *RaiserProcessor) GetThriftMetadata() *metadata.ThriftMetadata {
    return GetThriftMetadataForService("module.Raiser")
}


type procFuncRaiserDoBland struct {
    handler Raiser
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncRaiserDoBland)(nil)

func (p *procFuncRaiserDoBland) Read(decoder thrift.Decoder) (thrift.Struct, error) {
    args := newReqRaiserDoBland()
    if err := args.Read(decoder); err != nil {
        return nil, err
    }
    decoder.ReadMessageEnd()
    return args, nil
}

func (p *procFuncRaiserDoBland) Write(seqId int32, result thrift.WritableStruct, encoder thrift.Encoder) (err error) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = encoder.WriteMessageBegin("doBland", messageType, seqId); err2 != nil {
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

func (p *procFuncRaiserDoBland) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    result := newRespRaiserDoBland()
    err := p.handler.DoBland(ctx)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing DoBland: " + err.Error(), err)
        return x, x
    }

    return result, nil
}


type procFuncRaiserDoRaise struct {
    handler Raiser
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncRaiserDoRaise)(nil)

func (p *procFuncRaiserDoRaise) Read(decoder thrift.Decoder) (thrift.Struct, error) {
    args := newReqRaiserDoRaise()
    if err := args.Read(decoder); err != nil {
        return nil, err
    }
    decoder.ReadMessageEnd()
    return args, nil
}

func (p *procFuncRaiserDoRaise) Write(seqId int32, result thrift.WritableStruct, encoder thrift.Encoder) (err error) {
    var err2 error
    messageType := thrift.REPLY
    switch v := result.(type) {
    case *Banal:
        result = &respRaiserDoRaise{
            B: v,
        }
    case *Fiery:
        result = &respRaiserDoRaise{
            F: v,
        }
    case *Serious:
        result = &respRaiserDoRaise{
            S: v,
        }
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = encoder.WriteMessageBegin("doRaise", messageType, seqId); err2 != nil {
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

func (p *procFuncRaiserDoRaise) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    result := newRespRaiserDoRaise()
    err := p.handler.DoRaise(ctx)
    if err != nil {
        switch v := err.(type) {
        case *Banal:
            result.B = v
            return result, nil
        case *Fiery:
            result.F = v
            return result, nil
        case *Serious:
            result.S = v
            return result, nil
        default:
            x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing DoRaise: " + err.Error(), err)
            return x, x
        }
    }

    return result, nil
}


type procFuncRaiserGet200 struct {
    handler Raiser
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncRaiserGet200)(nil)

func (p *procFuncRaiserGet200) Read(decoder thrift.Decoder) (thrift.Struct, error) {
    args := newReqRaiserGet200()
    if err := args.Read(decoder); err != nil {
        return nil, err
    }
    decoder.ReadMessageEnd()
    return args, nil
}

func (p *procFuncRaiserGet200) Write(seqId int32, result thrift.WritableStruct, encoder thrift.Encoder) (err error) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = encoder.WriteMessageBegin("get200", messageType, seqId); err2 != nil {
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

func (p *procFuncRaiserGet200) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    result := newRespRaiserGet200()
    retval, err := p.handler.Get200(ctx)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing Get200: " + err.Error(), err)
        return x, x
    }

    result.Success = &retval
    return result, nil
}


type procFuncRaiserGet500 struct {
    handler Raiser
}
// Compile time interface enforcer
var _ thrift.ProcessorFunction = (*procFuncRaiserGet500)(nil)

func (p *procFuncRaiserGet500) Read(decoder thrift.Decoder) (thrift.Struct, error) {
    args := newReqRaiserGet500()
    if err := args.Read(decoder); err != nil {
        return nil, err
    }
    decoder.ReadMessageEnd()
    return args, nil
}

func (p *procFuncRaiserGet500) Write(seqId int32, result thrift.WritableStruct, encoder thrift.Encoder) (err error) {
    var err2 error
    messageType := thrift.REPLY
    switch v := result.(type) {
    case *Fiery:
        result = &respRaiserGet500{
            F: v,
        }
    case *Banal:
        result = &respRaiserGet500{
            B: v,
        }
    case *Serious:
        result = &respRaiserGet500{
            S: v,
        }
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = encoder.WriteMessageBegin("get500", messageType, seqId); err2 != nil {
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

func (p *procFuncRaiserGet500) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    result := newRespRaiserGet500()
    retval, err := p.handler.Get500(ctx)
    if err != nil {
        switch v := err.(type) {
        case *Fiery:
            result.F = v
            return result, nil
        case *Banal:
            result.B = v
            return result, nil
        case *Serious:
            result.S = v
            return result, nil
        default:
            x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing Get500: " + err.Error(), err)
            return x, x
        }
    }

    result.Success = &retval
    return result, nil
}


