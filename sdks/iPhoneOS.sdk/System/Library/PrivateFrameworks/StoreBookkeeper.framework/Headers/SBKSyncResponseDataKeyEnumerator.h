//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSEnumerator, SBKSyncResponseData, SBKSyncTransaction;

__attribute__((visibility("hidden")))
@interface SBKSyncResponseDataKeyEnumerator : NSObject
{
    BOOL _resolvedConflictsNeedSyncToServer;
    SBKSyncResponseData *_responseData;
    SBKSyncTransaction *_transaction;
    id /* CDUnknownBlockType */ _completionBlock;
    NSEnumerator *_updatedKeysEnumerator;
    NSEnumerator *_conflictedKeysEnumerator;
    NSEnumerator *_deletedKeysEnumerator;
}

@property(retain) NSEnumerator *deletedKeysEnumerator; // @synthesize deletedKeysEnumerator=_deletedKeysEnumerator;
@property(retain) NSEnumerator *conflictedKeysEnumerator; // @synthesize conflictedKeysEnumerator=_conflictedKeysEnumerator;
@property(retain) NSEnumerator *updatedKeysEnumerator; // @synthesize updatedKeysEnumerator=_updatedKeysEnumerator;
@property BOOL resolvedConflictsNeedSyncToServer; // @synthesize resolvedConflictsNeedSyncToServer=_resolvedConflictsNeedSyncToServer;
@property(copy) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) SBKSyncTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain) SBKSyncResponseData *responseData; // @synthesize responseData=_responseData;
// - (void).cxx_destruct;
- (void)_processNextKey;
- (void)_processDeletedKey:(id)arg1 isDirty:(BOOL )arg2;
- (void)_processUpdatedKey:(id)arg1 isConflict:(BOOL)arg2 isDirty:(BOOL )arg3;
- (void)enumerateKeysInResponseForTransaction:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (id)initWithResponseData:(id)arg1;

@end
