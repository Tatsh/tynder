//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIImageView;

@interface TNDRCardCellUserProfilePhotoView : UIView
{
    UIImageView *_imageView;
    UIActivityIndicatorView *_activityIndicator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void)configureWithUser:(id)arg1;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutActivityIndicator;
- (void)layoutImageView;
- (float)preferredWidthForImage;
- (void)resetView;
- (void)setProfileImageURL:(id)arg1;
- (void)setupActivityIndicator;
- (void)setupImageView;
- (void)updateWithNewSelectionFromUser:(id)arg1;

@end
