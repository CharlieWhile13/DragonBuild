//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSAttributedString, NSDate;
@protocol WDDashboardCellSecondaryValueSourceDelegate;

@protocol WDDashboardCellSecondaryValueSource
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) long long timeScope;
@property(readonly, nonatomic) NSAttributedString *secondaryValue;
@property(nonatomic) __weak id <WDDashboardCellSecondaryValueSourceDelegate> secondaryValueSourceDelegate;
@end
