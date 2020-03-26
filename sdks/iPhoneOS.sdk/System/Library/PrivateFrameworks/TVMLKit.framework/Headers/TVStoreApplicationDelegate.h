//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <TVMLKit/TVApplicationControllerDelegate-Protocol.h>

@class BKSProcessAssertion, IKURLBagCache, NSDictionary, NSURL, TVApplicationController, TVStoreApplicationSetupHelper, UIWindow;

@interface TVStoreApplicationDelegate : UIResponder <UIApplicationDelegate, TVApplicationControllerDelegate>
{
    TVStoreApplicationSetupHelper *_setupHelper;
    NSDictionary *_launchOptions;
    NSURL *_launchOpenURL;
    NSDictionary *_launchOpenURLOptions;
    BKSProcessAssertion *_launchAssertion;
    BOOL _shouldTerminateOnEnterBackground;
    BOOL _headLess;
    BOOL _overrideOrientation;
    UIWindow *_window;
    TVApplicationController *_appController;
    IKURLBagCache *_bagCache;
}

@property(nonatomic) BOOL overrideOrientation; // @synthesize overrideOrientation=_overrideOrientation;
@property(readonly, nonatomic) IKURLBagCache *bagCache; // @synthesize bagCache=_bagCache;
@property(readonly, nonatomic) TVApplicationController *appController; // @synthesize appController=_appController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
// - (void).cxx_destruct;
- (void)_presetDialogWithError:(long long)arg1 appController:(id)arg2;
- (void)_controllerDidDisplay:(id)arg1;
- (void)_loadWithBootURL:(id)arg1;
- (NSUInteger)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)appController:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)_launchApp;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (BOOL)shouldBeForcedLeftToRight;
- (void)updateIdleModeVisualEffectsStatus:(BOOL)arg1;
@property(readonly, nonatomic) BOOL supportsIdleModeVisualEffects;
- (void)reload;
- (void)didShowViewController;
- (void)setupWithBootURL:(id)arg1;
- (id)offlineJSURL;
- (id)appLocalBootURL;
- (id)bootURL;
- (id)cachedBagPath;
- (id)_bagBootURL;
- (id)bagBootURLKey;
- (void)dealloc;
- (id)init;

@end
