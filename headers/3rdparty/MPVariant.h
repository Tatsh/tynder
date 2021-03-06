//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSMutableOrderedSet;

@interface MPVariant : NSObject <NSCoding>
{
    BOOL _running;
    BOOL _finished;
    unsigned int _ID;
    unsigned int _experimentID;
    NSMutableOrderedSet *_actions;
    NSMutableArray *_tweaks;
}

+ (id)variantWithJSONObject:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int ID; // @synthesize ID=_ID;
@property(retain, nonatomic) NSMutableOrderedSet *actions; // @synthesize actions=_actions;
- (void)addActionFromJSONObject:(id)arg1 andExecute:(BOOL)arg2;
- (void)addActionsFromJSONObject:(id)arg1 andExecute:(BOOL)arg2;
- (void)addTweakFromJSONObject:(id)arg1 andExecute:(BOOL)arg2;
- (void)addTweaksFromJSONObject:(id)arg1 andExecute:(BOOL)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)execute;
@property(nonatomic) unsigned int experimentID; // @synthesize experimentID=_experimentID;
- (void)finish;
@property(readonly, nonatomic) BOOL finished; // @synthesize finished=_finished;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(unsigned int)arg1 experimentID:(unsigned int)arg2 actions:(id)arg3 tweaks:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToVariant:(id)arg1;
- (void)removeActionWithName:(id)arg1;
- (void)restart;
@property(readonly, nonatomic) BOOL running; // @synthesize running=_running;
@property(retain, nonatomic) NSMutableArray *tweaks; // @synthesize tweaks=_tweaks;
- (void)stop;

@end

