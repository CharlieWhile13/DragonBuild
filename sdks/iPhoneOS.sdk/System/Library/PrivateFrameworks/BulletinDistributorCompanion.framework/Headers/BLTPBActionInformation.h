//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

@interface BLTPBActionInformation : PBCodable <NSCopying>
{
    NSData *_context;
    NSData *_contextNulls;
}

@property(retain, nonatomic) NSData *contextNulls; // @synthesize contextNulls=_contextNulls;
@property(retain, nonatomic) NSData *context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasContextNulls;
@property(readonly, nonatomic) BOOL hasContext;

@end
