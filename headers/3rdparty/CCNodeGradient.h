//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCNodeColor.h"

@class CCColor;

@interface CCNodeGradient : CCNodeColor
{
    struct _ccColor4F _endColor;
    struct CGPoint _vector;
}

+ (id)nodeWithColor:(id)arg1 fadingTo:(id)arg2;
+ (id)nodeWithColor:(id)arg1 fadingTo:(id)arg2 alongVector:(struct CGPoint)arg3;
@property(nonatomic) BOOL compressedInterpolation;
@property(retain, nonatomic) CCColor *endColor;
@property(nonatomic) float endOpacity;
- (id)init;
- (id)initWithColor:(id)arg1 fadingTo:(id)arg2;
- (id)initWithColor:(id)arg1 fadingTo:(id)arg2 alongVector:(struct CGPoint)arg3;
@property(retain, nonatomic) CCColor *startColor;
@property(nonatomic) float startOpacity;
@property(nonatomic) struct CGPoint vector; // @synthesize vector=_vector;
- (void)updateColor;

@end

