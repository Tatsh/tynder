//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OALAction.h"

@interface OALMoveByAction : OALAction
{
    float unitsPerSecond;
    CDStruct_03942939 startPoint;
    CDStruct_03942939 delta;
}

+ (id)actionWithDuration:(float)arg1 delta:(CDStruct_03942939)arg2;
+ (id)actionWithUnitsPerSecond:(float)arg1 delta:(CDStruct_03942939)arg2;
@property(nonatomic) CDStruct_03942939 delta; // @synthesize delta;
- (id)initWithDuration:(float)arg1 delta:(CDStruct_03942939)arg2;
- (id)initWithUnitsPerSecond:(float)arg1 delta:(CDStruct_03942939)arg2;
- (void)prepareWithTarget:(id)arg1;
@property(nonatomic) float unitsPerSecond; // @synthesize unitsPerSecond;
- (void)updateCompletion:(float)arg1;

@end

