//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, POPAnimation;

@interface POPAnimationTracer : NSObject
{
    POPAnimation *_animation;
    struct _POPAnimationState *_animationState;
    NSMutableArray *_events;
    BOOL _animationHasVelocity;
    BOOL _shouldLogAndResetOnCompletion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *allEvents;
- (void)autoreversed;
- (void)didReachToValue:(id)arg1;
- (void)didStart;
- (void)didStop:(BOOL)arg1;
- (id)eventsWithType:(unsigned int)arg1;
- (id)initWithAnimation:(id)arg1;
- (void)readPropertyValue:(id)arg1;
- (void)reset;
@property(nonatomic) BOOL shouldLogAndResetOnCompletion; // @synthesize shouldLogAndResetOnCompletion=_shouldLogAndResetOnCompletion;
- (void)start;
- (void)stop;
- (void)updateBounciness:(float)arg1;
- (void)updateFriction:(float)arg1;
- (void)updateFromValue:(id)arg1;
- (void)updateMass:(float)arg1;
- (void)updateSpeed:(float)arg1;
- (void)updateTension:(float)arg1;
- (void)updateToValue:(id)arg1;
- (void)updateVelocity:(id)arg1;
@property(readonly, nonatomic) NSArray *writeEvents;
- (void)writePropertyValue:(id)arg1;

@end
