//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TNDRMomentInfoViewController.h"

#import "TNDRChatViewControllerDelegate.h"
#import "TNDRMomentLikesViewModelDelegate.h"
#import "TNDRURLNavigableProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString, TNDRChatViewController, TNDRCircularProgressView, TNDRMatchToChatAnimationController, TNDRMomentLikesViewModel, UIActivityIndicatorView, UITableView;

@interface TNDRMomentLikesViewController : TNDRMomentInfoViewController <UITableViewDataSource, UITableViewDelegate, TNDRMomentLikesViewModelDelegate, UIViewControllerTransitioningDelegate, TNDRChatViewControllerDelegate, TNDRURLNavigableProtocol>
{
    BOOL _didAnimateCells;
    TNDRCircularProgressView *_likesProgressView;
    UITableView *_tableView;
    TNDRMomentLikesViewModel *_viewModel;
    UIActivityIndicatorView *_activityIndicator;
    TNDRChatViewController *_chatViewController;
    TNDRMatchToChatAnimationController *_toChatAnimationController;
}

+ (id)viewControllerNavigationKey;
- (void).cxx_destruct;
- (void)_animateCellAppearanceForVisibleCells:(id)arg1;
- (void)_configureCell:(id)arg1 forIndexPath:(id)arg2;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)backTapped:(id)arg1;
@property(nonatomic) __weak TNDRChatViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
@property(nonatomic) BOOL didAnimateCells; // @synthesize didAnimateCells=_didAnimateCells;
- (void)didBlockUser;
- (void)didTapChatCloseButton;
- (id)initWithMomentLikesViewModel:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)likesDidChange;
@property(retain, nonatomic) TNDRCircularProgressView *likesProgressView; // @synthesize likesProgressView=_likesProgressView;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)prefersStatusBarHidden;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TNDRMatchToChatAnimationController *toChatAnimationController; // @synthesize toChatAnimationController=_toChatAnimationController;
@property(retain, nonatomic) TNDRMomentLikesViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)transitionTo:(id)arg1 optionsDict:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

// Remaining properties
@property(readonly, nonatomic) id <UIViewControllerAnimatedTransitioning> animationController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

