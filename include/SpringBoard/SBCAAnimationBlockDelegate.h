//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface SBCAAnimationBlockDelegate : NSObject <CAAnimationDelegate>
{
    id /* CDUnknownBlockType */ _animationDidStartHandler;
    id /* CDUnknownBlockType */ _animationDidStopHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ animationDidStopHandler; // @synthesize animationDidStopHandler=_animationDidStopHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ animationDidStartHandler; // @synthesize animationDidStartHandler=_animationDidStartHandler;
// - (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;

@end
