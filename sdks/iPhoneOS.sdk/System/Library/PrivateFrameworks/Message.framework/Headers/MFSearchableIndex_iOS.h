//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/EDSearchableIndex.h>

#import <Message/EFLoggable-Protocol.h>
#import <Message/MFDiagnosticsGenerator-Protocol.h>

@interface MFSearchableIndex_iOS : EDSearchableIndex <EFLoggable, MFDiagnosticsGenerator>
{
}

+ (id)log;
- (void)removeSearchQueryCancelable:(id)arg1;
- (void)addSearchQueryCancelable:(id)arg1;
- (BOOL)shouldCancelSearchQuery;
- (BOOL)isPluggedIn;
- (id)powerObservable;
- (void)logPowerEventWithIdentifier:(id)arg1 eventData:(id)arg2;
- (BOOL)canIndexAttachments;
- (void)indexMessages:(id)arg1 includeBody:(BOOL)arg2 indexingType:(long long)arg3;
- (void)_indexMessage:(id)arg1 includeBody:(BOOL)arg2 indexingType:(long long)arg3;
- (id)initWithName:(id)arg1 dataSource:(id)arg2 reasonProvider:(id)arg3;

@end
