//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChipmunkConstraint.h"

@interface ChipmunkRotaryLimitJoint : ChipmunkConstraint
{
    struct cpRotaryLimitJoint _constraint;
}

+ (id)rotaryLimitJointWithBodyA:(id)arg1 bodyB:(id)arg2 min:(float)arg3 max:(float)arg4;
- (struct cpConstraint *)constraint;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 min:(float)arg3 max:(float)arg4;
@property(nonatomic) float max;
@property(nonatomic) float min;

@end
