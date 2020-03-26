//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCVideoFrameBufferPool : NSObject
{
    int _maxBufferCount;
    NSMutableDictionary *_bufferPool;
}

- (BOOL)releaseFrameWithTime:(long long)arg1;
- (BOOL)addFrame:(struct __CVBuffer )arg1 time:(long long)arg2;
- (void)dealloc;
- (id)initWithCapacity:(int)arg1;

@end
