//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarActivityItem_SyncOnly.h>

@class _UIStatusBarActivityIndicator, _UIStatusBarActivityView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarActivityItem_Split : _UIStatusBarActivityItem_SyncOnly
{
    _UIStatusBarActivityView *_activityView;
    _UIStatusBarActivityIndicator *_syncStartView;
}

+ (id)syncStartDisplayIdentifier;
+ (id)pillDisplayIdentifier;
@property(retain, nonatomic) _UIStatusBarActivityIndicator *syncStartView; // @synthesize syncStartView=_syncStartView;
@property(retain, nonatomic) _UIStatusBarActivityView *activityView; // @synthesize activityView=_activityView;
// - (void).cxx_destruct;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_syncStartView;
- (void)_create_activityView;
- (UIEdgeInsets)activityIndicatorAlignmentRectInsets;

@end
