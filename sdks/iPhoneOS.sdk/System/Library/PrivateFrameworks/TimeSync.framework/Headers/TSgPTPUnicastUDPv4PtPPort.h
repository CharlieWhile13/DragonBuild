//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TimeSync/TSgPTPFDPtPPort.h>

@interface TSgPTPUnicastUDPv4PtPPort : TSgPTPFDPtPPort
{
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv4Address:(unsigned int)arg2;
- (id)_destinationAddressString;
- (id)_sourceAddressString;
- (void)dealloc;
- (int)portType;
- (id)initWithInterfaceName:(id)arg1 andIPv4Address:(unsigned int)arg2;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;

@end
