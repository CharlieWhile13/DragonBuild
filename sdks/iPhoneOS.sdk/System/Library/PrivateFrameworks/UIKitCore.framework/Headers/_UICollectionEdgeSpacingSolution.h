//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICollectionEdgeSpacingSolution : NSObject
{
    BOOL _isFlexible;
    double _spacing;
}

@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(readonly, nonatomic) BOOL isFlexible;
- (id)description;
- (id)initWithSpacing:(double)arg1 isFlexible:(BOOL)arg2;

@end
