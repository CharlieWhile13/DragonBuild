//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBDisplayLayoutElement, UIApplicationSceneDeactivationAssertion, UIWindow;

@interface SBCoverSheetSceneManager : NSObject
{
    UIWindow *_coverSheetWindow;
    FBDisplayLayoutElement *_displayLayoutElement;
    UIApplicationSceneDeactivationAssertion *_notificationCenterAssertion;
    UIApplicationSceneDeactivationAssertion *_systemAnimationAssertion;
}

@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *systemAnimationAssertion; // @synthesize systemAnimationAssertion=_systemAnimationAssertion;
@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *notificationCenterAssertion; // @synthesize notificationCenterAssertion=_notificationCenterAssertion;
@property(retain, nonatomic) FBDisplayLayoutElement *displayLayoutElement; // @synthesize displayLayoutElement=_displayLayoutElement;
@property(nonatomic) __weak UIWindow *coverSheetWindow; // @synthesize coverSheetWindow=_coverSheetWindow;
// - (void).cxx_destruct;
- (void)_updateForegroundScenesForNotificationCenter:(BOOL)arg1;
- (void)_setSceneBackgrounded:(BOOL)arg1 suspendUnderLockEnvironment:(BOOL)arg2;
- (void)_setDisplayLayoutElementActive:(BOOL)arg1;
- (void)updateForegroundScenesForCoverSheetAnimationActive:(BOOL)arg1;
- (void)updateSceneManagerForPresented:(BOOL)arg1 suspendUnderLockEnvironment:(BOOL)arg2;
- (id)initWithCoverSheetWindow:(id)arg1;

@end

