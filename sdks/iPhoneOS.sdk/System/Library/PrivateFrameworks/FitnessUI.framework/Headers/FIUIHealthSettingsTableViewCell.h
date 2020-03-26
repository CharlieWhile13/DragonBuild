//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView;
@protocol FIUIHealthSettingsForceUpdatable;

@interface FIUIHealthSettingsTableViewCell : UITableViewCell
{
    UIView *_inputView;
    id <FIUIHealthSettingsForceUpdatable> _forceUpdatable;
}

@property(nonatomic) __weak id <FIUIHealthSettingsForceUpdatable> forceUpdatable; // @synthesize forceUpdatable=_forceUpdatable;
// - (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
