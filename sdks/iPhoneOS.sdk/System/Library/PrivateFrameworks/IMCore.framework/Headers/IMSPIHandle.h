//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMPerson, NSString;

@interface IMSPIHandle : NSObject
{
    NSString *_address;
    NSString *_countryCode;
    BOOL _isMe;
    IMPerson *_imPerson;
    BOOL _haveFetchedIMPerson;
}

@property(readonly) BOOL isMe; // @synthesize isMe=_isMe;
@property(readonly) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly) NSString *address; // @synthesize address=_address;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSString *cnContactID;
@property(readonly) NSString *displayName;
- (id)person;
@property(readonly) NSString *businessName;
@property(readonly) BOOL isBusiness;
- (id)description;
- (id)initWithAddress:(id)arg1 countryCode:(id)arg2 isMe:(BOOL)arg3;

@end
