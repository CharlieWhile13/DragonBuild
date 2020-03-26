//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NTPBBinningConfig, NTPBPersonalizationTreatment;

@interface NTPBPersonalizationConfig : PBCodable <NSCopying>
{
    long long _moduloForHashing;
    NTPBBinningConfig *_binningConfig;
    NTPBPersonalizationTreatment *_defaultPersonalizationTreatment;
    NSMutableArray *_personalizationBuckets;
    NSMutableArray *_personalizationTreatments;
    CDStruct_3f5c4e18 _has;
}

+ (Class)personalizationTreatmentsType;
+ (Class)personalizationBucketsType;
@property(retain, nonatomic) NSMutableArray *personalizationTreatments; // @synthesize personalizationTreatments=_personalizationTreatments;
@property(retain, nonatomic) NSMutableArray *personalizationBuckets; // @synthesize personalizationBuckets=_personalizationBuckets;
@property(retain, nonatomic) NTPBPersonalizationTreatment *defaultPersonalizationTreatment; // @synthesize defaultPersonalizationTreatment=_defaultPersonalizationTreatment;
@property(nonatomic) long long moduloForHashing; // @synthesize moduloForHashing=_moduloForHashing;
@property(retain, nonatomic) NTPBBinningConfig *binningConfig; // @synthesize binningConfig=_binningConfig;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)personalizationTreatmentsAtIndex:(NSUInteger)arg1;
- (NSUInteger)personalizationTreatmentsCount;
- (void)addPersonalizationTreatments:(id)arg1;
- (void)clearPersonalizationTreatments;
- (id)personalizationBucketsAtIndex:(NSUInteger)arg1;
- (NSUInteger)personalizationBucketsCount;
- (void)addPersonalizationBuckets:(id)arg1;
- (void)clearPersonalizationBuckets;
@property(readonly, nonatomic) BOOL hasDefaultPersonalizationTreatment;
@property(nonatomic) BOOL hasModuloForHashing;
@property(readonly, nonatomic) BOOL hasBinningConfig;

@end
