//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationListComponentDelegate-Protocol.h>

@class NCNotificationGroupList, NCNotificationRequest;
@protocol NCAuxiliaryOptionsProviding;

@protocol NCNotificationGroupListDelegate <NCNotificationListComponentDelegate>
- (BOOL)notificationGroupListShouldScrollToTop:(NCNotificationGroupList *)arg1;
- (void)notificationGroupList:(NCNotificationGroupList *)arg1 requestsScrollToTopOfGroupWithCompletion:(void (^)(void))arg2;
- (id <NCAuxiliaryOptionsProviding>)notificationGroupList:(NCNotificationGroupList *)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(NCNotificationRequest *)arg2 isLongLook:(BOOL)arg3;
- (void)notificationGroupList:(NCNotificationGroupList *)arg1 didRemoveNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationGroupListDidRemoveAllNotificationRequests:(NCNotificationGroupList *)arg1;
@end
