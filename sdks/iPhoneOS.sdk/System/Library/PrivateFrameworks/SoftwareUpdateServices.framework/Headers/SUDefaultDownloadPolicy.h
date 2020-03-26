//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/SUDownloadPolicy-Protocol.h>

@class NSString, SUCarrierDownloadPolicyProperties, SUDescriptor, SUNetworkMonitor;

@interface SUDefaultDownloadPolicy : NSObject <SUDownloadPolicy>
{
    SUDescriptor *_descriptor;
    SUCarrierDownloadPolicyProperties *_carrierPolicy;
    SUNetworkMonitor *_networkMonitor;
    BOOL _cellularCapable;
}

@property(retain, nonatomic) SUNetworkMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(nonatomic, getter=isCellularCapable) BOOL cellularCapable; // @synthesize cellularCapable=_cellularCapable;
@property(retain, nonatomic) SUCarrierDownloadPolicyProperties *carrierPolicy; // @synthesize carrierPolicy=_carrierPolicy;
@property(retain, nonatomic) SUDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (BOOL)_isDownloadableForNetworkType:(int)arg1 error:(long long )arg2 cellularFeesApply:(BOOL )arg3 powerRequired:(BOOL )arg4;
- (BOOL)isDownloadAllowableForCellular2G;
- (BOOL)isDownloadAllowableForCellular;
- (BOOL)isDownloadableForCurrentNetworkConditions:(long long )arg1 cellularFeesApply:(BOOL )arg2 powerRequired:(BOOL )arg3;
- (BOOL)isDownloadableForCurrentNetworkConditions:(long long )arg1 cellularFeesApply:(BOOL )arg2;
- (BOOL)isDownloadFreeForCellular;
- (BOOL)isDownloadAllowableForCellularRoaming;
- (BOOL)isDownloadAllowableForWiFi;
- (BOOL)isDownloadable;
- (BOOL)isPowerRequired;
- (BOOL)hasEnoughDiskSpace;
- (BOOL)isSamePolicy:(id)arg1;
- (BOOL)_isCellularCapable;
- (id)_stringForBool:(BOOL)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1;

@end
