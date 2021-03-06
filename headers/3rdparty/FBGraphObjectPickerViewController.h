//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBViewController.h"

#import "FBGraphObjectPagingLoaderDelegate.h"
#import "FBGraphObjectSelectionChangedDelegate.h"

@class FBGraphObjectPagingLoader, FBGraphObjectTableDataSource, FBGraphObjectTableSelection, FBSession, NSSet, NSString, UIActivityIndicatorView, UITableView;

@interface FBGraphObjectPickerViewController : FBViewController <FBGraphObjectSelectionChangedDelegate, FBGraphObjectPagingLoaderDelegate>
{
    FBSession *_session;
    BOOL _allowsMultipleSelection;
    BOOL _implicitSession;
    UIActivityIndicatorView *_spinner;
    UITableView *_tableView;
    NSSet *_fieldsForRequest;
    FBGraphObjectTableDataSource *_dataSource;
    FBGraphObjectTableSelection *_selectionManager;
    FBGraphObjectPagingLoader *_loader;
}

+ (double)cacheRefreshDelay;
+ (id)firstRenderLogString;
+ (unsigned int)graphObjectPagingMode;
- (void)_addSessionObserver:(id)arg1;
- (void)_centerAndStartSpinner;
- (void)_clearData;
- (void)_removeSessionObserver:(id)arg1;
@property(nonatomic) BOOL allowsMultipleSelection;
- (void)clearSelection;
- (void)configureDataSource:(id)arg1;
@property(retain, nonatomic) FBGraphObjectTableDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)dealloc;
- (BOOL)delegateIncludesGraphObject:(id)arg1;
@property(copy, nonatomic) NSSet *fieldsForRequest; // @synthesize fieldsForRequest=_fieldsForRequest;
- (void)graphObjectTableSelectionDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)initializeGraphObjectPicker;
@property(nonatomic) BOOL itemPicturesEnabled;
- (void)loadData;
- (void)loadDataSkippingRoundTripIfCached:(id)arg1;
- (void)loadDataThrottledSkippingRoundTripIfCached:(id)arg1;
@property(retain, nonatomic) FBGraphObjectPagingLoader *loader; // @synthesize loader=_loader;
- (void)notifyDelegateDataDidChange;
- (void)notifyDelegateOfError:(id)arg1;
- (void)notifyDelegateSelectionDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pagingLoader:(id)arg1 didLoadData:(id)arg2;
- (void)pagingLoader:(id)arg1 handleError:(id)arg2;
- (void)pagingLoader:(id)arg1 willLoadURL:(id)arg2;
- (void)pagingLoaderDidFinishLoading:(id)arg1;
- (void)pagingLoaderWasCancelled:(id)arg1;
@property(retain, nonatomic) FBGraphObjectTableSelection *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(retain, nonatomic) FBSession *session;
- (void)setSession:(id)arg1 implicit:(BOOL)arg2;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)updateView;
- (void)viewDidLoad;
- (void)viewDidUnload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

