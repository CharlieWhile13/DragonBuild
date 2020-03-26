//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UISegmentedControlAppearanceStorage : NSObject
{
    NSMutableDictionary *_backgroundImages;
    NSMutableDictionary *_miniBackgroundImages;
    NSMutableDictionary *_dividerImages;
    NSMutableDictionary *_miniDividerImages;
    NSMutableDictionary *_textAttributesForState;
    NSMutableDictionary *_backgroundPositionAdjustmentsForBarMetrics;
    NSMutableDictionary *_contentPositionOffsets;
    NSMutableDictionary *_miniContentPositionOffsets;
    BOOL _legacyDontHighlight;
    BOOL _legacySuppressOptionsBackground;
    BOOL _isTiled;
    NSUInteger _leftCapWidth;
    NSUInteger _rightCapWidth;
}

// - (void).cxx_destruct;
- (void)setIsTiled:(BOOL)arg1 leftCapWidth:(NSUInteger)arg2 rightCapWidth:(NSUInteger)arg3;
- (void)setDetail:(CDStruct_41b0f204 )arg1;
- (BOOL)legacySuppressOptionsBackground;
- (void)takeTextAttributesFrom:(CDStruct_0ba2c6ed)arg1 forState:(NSUInteger)arg2;
- (id)init;
- (id)textAttributesForState:(NSUInteger)arg1;
- (void)setTextAttributes:(id)arg1 forState:(NSUInteger)arg2;
- (id)dividerImageForLeftSegmentState:(NSUInteger)arg1 rightSegmentState:(NSUInteger)arg2 isMini:(BOOL)arg3;
- (id)anyDividerImage;
- (id)anyDividerImageForMini:(BOOL)arg1;
- (id)dividerImageForLeftSegmentState:(NSUInteger)arg1 rightSegmentState:(NSUInteger)arg2 isMini:(BOOL)arg3 withFallback:(BOOL)arg4;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(NSUInteger)arg2 rightSegmentState:(NSUInteger)arg3 isMini:(BOOL)arg4;
- (id)backgroundImageForState:(NSUInteger)arg1 isMini:(BOOL)arg2;
- (id)backgroundImageForState:(NSUInteger)arg1 isMini:(BOOL)arg2 withFallback:(BOOL)arg3;
- (void)setBackgroundImage:(id)arg1 forState:(NSUInteger)arg2 isMini:(BOOL)arg3;
- (id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(BOOL)arg2;
- (id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(BOOL)arg2 noFallback:(BOOL)arg3;
- (void)setContentPositionOffset:(id)arg1 forSegment:(long long)arg2 inMiniBar:(BOOL)arg3;
- (double)backgroundPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)setBackgroundPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (BOOL)wantsTrackingSuppressed;

@end
