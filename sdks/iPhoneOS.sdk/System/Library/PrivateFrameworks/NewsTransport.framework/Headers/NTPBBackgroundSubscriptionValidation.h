//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NTPBBackgroundSubscriptionValidation : PBCodable <NSCopying>
{
    NSString *_errorCode;
    NSString *_errorMessage;
    int _resultType;
    NSString *_sourceChannelId;
    struct {
        unsigned int resultType:1;
    } _has;
}

@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
@property(readonly, nonatomic) BOOL hasErrorCode;
@property(readonly, nonatomic) BOOL hasErrorMessage;
@property(nonatomic) BOOL hasResultType;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;

@end
