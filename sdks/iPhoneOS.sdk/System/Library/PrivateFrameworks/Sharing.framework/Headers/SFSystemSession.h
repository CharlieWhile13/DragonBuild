//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, SFDevice, SFSession, SFSessionRequestInfo;
@protocol OS_dispatch_queue;

@interface SFSystemSession : NSObject
{
    SFSessionRequestInfo *_currentRequest;
    BOOL _invalidateCalled;
    BOOL _pairVerifyDone;
    NSMutableArray _requests;
    SFSession *_sfSession;
    int _state;
    BOOL _stateDone;
    NSError *_stateError;
    BOOL _allowUnencrypted;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
}

@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) BOOL allowUnencrypted; // @synthesize allowUnencrypted=_allowUnencrypted;
// - (void).cxx_destruct;
- (void)rebootSystemWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)removeProfileWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)installProfileResponse:(id)arg1 error:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)installProfileWithURL:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)installProfileWithData:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getProfilesResponse:(id)arg1 error:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)getProfilesWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)getSystemInfoWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_processRequestsWithError:(id)arg1;
- (void)_processRequests;
- (void)_runPairVerifyStart;
- (void)_runSFSessionStart;
- (void)_run;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (id)init;

@end
