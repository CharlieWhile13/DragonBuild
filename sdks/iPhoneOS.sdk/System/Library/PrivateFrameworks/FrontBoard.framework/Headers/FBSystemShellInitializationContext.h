//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class FBSystemShellInitializationOptions;

@interface FBSystemShellInitializationContext : NSObject <NSCopying>
{
    FBSystemShellInitializationOptions *_options;
    BOOL _bootedDark;
}

@property(readonly, nonatomic) FBSystemShellInitializationOptions *options; // @synthesize options=_options;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)_disablesUIKitWindowImplicitScenes;
- (BOOL)_optsIntoUIKitWindowHosting;
@property(readonly, nonatomic, getter=wasBootedDark) BOOL bootedDark;
@property(readonly, nonatomic) NSUInteger lastExitReason;
- (id)_initWithOptions:(id)arg1;

@end
