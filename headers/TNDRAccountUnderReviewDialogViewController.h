//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TNDRDialogViewController.h"

#import "TNDRAccountWarningDialog.h"

@class NSString;

@interface TNDRAccountUnderReviewDialogViewController : TNDRDialogViewController <TNDRAccountWarningDialog>
{
    BOOL _sendAnalyticsForThisAppSession;
}

+ (id)viewControllerNavigationKey;
@property(readonly, nonatomic) unsigned int dialogPriority;
@property(nonatomic, getter=didSendAnalyticsForThisAppSession) BOOL sendAnalyticsForThisAppSession; // @synthesize sendAnalyticsForThisAppSession=_sendAnalyticsForThisAppSession;
- (void)handleLogoutButtonTap;
- (void)handleUserLoggedOutAndCleared:(id)arg1;
- (void)setupFooter;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
@property(readonly, nonatomic) int warningType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
