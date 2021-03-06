//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSController-Protocol.h>

@class NSString, PSSpecifier, UIViewController;
@protocol PSController;

@protocol PSURLControllerHandlerDelegate <PSController>
- (UIViewController<PSController> *)selectSpecifier:(PSSpecifier *)arg1;
- (PSSpecifier *)specifierForID:(NSString *)arg1;

@optional
@property(nonatomic, getter=isShowingSetupController) BOOL showingSetupController;
@end

