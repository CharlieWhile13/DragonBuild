//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBHomeToSwitcherSwitcherModifier.h>

@interface SBHomeToDeckSwitcherModifier : SBHomeToSwitcherSwitcherModifier
{
}

- (id)opacitySettings;
- (id)layoutSettings;
- (NSUInteger)numberOfAppLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (long long)backdropBlurType;
- (double)shadowOpacityForIndex:(NSUInteger)arg1;
- (double)titleOpacityForIndex:(NSUInteger)arg1;
- (double)titleAndIconOpacityForIndex:(NSUInteger)arg1;
- (UIRectCornerRadii)cardCornerRadiiForIndex:(NSUInteger)arg1;
- (double)darkeningAlphaForIndex:(NSUInteger)arg1;
- (double)opacityForIndex:(NSUInteger)arg1;
- (BOOL)isIndexVisible:(NSUInteger)arg1;
- (double)scaleForIndex:(NSUInteger)arg1;
- (CGRect)frameForIndex:(NSUInteger)arg1;
- (id)appLayoutToScrollToDuringTransition;

@end
