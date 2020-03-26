//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VideosExtrasViewElementViewController.h>


@class NSArray, UICollectionView, UIView, VideosExtrasGridViewControllerStyle, _VideosExtrasGridHeaderView, _VideosExtrasShelfCollectionViewLayout;

__attribute__((visibility("hidden")))
@interface VideosExtrasGridElementViewController : VideosExtrasViewElementViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    UIView *_titleRule;
    NSArray *_titleRuleConstraints;
    NSArray *_headerViewConstraints;
    UICollectionView *_collectionView;
    _VideosExtrasShelfCollectionViewLayout *_flowLayout;
    _VideosExtrasGridHeaderView *_headerView;
    BOOL _shelfStyle;
    VideosExtrasGridViewControllerStyle *_smallStyle;
    VideosExtrasGridViewControllerStyle *_mediumStyle;
    VideosExtrasGridViewControllerStyle *_largeStyle;
    VideosExtrasGridViewControllerStyle *_extraLargeStyle;
    VideosExtrasGridViewControllerStyle *_wideStyle;
}

+ (id)extraLargeStackGridStyle;
+ (id)largeStackGridStyle;
+ (id)mediumStackGridStyle;
+ (id)smallStackGridStyle;
+ (id)wideStackGridStyle;
+ (id)extraLargeDetailStyle;
+ (id)largeDetailStyle;
+ (id)mediumDetailStyle;
+ (id)smallDetailStyle;
+ (id)wideDetailStyle;
+ (id)extraLargeGalleryStyle;
+ (id)largeGalleryStyle;
+ (id)mediumGalleryStyle;
+ (id)smallGalleryStyle;
+ (id)wideGalleryStyle;
+ (id)_defaultCellStyle;
+ (id)_fontAttributesForTextStyle:(id)arg1;
+ (id)keyPathsForValuesAffectingContentScrollView;
@property(nonatomic, getter=isShelfStyle) BOOL shelfStyle; // @synthesize shelfStyle=_shelfStyle;
@property(retain, nonatomic) VideosExtrasGridViewControllerStyle *wideStyle; // @synthesize wideStyle=_wideStyle;
@property(retain, nonatomic) VideosExtrasGridViewControllerStyle *extraLargeStyle; // @synthesize extraLargeStyle=_extraLargeStyle;
@property(retain, nonatomic) VideosExtrasGridViewControllerStyle *largeStyle; // @synthesize largeStyle=_largeStyle;
@property(retain, nonatomic) VideosExtrasGridViewControllerStyle *mediumStyle; // @synthesize mediumStyle=_mediumStyle;
@property(retain, nonatomic) VideosExtrasGridViewControllerStyle *smallStyle; // @synthesize smallStyle=_smallStyle;
// - (void).cxx_destruct;
- (void)_prepareLayout;
- (void)_dynamicTypeDidChange;
- (id)_narrowStyle;
@property(readonly, nonatomic) VideosExtrasGridViewControllerStyle *currentStyle;
- (double)_cellSpacingForSection:(id)arg1;
- (UIEdgeInsets)_sectionInsetsForSection:(id)arg1;
- (id)_cellStyleForSection:(id)arg1;
- (long long)preferredLayoutAttribute;
- (id)preferredLayoutGuide;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)_sectionElementForIndex:(NSUInteger)arg1;
- (id)_lockupForIndexPath:(id)arg1;
- (BOOL)_sectionIndexIsDescriptionSection:(long long)arg1;
- (BOOL)_hasDescriptionText;
- (void)viewWillAppear:(BOOL)arg1;
- (id)contentScrollView;
- (void)loadView;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (CGSize)preferredContentSize;
- (void)dealloc;
- (id)initWithViewElement:(id)arg1;

@end
