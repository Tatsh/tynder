//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OALSuspendManager.h"

@class ALContext, NSArray, NSMutableArray, NSOperationQueue, NSString, OALSuspendHandler;

@interface OpenALManager : NSObject <OALSuspendManager>
{
    NSMutableArray *devices;
    OALSuspendHandler *suspendHandler;
    NSOperationQueue *operationQueue;
    ALContext *realCurrentContext;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)purgeSharedInstance;
+ (id)sharedInstance;
+ (id)sharedInstanceNoSynch;
+ (id)sharedInstanceSynch;
- (void).cxx_destruct;
- (void)addSuspendListener:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *availableCaptureDevices;
@property(readonly, retain, nonatomic) NSArray *availableDevices;
- (id)bufferAsyncFromFile:(id)arg1 reduceToMono:(_Bool)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)bufferAsyncFromFile:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)bufferAsyncFromUrl:(id)arg1 reduceToMono:(_Bool)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)bufferAsyncFromUrl:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)bufferFromFile:(id)arg1;
- (id)bufferFromFile:(id)arg1 reduceToMono:(_Bool)arg2;
- (id)bufferFromUrl:(id)arg1;
- (id)bufferFromUrl:(id)arg1 reduceToMono:(_Bool)arg2;
- (void)clearAllBuffers;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) ALContext *currentContext;
- (void)dealloc;
@property(readonly, retain, nonatomic) NSString *defaultCaptureDeviceSpecifier;
@property(readonly, retain, nonatomic) NSString *defaultDeviceSpecifier;
@property(readonly, retain, nonatomic) NSArray *devices; // @synthesize devices;
- (id)init;
@property(nonatomic) _Bool interrupted;
@property(nonatomic) _Bool manuallySuspended;
@property(nonatomic) double mixerOutputFrequency;
- (void)notifyDeviceDeallocating:(id)arg1;
- (void)notifyDeviceInitializing:(id)arg1;
@property(nonatomic) ALContext *realCurrentContext; // @synthesize realCurrentContext;
- (void)removeSuspendListener:(id)arg1;
@property(nonatomic) int renderingQuality;
- (void)setSuspended:(_Bool)arg1;
@property(readonly, nonatomic) _Bool suspended;

@end
