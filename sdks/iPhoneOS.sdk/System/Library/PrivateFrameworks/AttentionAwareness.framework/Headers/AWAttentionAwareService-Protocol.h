//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AWAttentionAwarenessConfiguration, NSString;
@protocol AWFrameworkClient;

@protocol AWAttentionAwareService
- (void)crashWithReply:(void (^)(NSError *))arg1;
- (void)getUnitTestSamplerWithReply:(void (^)(id <AWUnitTestSampler>))arg1;
- (void)outputPowerLogWithReply:(void (^)(NSString *))arg1;
- (void)setDebugPreference:(NSString *)arg1 reply:(void (^)(NSString *))arg2;
- (void)getDebugPreferences:(void (^)(NSDictionary *))arg1;
- (void)getSupportedEventsWithReply:(void (^)(NSUInteger))arg1;
- (void)addClient:(id <AWFrameworkClient>)arg1 clientConfig:(AWAttentionAwarenessConfiguration *)arg2 clientIndex:(int)arg3 unitTestMode:(BOOL)arg4 reply:(void (^)(id <AWRemoteClient>, int, NSError *))arg5;
@end
