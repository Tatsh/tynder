//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface TNDRTooltip : UIView
{
    UILabel *_textLabel;
    UIImageView *_centerImageView;
    UIImageView *_rightImageView;
    UIImageView *_leftImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *centerImageView; // @synthesize centerImageView=_centerImageView;
- (id)initWithText:(id)arg1 aboveView:(id)arg2 inView:(id)arg3;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;

@end

