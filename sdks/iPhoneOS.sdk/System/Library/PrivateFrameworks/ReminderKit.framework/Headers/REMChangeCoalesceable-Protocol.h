//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSSet;

@protocol REMChangeCoalesceable
- (NSSet *)updatedProperties;
- (id)copyForCoalescing;
- (NSArray *)coalescedChanges;
- (BOOL)isCoalesced;
@end
