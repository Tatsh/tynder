//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGraphObjectSelectionQueryDelegate.h"
#import "UITableViewDelegate.h"

@class FBGraphObjectTableDataSource, NSArray, NSObject<FBGraphObjectSelectionChangedDelegate>, NSString;

@interface FBGraphObjectTableSelection : NSObject <FBGraphObjectSelectionQueryDelegate, UITableViewDelegate>
{
    BOOL _allowsMultipleSelection;
    NSObject<FBGraphObjectSelectionChangedDelegate> *_delegate;
    NSArray *_selection;
    FBGraphObjectTableDataSource *_dataSource;
}

@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
- (void)clearSelectionInTableView:(id)arg1;
@property(retain, nonatomic) FBGraphObjectTableDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)dealloc;
@property(nonatomic) NSObject<FBGraphObjectSelectionChangedDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (void)deselectItem:(id)arg1 cell:(id)arg2 raiseSelectionChanged:(BOOL)arg3;
- (void)deselectItems:(id)arg1 tableView:(id)arg2;
- (BOOL)graphObjectTableDataSource:(id)arg1 selectionIncludesItem:(id)arg2;
- (id)initWithDataSource:(id)arg1;
- (void)selectItem:(id)arg1 cell:(id)arg2 raiseSelectionChanged:(BOOL)arg3;
- (void)selectItem:(id)arg1 tableView:(id)arg2;
@property(retain, nonatomic) NSArray *selection; // @synthesize selection=_selection;
- (void)selectionChanged;
- (BOOL)selectionIncludesItem:(id)arg1;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
