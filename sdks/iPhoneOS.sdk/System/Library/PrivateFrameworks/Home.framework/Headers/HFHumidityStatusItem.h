//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAbstractRangeStatusItem.h>

@interface HFHumidityStatusItem : HFAbstractRangeStatusItem
{
}

+ (NSUInteger)abstractCurrentModeInResponse:(id)arg1;
+ (NSUInteger)abstractTargetModeInResponse:(id)arg1;
+ (BOOL)isPercentRange;
+ (id /* CDUnknownBlockType */)displayValueComparator;
+ (id)localizationKeyPrefix;
+ (id)targetModeCharacteristicTypes;
+ (id)currentModeCharacteristicTypes;
+ (id)maximumTargetValueCharacteristicType;
+ (id)minimumTargetValueCharacteristicType;
+ (id)targetValueCharacteristicType;
+ (id)currentValueCharacteristicType;
+ (id)sensorServiceTypes;
+ (id)controllableServiceTypes;

@end
