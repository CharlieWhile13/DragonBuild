//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EFContentProtectionObserver-Protocol.h>
#import <Message/EFLoggable-Protocol.h>

@class NSConditionLock, NSMutableArray;
@protocol MFMailMessageLibraryMigratorDelegate, OS_dispatch_queue;

@interface MFMailMessageLibraryMigrator : NSObject <EFContentProtectionObserver, EFLoggable>
{
    BOOL _needsSpotlightReindex;
    BOOL _needsRebuildTriggers;
    BOOL _needsRebuildMessageInfoIndex;
    NSMutableArray *_postMigrationBlocks;
    id <MFMailMessageLibraryMigratorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_contentProtectionQueue;
    NSConditionLock *_migrationState;
}

+ (int)currentVersion;
+ (id)log;
@property(readonly, nonatomic) NSConditionLock *migrationState; // @synthesize migrationState=_migrationState;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue; // @synthesize contentProtectionQueue=_contentProtectionQueue;
@property(readonly, nonatomic) __weak id <MFMailMessageLibraryMigratorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (void)detachProtectedDatabaseWithConnection:(id)arg1;
- (long long)attachProtectedDatabaseWithConnection:(id)arg1;
- (void)runPostMigrationBlocksWithConnection:(id)arg1;
- (void)addPostMigrationBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)needsSpotlightReindex;
- (void)noteNeedsSpotlightReindex;
- (void)resetTTRPromptAndForceReindex;
- (BOOL)needsRebuildMessageInfoIndex;
- (void)noteRebuildMessageInfoIndex;
- (BOOL)needsRebuildTriggers;
- (void)noteNeedsRebuildTriggers;
- (BOOL)_checkForeignKeysWithConnection:(id)arg1;
- (long long)_checkContentProtectionState;
- (long long)_runMigrationStepsFromVersion:(int)arg1 connection:(id)arg2 schema:(id)arg3;
- (BOOL)migrateWithDatabaseConnection:(id)arg1 schema:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end
