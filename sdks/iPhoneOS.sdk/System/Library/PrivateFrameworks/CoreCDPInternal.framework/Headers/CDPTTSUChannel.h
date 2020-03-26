//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPSecureChannelApprovingProxy-Protocol.h>
#import <CoreCDPInternal/CDPSecureChannelProxy-Protocol.h>

@class CUMessageSession;

@interface CDPTTSUChannel : NSObject <CDPSecureChannelProxy, CDPSecureChannelApprovingProxy>
{
    CUMessageSession *_sharingSession;
    BOOL _approverBackupRecordsExist;
    NSUInteger _approveriCloudKeychainState;
    BOOL _sentInitialResponse;
}

// - (void).cxx_destruct;
- (void)setApproveriCloudKeychainState:(NSUInteger)arg1;
- (void)setApproverBackupRecordsExist:(BOOL)arg1;
- (void)listenForPayloadsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (NSUInteger)approveriCloudKeychainState;
- (BOOL)approverBackupRecordsExist;
- (void)sendPayload:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)initWithContext:(id)arg1;

@end
