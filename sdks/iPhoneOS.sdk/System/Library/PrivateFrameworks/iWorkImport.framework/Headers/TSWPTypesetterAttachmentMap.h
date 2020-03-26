//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDLayout, TSWPAttachment;

__attribute__((visibility("hidden")))
@interface TSWPTypesetterAttachmentMap : NSObject
{
    BOOL _layoutNeedsRevalidation;
    BOOL _isWithinVerticalText;
    TSWPAttachment *_attachment;
    TSDLayout *_layout;
    struct __CTLine _lineRef;
}

+ (id)mapWithAttachment:(id)arg1 layout:(id)arg2 pageNumber:(NSUInteger)arg3 pageCount:(NSUInteger)arg4 footnoteMarkProvider:(id)arg5 styleProvider:(id)arg6 colorOverride:(id)arg7 textScalePercent:(NSUInteger)arg8;
@property(nonatomic) BOOL isWithinVerticalText; // @synthesize isWithinVerticalText=_isWithinVerticalText;
@property(readonly, nonatomic) struct __CTLine lineRef; // @synthesize lineRef=_lineRef;
@property(nonatomic) BOOL layoutNeedsRevalidation; // @synthesize layoutNeedsRevalidation=_layoutNeedsRevalidation;
@property(retain, nonatomic) TSDLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak TSWPAttachment *attachment; // @synthesize attachment=_attachment;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;

@end
