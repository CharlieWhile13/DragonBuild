//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>

@class NSString;

@interface SBInAppStatusBarHiddenAssertion : NSObject <BSInvalidatable>
{
    NSString *_identifier;
    NSString *_reason;
    id /* CDUnknownBlockType */ _invalidationBlock;
}

// - (void).cxx_destruct;
- (void)invalidateWithAnimation:(BOOL)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 invalidationBlock:(id /* CDUnknownBlockType */)arg3;

@end
