//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/MSStreamsProtocolDelegate-Protocol.h>

@class MSPublishStreamsProtocol, NSDictionary, NSError;

@protocol MSPublishStreamsProtocolDelegate <MSStreamsProtocolDelegate>
- (void)publishStreamsProtocol:(MSPublishStreamsProtocol *)arg1 didFinishSendingUploadCompleteError:(NSError *)arg2;
- (void)publishStreamsProtocol:(MSPublishStreamsProtocol *)arg1 didReceiveAuthenticationError:(NSError *)arg2;
- (void)publishStreamsProtocol:(MSPublishStreamsProtocol *)arg1 didFinishUploadingMetadataResponse:(NSDictionary *)arg2 error:(NSError *)arg3;
@end
