//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXOverlayBadgeTile-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class PXAssetBadgeManager, PXImageRequester, PXUIAssetBadgeView;

@interface PXOverlayBadgeUIViewTile : UIView <PXChangeObserver, PXReusableObject, PXOverlayBadgeTile, PXUIViewBasicTile>
{
    struct {
        BOOL badgeView;
    } _needsUpdateFlags;
    PXAssetBadgeManager *_badgeManager;
    PXImageRequester *_imageRequester;
    NSUInteger __badgeOptions;
    PXUIAssetBadgeView *__badgeView;
}

+ (void)preloadResources;
@property(readonly, nonatomic) PXUIAssetBadgeView *_badgeView; // @synthesize _badgeView=__badgeView;
@property(nonatomic, setter=_setBadgeOptions:) NSUInteger _badgeOptions; // @synthesize _badgeOptions=__badgeOptions;
@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
@property(retain, nonatomic) PXAssetBadgeManager *badgeManager; // @synthesize badgeManager=_badgeManager;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_updateBadgeViewIfNeeded;
- (void)_invalidateBadgeView;
- (void)layoutSubviews;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)prepareForReuse;
- (void)becomeReusable;
@property(readonly, nonatomic) UIView *view;
- (id)initWithFrame:(CGRect)arg1;

@end
