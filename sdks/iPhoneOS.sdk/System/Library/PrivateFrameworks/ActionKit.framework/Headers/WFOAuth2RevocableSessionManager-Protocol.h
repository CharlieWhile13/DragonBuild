//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class WFOAuth2Credential;

@protocol WFOAuth2RevocableSessionManager <NSObject>
- (void)revokeCredential:(WFOAuth2Credential *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
@end
