//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TNDRUnmatchReasonDialogViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, TNDRMatch, TNDRUnmatchReasonDialogViewController, UIAlertView;

@interface TNDRBlockMatch : NSObject <UIAlertViewDelegate, TNDRUnmatchReasonDialogViewControllerDelegate>
{
    TNDRUnmatchReasonDialogViewController *_unmatchReasonsDialogViewController;
    TNDRMatch *_match;
    UIAlertView *_blockAlertView;
    CDUnknownBlockType _completion;
}

+ (id)sharedBlockMatch;
- (void).cxx_destruct;
@property(retain, nonatomic) UIAlertView *blockAlertView; // @synthesize blockAlertView=_blockAlertView;
- (id)blockMatchWithReasons:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)completeBlockAndReport:(BOOL)arg1 reason:(unsigned int)arg2;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)dialogViewControllerRequestsDismissal:(id)arg1;
@property(retain, nonatomic) TNDRMatch *match; // @synthesize match=_match;
- (void)reportWithBlockAnalytics:(id)arg1 user:(id)arg2 reason:(id)arg3 message:(id)arg4;
- (void)requestDismissUnmatchCancelled;
- (void)requestDismissUnmatchDialogForReason:(unsigned int)arg1 message:(id)arg2;
@property(retain, nonatomic) TNDRUnmatchReasonDialogViewController *unmatchReasonsDialogViewController; // @synthesize unmatchReasonsDialogViewController=_unmatchReasonsDialogViewController;
- (void)showBlockAndReportFailed;
- (void)showBlockAndReportInProgress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

