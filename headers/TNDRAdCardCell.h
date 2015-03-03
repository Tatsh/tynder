//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TNDRCardCell.h"

#import "TNDRCardCellViewProvider.h"

@class NSString, TNDRAdContentView, TNDRAdFooter;

@interface TNDRAdCardCell : TNDRCardCell <TNDRCardCellViewProvider>
{
    TNDRAdContentView *_adView;
    TNDRAdFooter *_footerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TNDRAdContentView *adView; // @synthesize adView=_adView;
- (id)contentView;
@property(retain, nonatomic) TNDRAdFooter *footerView; // @synthesize footerView=_footerView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (id)secondaryView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

