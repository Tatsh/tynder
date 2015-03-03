//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCEffect.h"

@interface CCEffectBloom : CCEffect
{
    unsigned int _numberOfOptimizedOffsets;
    float _sigma;
    BOOL _shaderDirty;
    float _transformedIntensity;
    float _luminanceThreshold;
    float _intensity;
    unsigned int _blurRadius;
}

+ (id)effectWithBlurRadius:(unsigned int)arg1 intensity:(float)arg2 luminanceThreshold:(float)arg3;
@property(nonatomic) unsigned int blurRadius; // @synthesize blurRadius=_blurRadius;
- (void)buildFragmentFunctions;
- (void)buildRenderPasses;
- (void)buildVertexFunctions;
- (id)init;
- (id)initWithPixelBlurRadius:(unsigned int)arg1 intensity:(float)arg2 luminanceThreshold:(float)arg3;
@property(nonatomic) float intensity; // @synthesize intensity=_intensity;
@property(nonatomic) float luminanceThreshold; // @synthesize luminanceThreshold=_luminanceThreshold;
- (unsigned int)prepareForRendering;
- (BOOL)readyForRendering;
- (void)setBlurRadiusAndDependents:(unsigned int)arg1;

@end
