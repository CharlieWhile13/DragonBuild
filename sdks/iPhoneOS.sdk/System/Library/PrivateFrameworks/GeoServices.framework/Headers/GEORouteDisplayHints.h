//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEORequestOptions, NSArray, PBDataReader, PBUnknownFields;
@protocol GEOSurchargeOption;

@interface GEORouteDisplayHints : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _availablePaymentTypes;
    CDStruct_95bda58d _availablePrioritizations;
    GEORequestOptions *_transitSurchargeOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    BOOL _showTransitSchedules;
    struct {
        unsigned int has_showTransitSchedules:1;
        unsigned int read_unknownFields:1;
        unsigned int read_availablePaymentTypes:1;
        unsigned int read_availablePrioritizations:1;
        unsigned int read_transitSurchargeOptions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_availablePaymentTypes:1;
        unsigned int wrote_availablePrioritizations:1;
        unsigned int wrote_transitSurchargeOptions:1;
        unsigned int wrote_showTransitSchedules:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEORequestOptions *transitSurchargeOptions;
@property(readonly, nonatomic) BOOL hasTransitSurchargeOptions;
- (void)_readTransitSurchargeOptions;
- (int)StringAsAvailablePaymentTypes:(id)arg1;
- (id)availablePaymentTypesAsString:(int)arg1;
- (void)setAvailablePaymentTypes:(int )arg1 count:(NSUInteger)arg2;
- (int)availablePaymentTypeAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsAvailablePaymentType:(int)arg1;
- (void)addAvailablePaymentType:(int)arg1;
- (void)clearAvailablePaymentTypes;
@property(readonly, nonatomic) int availablePaymentTypes;
@property(readonly, nonatomic) NSUInteger availablePaymentTypesCount;
- (void)_readAvailablePaymentTypes;
- (int)StringAsAvailablePrioritizations:(id)arg1;
- (id)availablePrioritizationsAsString:(int)arg1;
- (void)setAvailablePrioritizations:(int )arg1 count:(NSUInteger)arg2;
- (int)availablePrioritizationAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsAvailablePrioritization:(int)arg1;
- (void)addAvailablePrioritization:(int)arg1;
- (void)clearAvailablePrioritizations;
@property(readonly, nonatomic) int availablePrioritizations;
@property(readonly, nonatomic) NSUInteger availablePrioritizationsCount;
- (void)_readAvailablePrioritizations;
@property(nonatomic) BOOL hasShowTransitSchedules;
@property(nonatomic) BOOL showTransitSchedules;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSArray *prioritizationOptions;
@property(readonly, nonatomic) id <GEOSurchargeOption> surchargeOptions;

@end
