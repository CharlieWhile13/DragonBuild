//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SupplyLevelView : UIView
{
    int supplyLevel;
    NSArray *colors;
}

@property(retain, nonatomic) NSArray *colors; // @synthesize colors;
@property(nonatomic) int supplyLevel; // @synthesize supplyLevel;
// - (void).cxx_destruct;
- (void)drawRect:(CGRect)arg1;
- (BOOL)isOpaque;

@end
