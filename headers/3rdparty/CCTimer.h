//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CCScheduledTarget, CCScheduler;

@interface CCTimer : NSObject
{
    CDUnknownBlockType _block;
    CCTimer *_next;
    double _invokeTimeInternal;
    double _pauseDelay;
    BOOL _scheduled;
    CCScheduler *_scheduler;
    CCScheduledTarget *_scheduledTarget;
    BOOL _paused;
    unsigned int _repeatCount;
    id _userData;
    double _repeatInterval;
    double _deltaTime;
}

- (void).cxx_destruct;
- (void)applyPauseDelay:(double)arg1;
@property(readonly, nonatomic) CDUnknownBlockType block;
@property(readonly, nonatomic) double deltaTime; // @synthesize deltaTime=_deltaTime;
- (id)initWithDelay:(double)arg1 scheduler:(id)arg2 scheduledTarget:(id)arg3 block:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) BOOL invalid;
- (void)invalidate;
@property(readonly, nonatomic) double invokeTime;
@property(nonatomic) double invokeTimeInternal;
@property(retain, nonatomic) CCTimer *next;
@property(nonatomic) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) unsigned int repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) double repeatInterval; // @synthesize repeatInterval=_repeatInterval;
- (void)repeatOnceWithInterval:(double)arg1;
@property(readonly, nonatomic) BOOL requiresDelay;
@property(nonatomic) BOOL scheduled;
@property(readonly, nonatomic) CCScheduledTarget *scheduledTarget;
@property(readonly, nonatomic) __weak CCScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;

@end

