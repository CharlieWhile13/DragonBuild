//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CNAtomView;

@interface CNModernAtomBackgroundView : UIView
{
    UIView *_selectedView;
    NSUInteger _selectionStyle;
    UIView *_separatorView;
    int _separatorStyle;
    BOOL _selected;
    double _scalingFactor;
    CNAtomView *_hostAtomView;
}

@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(readonly, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(nonatomic) __weak CNAtomView *hostAtomView; // @synthesize hostAtomView=_hostAtomView;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
// - (void).cxx_destruct;
- (void)invalidateIntrinsicContentSize;
- (id)_chevronImage;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 style:(NSUInteger)arg3;
- (BOOL)isSelected;
- (void)_setSelectionStyle:(NSUInteger)arg1;
- (void)layoutSubviews;
- (UIEdgeInsets)_backgroundBleedArea;
- (double)separatorWidth;
- (void)tintColorDidChange;
- (id)wrappedTintColor;
- (id)initWithFrame:(CGRect)arg1;

@end
