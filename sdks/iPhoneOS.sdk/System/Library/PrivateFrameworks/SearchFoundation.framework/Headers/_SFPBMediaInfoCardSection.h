//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBMediaInfoCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBActionItem, _SFPBColor, _SFPBMediaItem, _SFPBRichText;

@interface _SFPBMediaInfoCardSection : PBCodable <_SFPBMediaInfoCardSection, NSSecureCoding>
{
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _isMediaContainer;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    _SFPBMediaItem *_mediaItem;
    NSArray *_details;
    _SFPBActionItem *_playAction;
    NSArray *_offers;
    NSString *_watchListIdentifier;
    NSString *_watchListButtonLabel;
    NSString *_watchListContinuationText;
    NSString *_watchListConfirmationText;
    _SFPBRichText *_specialOfferButtonLabel;
}

@property(retain, nonatomic) _SFPBRichText *specialOfferButtonLabel; // @synthesize specialOfferButtonLabel=_specialOfferButtonLabel;
@property(nonatomic) BOOL isMediaContainer; // @synthesize isMediaContainer=_isMediaContainer;
@property(copy, nonatomic) NSString *watchListConfirmationText; // @synthesize watchListConfirmationText=_watchListConfirmationText;
@property(copy, nonatomic) NSString *watchListContinuationText; // @synthesize watchListContinuationText=_watchListContinuationText;
@property(copy, nonatomic) NSString *watchListButtonLabel; // @synthesize watchListButtonLabel=_watchListButtonLabel;
@property(copy, nonatomic) NSString *watchListIdentifier; // @synthesize watchListIdentifier=_watchListIdentifier;
@property(copy, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(retain, nonatomic) _SFPBActionItem *playAction; // @synthesize playAction=_playAction;
@property(copy, nonatomic) NSArray *details; // @synthesize details=_details;
@property(retain, nonatomic) _SFPBMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) BOOL hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) BOOL canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)offersAtIndex:(NSUInteger)arg1;
- (NSUInteger)offersCount;
- (void)addOffers:(id)arg1;
- (void)clearOffers;
- (id)detailsAtIndex:(NSUInteger)arg1;
- (NSUInteger)detailsCount;
- (void)addDetails:(id)arg1;
- (void)clearDetails;
- (id)punchoutOptionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)punchoutOptionsCount;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
- (id)initWithFacade:(id)arg1;

@end
