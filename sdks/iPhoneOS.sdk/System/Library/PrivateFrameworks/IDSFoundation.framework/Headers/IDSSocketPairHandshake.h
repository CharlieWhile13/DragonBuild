//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

@interface IDSSocketPairHandshake : IDSSocketPairMessage
{
    unsigned int _versionNumber;
}

@property(readonly, nonatomic) unsigned int versionNumber; // @synthesize versionNumber=_versionNumber;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)initWithVersionNumber:(unsigned int)arg1;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end
