//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSNumber, NSString;

@interface TSKPicaFormatter : NSFormatter
{
    NSString *mPicaSeparator;
    NSNumber *mMinimum;
    NSNumber *mMaximum;
}

@property(copy, nonatomic) NSNumber *maximum; // @synthesize maximum=mMaximum;
@property(copy, nonatomic) NSNumber *minimum; // @synthesize minimum=mMinimum;
@property(copy, nonatomic) NSString *picaSeparator; // @synthesize picaSeparator=mPicaSeparator;
- (BOOL)getObjectValue:(id )arg1 forString:(id)arg2 errorDescription:(id )arg3;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithPicaSeparator:(id)arg1;

@end
