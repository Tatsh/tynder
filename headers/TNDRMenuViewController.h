//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TNDR2ProfilePreviewDelegate.h"
#import "TNDRAppSettingsViewControllerDelegate.h"
#import "TNDRURLNavigableProtocol.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSArray, NSString, NSURL, TNDRMenuHeaderView, TNDRMenuToProfileAnimationController, TNDRProfilePreviewViewController, UIImageView, UITableView, UITapGestureRecognizer, UIView;

@interface TNDRMenuViewController : UIViewController <TNDR2ProfilePreviewDelegate, UIViewControllerTransitioningDelegate, TNDRAppSettingsViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, TNDRURLNavigableProtocol>
{
    BOOL _profileReadyForSnapshot;
    BOOL _dismissing;
    BOOL _useCachedImages;
    BOOL _didOpenMenu;
    BOOL _preventMenuOpenCloseEventTracking;
    id <TNDRSettingsViewControllerDelegate> _delegate;
    NSArray *_items;
    TNDRMenuHeaderView *_headerView;
    UITableView *_tableView;
    UIImageView *_blurredBackgroundImageView;
    UIImageView *_backgroundImageView;
    UIView *_profileInfoSnapshot;
    TNDRProfilePreviewViewController *_profilePreviewViewController;
    UITapGestureRecognizer *_tapGestureRecognizer;
    TNDRMenuToProfileAnimationController *_animationController;
    NSArray *_nonFriendsItems;
    NSURL *_lastUsedProfileImageURL;
}

+ (id)viewControllerNavigationKey;
- (void).cxx_destruct;
- (void)animateToProfilePreview;
@property(retain, nonatomic) TNDRMenuToProfileAnimationController *animationController; // @synthesize animationController=_animationController;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *blurredBackgroundImageView; // @synthesize blurredBackgroundImageView=_blurredBackgroundImageView;
- (void)buildProfilePreview;
- (void)configureCell:(id)arg1 withItem:(id)arg2;
- (BOOL)currentAvatarURLWasUpdated;
- (void)currentUserDidSynchronize:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <TNDRSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didLogoutAndWillDismiss;
@property(nonatomic) BOOL didOpenMenu; // @synthesize didOpenMenu=_didOpenMenu;
- (void)didTapProfileDoneButton;
- (void)didTapTableHeaderView:(id)arg1;
@property(nonatomic) BOOL dismissing; // @synthesize dismissing=_dismissing;
- (void)doneButtonPressed:(id)arg1;
- (void)editButtonPressed:(id)arg1;
@property(retain, nonatomic) TNDRMenuHeaderView *headerView; // @synthesize headerView=_headerView;
- (id)initWithItems:(id)arg1;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSURL *lastUsedProfileImageURL; // @synthesize lastUsedProfileImageURL=_lastUsedProfileImageURL;
@property(retain, nonatomic) NSArray *nonFriendsItems; // @synthesize nonFriendsItems=_nonFriendsItems;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)parseNonFriendsItems;
- (void)presentedViewControllerDoneButtonPressed:(id)arg1;
@property(nonatomic) BOOL preventMenuOpenCloseEventTracking; // @synthesize preventMenuOpenCloseEventTracking=_preventMenuOpenCloseEventTracking;
- (void)processDownloadedProfileImage:(id)arg1;
@property(retain, nonatomic) UIView *profileInfoSnapshot; // @synthesize profileInfoSnapshot=_profileInfoSnapshot;
- (void)profileIsReadyForSnapshot;
- (void)profilePhotoChanged:(id)arg1;
@property(retain, nonatomic) TNDRProfilePreviewViewController *profilePreviewViewController; // @synthesize profilePreviewViewController=_profilePreviewViewController;
- (void)registerNotifications;
- (void)restoreSubviewsToDefaultPositions;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) BOOL useCachedImages; // @synthesize useCachedImages=_useCachedImages;
- (void)setupBackgroundImageView;
- (void)setupNavigationBar;
- (void)setupTableHeaderView;
- (void)setupTableView;
- (void)setupTapGestureRecognizer;
- (void)showProfilePreview;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)takeProfileNavbarSnapshot;
- (void)takeProfileSnapshot;
- (void)transitionTo:(id)arg1 optionsDict:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)translateProfilesImagesForOffset:(float)arg1;
- (void)updateAlphasForOffset:(float)arg1;
- (void)updateBackgroundImageViewWithImage:(id)arg1;
- (void)updateBlurredBackground:(id)arg1;
- (void)updateHeaderImagesIfCachedDataIsAvailable;
- (void)updateNameLabel;
- (void)updateProfilePictureImageView:(id)arg1;
- (void)userDataCleared:(id)arg1;
- (id)userLargeProfileImageURL;
- (id)userProfileImageURL;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

