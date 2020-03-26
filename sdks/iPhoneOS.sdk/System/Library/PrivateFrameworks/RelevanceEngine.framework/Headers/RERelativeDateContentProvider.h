//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RETextContentProvider.h>

@class NSDate;

@interface RERelativeDateContentProvider : RETextContentProvider
{
    NSDate *_date;
    long long _style;
    NSUInteger _units;
}

+ (id)relativeDateContentProviderWithDate:(id)arg1 style:(long long)arg2 units:(NSUInteger)arg3;
@property(readonly, nonatomic) NSUInteger units; // @synthesize units=_units;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)clockKitTextProviderRepresentation;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)attributedStringRepresentation;
- (id)initWithDate:(id)arg1 style:(long long)arg2 units:(NSUInteger)arg3;

@end
