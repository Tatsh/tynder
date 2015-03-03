//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TNDRURLNavigableProtocol.h"

@class NSString, NSURL, TNDRMatch, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface TNDRNewMatchViewController : UIViewController <TNDRURLNavigableProtocol>
{
    UIImageView *_headingView;
    UILabel *_matchDescriptionLabel;
    UILabel *_buttonOrSeparateLabel;
    UIButton *_actionButton;
    UIButton *_continueButton;
    UIButton *_tellButton;
    UIImageView *_userImageView;
    UIImageView *_matchImageView;
    UIView *_backgroundOverlay;
    UIView *_foregroundView;
    int photoIndex;
    BOOL _iPhone6Screen;
    BOOL _iPhone6PlusScreen;
    TNDRMatch *_match;
    UIImage *_blurredImage;
    NSURL *_currentUserImageURL;
    UIImageView *_blurredImageView;
}

+ (id)viewControllerNavigationKey;
- (void).cxx_destruct;
- (void)animateButtonsIn;
- (void)animateOut:(CDUnknownBlockType)arg1;
- (void)animatePhotosIn;
@property(retain, nonatomic) UIImage *blurredImage; // @synthesize blurredImage=_blurredImage;
@property(retain, nonatomic) UIImageView *blurredImageView; // @synthesize blurredImageView=_blurredImageView;
- (void)continuePlaying:(id)arg1;
@property(retain, nonatomic) NSURL *currentUserImageURL; // @synthesize currentUserImageURL=_currentUserImageURL;
- (id)imageViewForPhoto;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(retain, nonatomic) TNDRMatch *match; // @synthesize match=_match;
- (id)ordinalMatchCount;
- (void)performNewMatchAnimation:(CDUnknownBlockType)arg1;
- (id)photoRotationValuesWithMultiplier:(float)arg1;
- (id)photoTransformValuesWithMultiplier:(float)arg1;
- (id)photoTranslationValuesWithMultiplier:(float)arg1;
- (int)preferredStatusBarStyle;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showChat:(id)arg1;
- (void)tellYourFriends:(id)arg1;
- (void)updateViewForMatchedUser;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

// Remaining properties
@property(readonly, nonatomic) id <UIViewControllerAnimatedTransitioning> animationController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

