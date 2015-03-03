//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TNDRMomentInfoViewController.h"

#import "TNDRURLNavigableProtocol.h"

@class NSString, TNDRCircularProgressView, TNDRMomentTimeLeftViewModel, UILabel;

@interface TNDRMomentTimeLeftViewController : TNDRMomentInfoViewController <TNDRURLNavigableProtocol>
{
    TNDRCircularProgressView *_expirationProgressView;
    UILabel *_mainLabel;
    UILabel *_detailLabel;
    TNDRMomentTimeLeftViewModel *_viewModel;
}

+ (id)viewControllerNavigationKey;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) TNDRCircularProgressView *expirationProgressView; // @synthesize expirationProgressView=_expirationProgressView;
- (id)initWithTimeLeftViewModel:(id)arg1;
- (void)loadView;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) TNDRMomentTimeLeftViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)viewWillAppear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
