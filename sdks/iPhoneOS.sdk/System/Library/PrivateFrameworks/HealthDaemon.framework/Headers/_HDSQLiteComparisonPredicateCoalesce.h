//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLiteComparisonPredicate.h>

@class NSArray;

@interface _HDSQLiteComparisonPredicateCoalesce : HDSQLiteComparisonPredicate
{
    NSArray *_properties;
}

@property(readonly, copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isCompatibleWithPredicate:(id)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithProperties:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;

@end
