//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLSamplerState.h>

#import <MTLSimDriver/MTLSamplerStateSPI-Protocol.h>
#import <MTLSimDriver/MTLSerializerSamplerState-Protocol.h>

__attribute__((visibility("hidden")))
@interface MTLSimSamplerState : _MTLSamplerState <MTLSamplerStateSPI, MTLSerializerSamplerState>
{
    unsigned int _reference;
}

- (unsigned int)samplerRef;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1 reference:(unsigned int)arg2 device:(id)arg3;

@end
