//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSBatteryChargingView.h>

@class CSBatteryFillView, NSArray, NSLayoutConstraint, SBUILegibilityLabel, UIImage, UIView, _UIBackdropView;

@interface _CSSingleBatteryChargingView : CSBatteryChargingView
{
    UIView *_batteryContainerView;
    _UIBackdropView *_batteryBlurView;
    CSBatteryFillView *_batteryFillView;
    SBUILegibilityLabel *_chargePercentLabel;
    NSArray *_batteryConstraints;
    NSLayoutConstraint *_batteryTopOffset;
    UIImage *_batteryImage;
}

// - (void).cxx_destruct;
- (id)_chargePercentFont;
- (double)_batteryNoseOffset;
- (void)_layoutBattery;
- (void)_layoutChargePercentLabel;
- (void)layoutSubviews;
- (double)desiredVisibilityDuration;
- (long long)batteryCount;
- (void)setBatteryVisible:(BOOL)arg1;
- (BOOL)batteryVisible;
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (void)setLegibilitySettings:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
