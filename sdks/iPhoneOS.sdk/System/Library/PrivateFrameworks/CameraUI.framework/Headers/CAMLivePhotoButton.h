//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMExpandableMenuButton.h>

#import <CameraUI/CAMAccessibilityHUDImageProvider-Protocol.h>

@class CAMLivePhotoAnimationCache, UIImageView;

@interface CAMLivePhotoButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>
{
    BOOL _allowsAutomaticMode;
    UIImageView *__imageView;
    CAMLivePhotoAnimationCache *__animationCache;
}

+ (double)enablingAnimationDuration;
@property(retain, nonatomic) CAMLivePhotoAnimationCache *_animationCache; // @synthesize _animationCache=__animationCache;
@property(readonly, nonatomic) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(nonatomic) BOOL allowsAutomaticMode; // @synthesize allowsAutomaticMode=_allowsAutomaticMode;
// - (void).cxx_destruct;
- (id)imageForAccessibilityHUD;
- (void)interruptEnablingAnimation;
- (void)performEnablingAnimation;
- (void)_updateAnimationImages;
- (void)preloadEnablingAnimation;
- (void)_loadAnimationCacheIfNeeded;
- (void)finishExpansionAnimated:(BOOL)arg1;
- (void)reloadData;
- (void)prepareHeaderViewForExpanding:(BOOL)arg1;
- (void)_updateBaseImage;
- (id)_currentBaseImage;
- (id)headerView;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (long long)indexForMode:(long long)arg1;
- (long long)modeForIndex:(long long)arg1;
- (id)_availableModes;
- (void)setAllowsAutomaticMode:(BOOL)arg1 needsReloadData:(BOOL)arg2;
- (void)setSelectedIndex:(long long)arg1;
@property(nonatomic) long long livePhotoMode;
- (id)initWithLayoutStyle:(long long)arg1;

@end
