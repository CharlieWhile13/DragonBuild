//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPageControl.h>

@class NSArray, SBIconPageIndicatorImageSetCache, SBIconPageIndicatorImageSetResult, _UILegibilitySettings;
@protocol SBIconListPageControlDelegate;

@interface SBIconListPageControl : UIPageControl
{
    BOOL _hasSetLegibility;
    double _cachedDefaultHeight;
    SBIconPageIndicatorImageSetResult *_pageIndicatorImageSets;
    SBIconPageIndicatorImageSetResult *_searchIndicatorImageSets;
    BOOL _shouldShowSearchIndicator;
    BOOL _legibilityEnabled;
    _UILegibilitySettings *_legibilitySettings;
    id <SBIconListPageControlDelegate> _delegate;
    SBIconPageIndicatorImageSetCache *_imageSetCache;
    NSArray *_touchIgnoreRects;
}

@property(copy, nonatomic) NSArray *touchIgnoreRects; // @synthesize touchIgnoreRects=_touchIgnoreRects;
@property(retain, nonatomic) SBIconPageIndicatorImageSetCache *imageSetCache; // @synthesize imageSetCache=_imageSetCache;
@property(nonatomic) __weak id <SBIconListPageControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isLegibilityEnabled) BOOL legibilityEnabled; // @synthesize legibilityEnabled=_legibilityEnabled;
@property(nonatomic) BOOL shouldShowSearchIndicator; // @synthesize shouldShowSearchIndicator=_shouldShowSearchIndicator;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
// - (void).cxx_destruct;
- (void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3;
- (void)_invalidateIndicators;
- (id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2;
- (id)_iconListIndicatorImage:(BOOL)arg1;
- (id)_searchIndicatorImage:(BOOL)arg1;
- (void)_setIndicatorImage:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3;
- (void)setFrame:(CGRect)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) double defaultIndicatorHeight;
@property(readonly, nonatomic) double defaultHeight;
- (id)initWithFrame:(CGRect)arg1;

@end

