//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerTransitioningDelegate.h"

@class NSString, TNDRProfilePreviewTransitioning;

@interface TNDRTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate>
{
    TNDRProfilePreviewTransitioning *_transitioning;
}

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
@property(retain, nonatomic) TNDRProfilePreviewTransitioning *transitioning; // @synthesize transitioning=_transitioning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

