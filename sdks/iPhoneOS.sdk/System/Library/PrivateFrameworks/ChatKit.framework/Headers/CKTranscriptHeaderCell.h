//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptCell.h>

@class UIView;

@interface CKTranscriptHeaderCell : CKTranscriptCell
{
    UIView *_loadingIndicator;
}

+ (double)defaultCellHeight;
@property(retain, nonatomic) UIView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
// - (void).cxx_destruct;
- (void)startAnimatingActivityIndicator;
- (void)layoutSubviewsForAlignmentContents;
- (id)initWithFrame:(CGRect)arg1;

@end
