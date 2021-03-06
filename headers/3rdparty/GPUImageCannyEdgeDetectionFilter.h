//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageDirectionalNonMaximumSuppressionFilter, GPUImageGrayscaleFilter, GPUImageSingleComponentGaussianBlurFilter, GPUImageWeakPixelInclusionFilter, GPUimageDirectionalSobelEdgeDetectionFilter;

@interface GPUImageCannyEdgeDetectionFilter : GPUImageFilterGroup
{
    GPUImageGrayscaleFilter *luminanceFilter;
    GPUImageSingleComponentGaussianBlurFilter *blurFilter;
    GPUimageDirectionalSobelEdgeDetectionFilter *edgeDetectionFilter;
    GPUImageDirectionalNonMaximumSuppressionFilter *nonMaximumSuppressionFilter;
    GPUImageWeakPixelInclusionFilter *weakPixelInclusionFilter;
    float upperThreshold;
    float lowerThreshold;
    float blurRadiusInPixels;
    float blurTexelSpacingMultiplier;
    float texelWidth;
    float texelHeight;
}

- (void).cxx_destruct;
@property(nonatomic) float blurRadiusInPixels; // @synthesize blurRadiusInPixels;
@property(nonatomic) float blurTexelSpacingMultiplier; // @synthesize blurTexelSpacingMultiplier;
- (id)init;
@property(nonatomic) float lowerThreshold; // @synthesize lowerThreshold;
@property(nonatomic) float texelHeight; // @synthesize texelHeight;
@property(nonatomic) float texelWidth; // @synthesize texelWidth;
@property(nonatomic) float upperThreshold; // @synthesize upperThreshold;

@end

