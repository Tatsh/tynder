//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCPhysicsJoint.h"

@class ChipmunkSlideJoint;

@interface CCPhysicsSlideJoint : CCPhysicsJoint
{
    ChipmunkSlideJoint *_constraint;
    struct CGPoint _anchorA;
    struct CGPoint _anchorB;
}

- (void).cxx_destruct;
- (id)constraint;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4 minDistance:(float)arg5 maxDistance:(float)arg6;
- (void)setScale:(float)arg1;
- (void)willAddToPhysicsNode:(id)arg1;

@end
