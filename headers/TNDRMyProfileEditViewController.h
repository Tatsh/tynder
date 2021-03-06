//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TNDRActionSheetDelegate.h"
#import "TNDRNotificationWindowDelegate.h"
#import "TNDROptionsTableViewControllerDelegate.h"
#import "TNDRProfileEditorChangedData.h"
#import "TNDRURLNavigableProtocol.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class MBProgressHUD, NSArray, NSIndexPath, NSMutableArray, NSString, PSPDFTextView, TNDRActionSheet, TNDRMyProfilePhotoLayout, UICollectionView, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UINavigationBar, UINavigationController, UIScrollView, UITableViewCell, UITableViewController, UITapGestureRecognizer, UIView;

@interface TNDRMyProfileEditViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, TNDRActionSheetDelegate, UITextViewDelegate, TNDROptionsTableViewControllerDelegate, TNDRNotificationWindowDelegate, UITableViewDataSource, UITableViewDelegate, TNDRProfileEditorChangedData, TNDRURLNavigableProtocol>
{
    TNDRMyProfilePhotoLayout *_layout;
    UIImageView *_panImageView;
    UIView *_shadow;
    UILongPressGestureRecognizer *_longPressGesture;
    NSIndexPath *_movedTo;
    UIImage *_mainProfileImage;
    BOOL _isLoading;
    MBProgressHUD *_progressHUD;
    int _photoDataLoaded;
    NSMutableArray *_photoData;
    NSArray *_savedPhotoData;
    NSIndexPath *_indexPathToDeleteOrReplace;
    unsigned int _mainProfilePhotoAction;
    struct CGRect _stashFrame;
    UILabel *_remainingChars;
    NSString *_bio;
    NSString *_savedBio;
    float _kbHeight;
    UINavigationBar *_navBar;
    float _topOffset;
    BOOL _swappedImagePositions;
    BOOL _dismissing;
    UIView *_toolTipBG;
    UILabel *_toolTipLabel;
    UITapGestureRecognizer *_tapGesture;
    TNDRActionSheet *_deleteActionSheet;
    TNDRActionSheet *_addOrReplaceActionSheet;
    UILabel *_aboutLabel;
    PSPDFTextView *_aboutTextView;
    UITableViewCell *_genderSelectionCell;
    UINavigationController *_navController;
    BOOL _isEditingPhotos;
    id <TNDRProfileEditorChangedData> _delegate;
    UICollectionView *_photoCollection;
    UIScrollView *_mainScrollView;
    UITableViewController *_genderTable;
    UIView *_infoContainer;
}

+ (id)viewControllerNavigationKey;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *aboutLabel; // @synthesize aboutLabel=_aboutLabel;
@property(retain, nonatomic) PSPDFTextView *aboutTextView; // @synthesize aboutTextView=_aboutTextView;
- (void)actionSheet:(id)arg1 triggeredButtonWithId:(int)arg2;
- (void)addAboutLabel;
- (void)addAboutTextView;
- (void)addGenderTable;
- (void)addOrReplacePhoto;
- (void)addPhoto;
- (void)addTooltip;
- (void)adjustFrames;
- (void)adjustScrollViewForKeyboardAnimated:(BOOL)arg1;
- (struct CGPoint)calcOffsetBetweenTouchPointAndCellCenterForIndexPath:(id)arg1 andLocation:(struct CGPoint)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
@property(nonatomic) __weak id <TNDRProfileEditorChangedData> delegate; // @synthesize delegate=_delegate;
- (void)deleteItemAtIndexPath:(id)arg1;
- (void)deletePhoto:(id)arg1;
- (void)didSelectCroppedPhotoFromFacebookImageCropper:(id)arg1 isMainPhoto:(BOOL)arg2 withResponse:(id)arg3;
- (void)didSelectOptionWithIndex:(int)arg1;
- (void)dismissToolTip;
- (void)editDone;
- (id)findIndexPathAt:(struct CGPoint)arg1;
- (id)findLargestPhotoFrom:(id)arg1;
- (struct CGRect)frameForPhotoAtIndexPath:(id)arg1;
- (id)genderSelectionCell;
@property(retain, nonatomic) UITableViewController *genderTable; // @synthesize genderTable=_genderTable;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleLongPressGesture:(id)arg1;
- (void)hideKeyboard;
@property(retain, nonatomic) UIView *infoContainer; // @synthesize infoContainer=_infoContainer;
- (id)initWithPhotoData:(id)arg1 bio:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadImageForURL:(id)arg1 andIndex:(int)arg2;
- (void)loadView;
@property(retain, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
- (void)makePanImageForIndexPath:(id)arg1;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) UICollectionView *photoCollection; // @synthesize photoCollection=_photoCollection;
- (int)preferredStatusBarStyle;
- (void)reloadAboutTextViewText;
- (void)reloadCells;
- (void)removePanImageViewAndFinish;
- (void)selectGender;
- (void)setPhotos:(id)arg1 bio:(id)arg2;
- (void)setupCollectionView;
- (void)setupContainerView;
- (void)setupNavBar;
- (void)setupProgressHUD;
- (void)setupScrollView;
- (void)setupUserProfileImages;
- (void)showTooltip;
- (void)swapPhotosAtIndexPath:(id)arg1 withIndexPath:(id)arg2;
- (id)swapPhotosIfNecessary:(struct CGPoint)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)updateRemainingChars:(unsigned int)arg1;
- (void)updateServerWithAbout;
- (void)updateServerWithChangedGender:(int)arg1;
- (void)updateServerWithImagePositions;
- (void)userDidDeletePhotoAtIndexPath:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

// Remaining properties
@property(readonly, nonatomic) id <UIViewControllerAnimatedTransitioning> animationController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

