//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImage3x3TextureSamplingFilter.h"

@interface GPUImageThresholdedNonMaximumSuppressionFilter : GPUImage3x3TextureSamplingFilter
{
    int thresholdUniform;
    float _threshold;
}

- (id)init;
- (id)initWithPackedColorspace:(BOOL)arg1;
@property(nonatomic) float threshold; // @synthesize threshold=_threshold;

@end

