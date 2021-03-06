//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface MPTweakStore : NSObject
{
    NSMutableArray *_orderedTweaks;
    NSMutableDictionary *_namedTweaks;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addTweak:(id)arg1;
- (id)init;
- (void)removeTweak:(id)arg1;
- (void)reset;
- (id)tweakWithName:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *tweaks;

@end

