//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKIdentity;

@interface BKMatchResultInfo : NSObject
{
    BOOL _unlocked;
    BOOL _credentialAdded;
    BKIdentity *_identity;
    long long _lockoutState;
}

@property(readonly, nonatomic) BOOL credentialAdded; // @synthesize credentialAdded=_credentialAdded;
@property(readonly, nonatomic) BOOL unlocked; // @synthesize unlocked=_unlocked;
@property(nonatomic) long long lockoutState; // @synthesize lockoutState=_lockoutState;
@property(retain, nonatomic) BKIdentity *identity; // @synthesize identity=_identity;
// - (void).cxx_destruct;

@end
