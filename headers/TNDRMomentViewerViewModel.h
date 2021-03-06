//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TNDRMomentViewerViewModel : NSObject
{
    id <TNDRMomentViewerViewModelDelegate> _delegate;
    NSMutableArray *_moments;
}

- (void).cxx_destruct;
- (void)_deleteMoment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (float)_mostLikes;
@property(nonatomic) __weak id <TNDRMomentViewerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteMomentAtIndex:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (float)expirationPercentForMomentAtIndexPath:(id)arg1;
- (id)expirationStringForMomentAtIndexPath:(id)arg1;
- (BOOL)hasLikesToShowAtIndexPath:(id)arg1;
- (id)initWithMoments:(id)arg1;
- (BOOL)isMyMomentForIndexPath:(id)arg1;
- (float)likePercentForMomentAtIndexPath:(id)arg1;
- (id)likesStringForMomentAtIndexPath:(id)arg1;
- (id)likesViewModelForIndexPath:(id)arg1;
- (id)momentForIndexPath:(id)arg1;
@property(retain, nonatomic) NSMutableArray *moments; // @synthesize moments=_moments;
- (unsigned int)numberOfMoments;
- (void)saveImage:(id)arg1 forIndexPath:(id)arg2;
- (id)timeLeftViewModelForIndexPath:(id)arg1;
- (id)urlForMomentAtIndex:(id)arg1;

@end

