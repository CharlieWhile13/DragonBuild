//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUDateFormatter : NSObject
{
    NSString *_dateOnlyFormatString;
    NSString *_timeOnlyFormatString;
    struct __CFDateFormatter _fullDateFormatter;
}

+ (id)timePortionOfDateTimeFormatString:(id)arg1;
+ (id)datePortionOfDateTimeFormatString:(id)arg1;
+ (NSUInteger)p_DateTimeSplitLocationInFormatString:(id)arg1;
+ (id)dateFormatStringSpecialSymbols;
+ (id)p_supportedTimeFormatMatchingFormat:(id)arg1 locale:(id)arg2;
+ (id)supportedTimeFormatsForLocale:(id)arg1;
+ (id)p_supportedDateFormatMatchingFormat:(id)arg1 locale:(id)arg2;
+ (id)supportedDateFormatsForLocale:(id)arg1;
+ (id)defaultDateTimeFormatForLocale:(id)arg1;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithLocale:(id)arg1;

@end
