//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCEffect.h"

@class NSNumber;

@interface CCEffectBrightness : CCEffect
{
    float _brightness;
    NSNumber *_conditionedBrightness;
}

+ (id)effectWithBrightness:(float)arg1;
- (void).cxx_destruct;
@property(nonatomic) float brightness; // @synthesize brightness=_brightness;
- (void)buildFragmentFunctions;
- (void)buildRenderPasses;
@property(retain, nonatomic) NSNumber *conditionedBrightness; // @synthesize conditionedBrightness=_conditionedBrightness;
- (id)init;
- (id)initWithBrightness:(float)arg1;

@end

