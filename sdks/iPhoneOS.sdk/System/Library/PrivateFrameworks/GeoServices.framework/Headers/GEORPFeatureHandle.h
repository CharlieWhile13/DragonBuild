//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface GEORPFeatureHandle : PBCodable <NSCopying>
{
    struct GEORPFeatureHandleStyleAttribute _styleAttributes;
    NSUInteger _styleAttributesCount;
    NSUInteger _styleAttributesSpace;
    unsigned int _featureIndex;
    unsigned int _featureTileX;
    unsigned int _featureTileY;
    unsigned int _featureTileZ;
    unsigned int _identifier;
    int _style;
    int _type;
    struct {
        unsigned int has_featureIndex:1;
        unsigned int has_featureTileX:1;
        unsigned int has_featureTileY:1;
        unsigned int has_featureTileZ:1;
        unsigned int has_identifier:1;
        unsigned int has_style:1;
        unsigned int has_type:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
- (void)setStyleAttributes:(struct GEORPFeatureHandleStyleAttribute )arg1 count:(NSUInteger)arg2;
- (struct GEORPFeatureHandleStyleAttribute)styleAttributeAtIndex:(NSUInteger)arg1;
- (void)addStyleAttribute:(struct GEORPFeatureHandleStyleAttribute)arg1;
- (void)clearStyleAttributes;
@property(readonly, nonatomic) struct GEORPFeatureHandleStyleAttribute styleAttributes;
@property(readonly, nonatomic) NSUInteger styleAttributesCount;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(nonatomic) BOOL hasIdentifier;
@property(nonatomic) unsigned int identifier;
- (int)StringAsStyle:(id)arg1;
- (id)styleAsString:(int)arg1;
@property(nonatomic) BOOL hasStyle;
@property(nonatomic) int style;
@property(nonatomic) BOOL hasFeatureTileZ;
@property(nonatomic) unsigned int featureTileZ;
@property(nonatomic) BOOL hasFeatureTileY;
@property(nonatomic) unsigned int featureTileY;
@property(nonatomic) BOOL hasFeatureTileX;
@property(nonatomic) unsigned int featureTileX;
@property(nonatomic) BOOL hasFeatureIndex;
@property(nonatomic) unsigned int featureIndex;
- (void)dealloc;

@end
