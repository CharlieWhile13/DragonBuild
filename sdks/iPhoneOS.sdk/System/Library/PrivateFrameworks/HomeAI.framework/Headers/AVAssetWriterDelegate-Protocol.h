//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVAssetWriter, AVFragmentedMediaDataReport, NSData;

@protocol AVAssetWriterDelegate <NSObject>

@optional
- (void)assetWriter:(AVAssetWriter *)arg1 didProduceFragmentedMediaData:(NSData *)arg2 fragmentedMediaDataReport:(AVFragmentedMediaDataReport *)arg3;
- (void)assetWriter:(AVAssetWriter *)arg1 didProduceFragmentedHeaderData:(NSData *)arg2;
@end
