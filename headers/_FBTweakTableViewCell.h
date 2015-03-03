//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"

@class FBTweak, NSString, UIStepper, UISwitch, UITextField, UIView;

@interface _FBTweakTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    UIView *_accessoryView;
    unsigned int _mode;
    UISwitch *_switch;
    UITextField *_textField;
    UIStepper *_stepper;
    FBTweak *_tweak;
}

- (void).cxx_destruct;
- (void)_stepperChanged:(id)arg1;
- (void)_switchChanged:(id)arg1;
- (void)_updateMode:(unsigned int)arg1;
- (void)_updateValue:(id)arg1 primary:(BOOL)arg2 write:(BOOL)arg3;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) FBTweak *tweak; // @synthesize tweak=_tweak;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
