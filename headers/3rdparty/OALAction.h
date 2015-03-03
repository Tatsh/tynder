//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OALAction : NSObject
{
    float duration_;
    float elapsed_;
    _Bool running_;
    _Bool runningInManager_;
    id _target;
}

@property(nonatomic) float duration; // @synthesize duration=duration_;
@property(nonatomic) float elapsed; // @synthesize elapsed=elapsed_;
- (id)init;
- (id)initWithDuration:(float)arg1;
- (void)prepareWithTarget:(id)arg1;
- (void)runWithTarget:(id)arg1;
@property(nonatomic) _Bool running; // @synthesize running=running_;
@property(nonatomic) _Bool runningInManager; // @synthesize runningInManager=runningInManager_;
@property(nonatomic) id target; // @synthesize target=_target;
- (void)startAction;
- (void)stopAction;
- (void)updateCompletion:(float)arg1;

@end
