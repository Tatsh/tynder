//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TNDRDialogViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSArray, NSAttributedString, NSIndexPath, NSString, TNDRReportReasonsViewModel;

@interface TNDRUnmatchReasonDialogViewController : TNDRDialogViewController <UITableViewDataSource, UITableViewDelegate, UIViewControllerTransitioningDelegate>
{
    NSAttributedString *_titleText;
    NSAttributedString *_detailText;
    TNDRReportReasonsViewModel *_reportReasonsViewModel;
    NSArray *_displayedUnmatchOptions;
    unsigned int _selectedReason;
    NSIndexPath *_selectedIndex;
}

+ (id)viewControllerNavigationKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSArray *displayedUnmatchOptions; // @synthesize displayedUnmatchOptions=_displayedUnmatchOptions;
- (void)handleCancelButtonTap;
- (void)handleUnmatchButtonTap;
- (id)highlightedImageForIndexPath:(id)arg1;
- (id)imageForIndexPath:(id)arg1;
- (id)imageForIndexPath:(id)arg1 tintColor:(id)arg2;
- (id)init;
- (id)localizedStringForIndexPath:(id)arg1;
- (id)reportOptions;
@property(retain, nonatomic) TNDRReportReasonsViewModel *reportReasonsViewModel; // @synthesize reportReasonsViewModel=_reportReasonsViewModel;
- (id)selectedIcon;
- (id)selectedImageForIndexPath:(id)arg1;
@property(retain, nonatomic) NSIndexPath *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) unsigned int selectedReason; // @synthesize selectedReason=_selectedReason;
@property(retain, nonatomic) NSAttributedString *titleText; // @synthesize titleText=_titleText;
- (void)setupButtons;
- (void)setupTableView;
- (void)setupViews;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <TNDRUnmatchReasonDialogViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
