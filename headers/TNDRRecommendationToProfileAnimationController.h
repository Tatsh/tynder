//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, TNDRUserCardCell, UIViewController;

@interface TNDRRecommendationToProfileAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _isPresenting;
    UIViewController *_source;
    TNDRUserCardCell *_cell;
    double _presentationDuration;
    double _dismissalDuration;
}

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
@property(retain, nonatomic) TNDRUserCardCell *cell; // @synthesize cell=_cell;
@property(nonatomic) double dismissalDuration; // @synthesize dismissalDuration=_dismissalDuration;
- (void)executeDismissalAnimation:(id)arg1;
- (void)executePresentationAnimation:(id)arg1;
- (id)init;
@property(nonatomic) BOOL isPresenting; // @synthesize isPresenting=_isPresenting;
@property(nonatomic) double presentationDuration; // @synthesize presentationDuration=_presentationDuration;
@property(retain, nonatomic) UIViewController *source; // @synthesize source=_source;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

