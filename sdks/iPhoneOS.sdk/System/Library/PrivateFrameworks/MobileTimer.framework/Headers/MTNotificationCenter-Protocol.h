//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MTAlarm, MTScheduledObject, MTTimer, NSArray;

@protocol MTNotificationCenter <NSObject>
- (void)dismissNotificationsForTimer:(MTTimer *)arg1;
- (void)postNotificationForScheduledTimer:(MTScheduledObject *)arg1 completionBlock:(void (^)(void))arg2;
- (void)dismissNotificationsForAlarm:(MTAlarm *)arg1;
- (void)postNotificationForScheduledAlarm:(MTScheduledObject *)arg1 completionBlock:(void (^)(void))arg2;

@optional
- (void)removeAllDeliveredNotifications;
- (void)dismissNotificationsWithIdentifiers:(NSArray *)arg1;
- (void)dismissNotificationsForAlarm:(MTAlarm *)arg1 includeSnooze:(BOOL)arg2;
- (void)dismissNotificationsForAlarm:(MTAlarm *)arg1 dismissAction:(NSUInteger)arg2;
- (void)dismissRelatedNotificationsForScheduledAlarm:(MTScheduledObject *)arg1;
@end
