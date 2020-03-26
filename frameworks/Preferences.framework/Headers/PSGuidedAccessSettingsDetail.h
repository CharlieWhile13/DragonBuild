//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Preferences/PSSettingsDetail-Protocol.h>

@interface PSGuidedAccessSettingsDetail : NSObject <PSSettingsDetail>
{
}

+ (NSUInteger)guidedAccessAvailability;
+ (void)enterGuidedAccessMode;
+ (void)setGuidedAccessSwitchEnabled:(BOOL)arg1;
+ (BOOL)guidedAccessHasPasscode;
+ (id)iconImage;
+ (id)preferencesURL;

@end
