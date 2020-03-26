//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFColorProfile-Protocol.h>

@interface HFTemperatureColorProfile : NSObject <HFColorProfile>
{
    float _minimumTemperature;
    float _maximumTemperature;
}

@property(readonly, nonatomic) float maximumTemperature; // @synthesize maximumTemperature=_maximumTemperature;
@property(readonly, nonatomic) float minimumTemperature; // @synthesize minimumTemperature=_minimumTemperature;
- (float)adjustedTemperatureForTemperature:(float)arg1;
- (id)adjustedColorPrimitiveForPrimitive:(id)arg1;
- (id)initWithMinimumTemperature:(float)arg1 maximumTemperature:(float)arg2;

@end
