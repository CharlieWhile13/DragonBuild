//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemStatusServer/STTelephonySubscriptionInfo.h>

@class NSString;

@interface STMutableTelephonySubscriptionInfo : STTelephonySubscriptionInfo
{
}

// - (id)copyWithZone:(_NSZone )arg1;
@property(nonatomic) long long registrationRejectionCauseCode; // @dynamic registrationRejectionCauseCode;
@property(nonatomic, getter=isNetworkReselectionNeeded) BOOL networkReselectionNeeded; // @dynamic networkReselectionNeeded;
@property(nonatomic) NSUInteger callForwardingIndicator; // @dynamic callForwardingIndicator;
@property(copy, nonatomic) NSString *lastKnownNetworkCountryCode; // @dynamic lastKnownNetworkCountryCode;
@property(copy, nonatomic) NSString *operatorName; // @dynamic operatorName;
@property(nonatomic) NSUInteger maxSignalStrengthBars; // @dynamic maxSignalStrengthBars;
@property(nonatomic) NSUInteger signalStrengthBars; // @dynamic signalStrengthBars;
@property(nonatomic, getter=isRegisteredWithoutCellular) BOOL registeredWithoutCellular; // @dynamic registeredWithoutCellular;
@property(nonatomic, getter=isProvidingDataConnection) BOOL providingDataConnection; // @dynamic providingDataConnection;
@property(nonatomic, getter=isPreferredForDataConnections) BOOL preferredForDataConnections; // @dynamic preferredForDataConnections;
@property(nonatomic) NSUInteger dataConnectionType; // @dynamic dataConnectionType;
@property(nonatomic) NSUInteger cellularRegistrationStatus; // @dynamic cellularRegistrationStatus;
@property(nonatomic) NSUInteger registrationStatus; // @dynamic registrationStatus;
@property(copy, nonatomic) NSString *SIMStatus; // @dynamic SIMStatus;
@property(copy, nonatomic) NSString *shortSIMLabel; // @dynamic shortSIMLabel;
@property(copy, nonatomic) NSString *SIMLabel; // @dynamic SIMLabel;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;

@end
