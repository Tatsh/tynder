//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface CCAnimation : NSObject <NSCopying>
{
    NSMutableArray *_frames;
    float _totalDelayUnits;
    float _delayPerUnit;
    BOOL _restoreOriginalFrame;
    unsigned int _loops;
}

+ (id)animation;
+ (id)animationWithAnimationFrames:(id)arg1 delayPerUnit:(float)arg2 loops:(unsigned int)arg3;
+ (id)animationWithSpriteFrames:(id)arg1;
+ (id)animationWithSpriteFrames:(id)arg1 delay:(float)arg2;
- (void).cxx_destruct;
- (void)addSpriteFrame:(id)arg1;
- (void)addSpriteFrameWithFilename:(id)arg1;
- (void)addSpriteFrameWithTexture:(id)arg1 rect:(struct CGRect)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(nonatomic) float delayPerUnit; // @synthesize delayPerUnit=_delayPerUnit;
- (id)description;
@property(readonly, nonatomic) float duration;
@property(retain, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
- (id)init;
- (id)initWithAnimationFrames:(id)arg1 delayPerUnit:(float)arg2 loops:(unsigned int)arg3;
- (id)initWithSpriteFrames:(id)arg1;
- (id)initWithSpriteFrames:(id)arg1 delay:(float)arg2;
@property(nonatomic) unsigned int loops; // @synthesize loops=_loops;
@property(nonatomic) BOOL restoreOriginalFrame; // @synthesize restoreOriginalFrame=_restoreOriginalFrame;
@property(readonly, nonatomic) float totalDelayUnits; // @synthesize totalDelayUnits=_totalDelayUnits;

@end

