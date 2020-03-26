//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact;

@interface WBSContactsEntry : NSObject
{
    CNContact *_contact;
}

+ (id)_valueStringForValue:(id)arg1 wbsProperty:(id)arg2 wbsComponent:(id)arg3;
+ (id)_valueStringForValue:(id)arg1 wbsProperty:(id)arg2 wbsComponent:(id)arg3 atIndex:(NSUInteger)arg4;
+ (BOOL)_isValueAStringForContactsProperty:(id)arg1;
+ (id)_valueStringForWBSComponent:(id)arg1 inAddress:(id)arg2;
+ (id)_valueStringForWBSComponent:(id)arg1 inInstantMessageAddress:(id)arg2;
+ (id)localizedWBSPropertyOrLabel:(id)arg1;
+ (BOOL)_isContactsLabel:(id)arg1;
+ (BOOL)_isContactsProperty:(id)arg1;
+ (BOOL)isWBSProxyProperty:(id)arg1;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
// - (void).cxx_destruct;
- (NSUInteger)_numberOfValuesForWBSProperty:(id)arg1 andContact:(id)arg2;
- (NSUInteger)_numberOfValuesForWBSProperty:(id)arg1;
- (id)valueStringForWBSProperty:(id)arg1 wbsComponent:(id)arg2 atIndex:(NSUInteger)arg3;
- (id)valueForWBSProxyProperty:(id)arg1;
- (id)fullName;
- (id)initWithContact:(id)arg1;

@end
