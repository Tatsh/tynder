//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TNDRTitleButton.h"

@class UIImage, UIImageView;

@interface TNDRImagesTitleButton : TNDRTitleButton
{
    UIImage *_buttonImage;
    UIImage *_titleImage;
    UIImageView *_buttonImageView;
    UIImageView *_titleImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *buttonImage; // @synthesize buttonImage=_buttonImage;
@property(retain, nonatomic) UIImageView *buttonImageView; // @synthesize buttonImageView=_buttonImageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

