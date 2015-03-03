//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface TNDRAppSettingsLogoView : UIView
{
    UIImageView *_logoImageView;
    UILabel *_versionLabel;
    UILabel *_subTextLabel;
}

- (void).cxx_destruct;
- (void)addAutoLayoutToLogoImageView;
- (void)addAutoLayoutToSubTextLabel;
- (void)addAutoLayoutToVersionLabel;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UILabel *subTextLabel; // @synthesize subTextLabel=_subTextLabel;
@property(retain, nonatomic) UILabel *versionLabel; // @synthesize versionLabel=_versionLabel;
- (void)setupLogoImageView;
- (void)setupSubTextLabel;
- (void)setupVersionLabel;

@end
