//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UICollectionViewDataSource.h"

@class NSString, TNDRPassportLocationInfoView, TNDRPassportLocationPreviewView;

@interface TNDRPassportPopularLocationCell : UICollectionViewCell <UICollectionViewDataSource>
{
    id <TNDRPassportPopularLocationCellDelegate> _delegate;
    TNDRPassportLocationPreviewView *_previewView;
    TNDRPassportLocationInfoView *_infoView;
}

- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
@property(nonatomic) __weak id <TNDRPassportPopularLocationCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)goToLocationButtonTapped:(id)arg1;
@property(retain, nonatomic) TNDRPassportLocationInfoView *infoView; // @synthesize infoView=_infoView;
- (id)initWithFrame:(struct CGRect)arg1;
- (int)numberOfSectionsInCollectionView:(id)arg1;
@property(retain, nonatomic) TNDRPassportLocationPreviewView *previewView; // @synthesize previewView=_previewView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

