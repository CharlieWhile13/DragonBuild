//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSMutableData, NSString, _MRTransactionKeyProtobuf, _MRTransactionPacketProtobuf;

@interface MRTransactionPacket : NSObject <NSCopying>
{
    NSMutableData *_data;
    struct _MRTransactionKeyProtobuf _key;
    NSUInteger _writeLength;
    NSUInteger _writePosition;
    NSString *_identifier;
    NSUInteger _totalLength;
    NSUInteger _totalWritePosition;
}

@property(readonly, nonatomic) NSUInteger totalWritePosition; // @synthesize totalWritePosition=_totalWritePosition;
@property(readonly, nonatomic) NSUInteger totalLength; // @synthesize totalLength=_totalLength;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSUInteger writePosition; // @synthesize writePosition=_writePosition;
@property(nonatomic) NSUInteger writeLength; // @synthesize writeLength=_writeLength;
@property(readonly, nonatomic) _MRTransactionKeyProtobuf *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
// - (void).cxx_destruct;
- (BOOL)isComplete;
@property(readonly, nonatomic, getter=isWriteComplete) BOOL writeComplete;
@property(readonly, nonatomic, getter=isReadComplete) BOOL readComplete;
@property(readonly, nonatomic) NSUInteger actualLength;
- (void)writeComplete;
- (id)description;
@property(readonly, nonatomic) _MRTransactionPacketProtobuf *protobuf;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithPackets:(id)arg1;
- (id)initWithData:(id)arg1 forKey:(struct _MRTransactionKeyProtobuf )arg2;

@end
