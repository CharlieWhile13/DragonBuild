//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PSSystemConfigurationDynamicStoreNETRBWatcher : NSObject
{
//     struct __CFRunLoopSource _scRunLoopSource;
//     struct __SCDynamicStore _scDynamicStore;
}

+ (id)sharedManager;
- (BOOL)isDataEnabled;
- (BOOL)isTetheringEnabled;
- (BOOL)shouldShowTethering;
- (void)sendStateUpdate;
- (void)dealloc;
- (id)init;

@end
