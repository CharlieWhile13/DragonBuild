//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ACHTemplateStore, NSArray;

@protocol ACHTemplateStoreObserving <NSObject>
- (void)templateStore:(ACHTemplateStore *)arg1 didRemoveTemplates:(NSArray *)arg2;
- (void)templateStore:(ACHTemplateStore *)arg1 didAddNewTemplates:(NSArray *)arg2;

@optional
- (void)templateStoreDidFinishInitialFetch:(ACHTemplateStore *)arg1;
@end
