//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PINView.h>

#import <Preferences/PSPasscodeFieldDelegate-Protocol.h>

@class PSPasscodeField;

@interface PSBulletedPINView : PINView <PSPasscodeFieldDelegate>
{
    PSPasscodeField *_passcodeField;
}

// - (void).cxx_destruct;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (void)setBlocked:(BOOL)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isFirstResponder;
- (void)appendString:(id)arg1;
- (void)deleteLastCharacter;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)hidePasscodeField:(BOOL)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 numberOfFields:(int)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

