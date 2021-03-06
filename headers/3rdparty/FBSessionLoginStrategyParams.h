//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface FBSessionLoginStrategyParams : NSObject
{
    BOOL _tryIntegratedAuth;
    BOOL _tryFBAppAuth;
    BOOL _trySafariAuth;
    BOOL _tryFallback;
    BOOL _isReauthorize;
    BOOL _canFetchAppSettings;
    unsigned int _defaultAudience;
    NSArray *_permissions;
    NSMutableDictionary *_webParams;
}

@property BOOL canFetchAppSettings; // @synthesize canFetchAppSettings=_canFetchAppSettings;
- (void)dealloc;
@property unsigned int defaultAudience; // @synthesize defaultAudience=_defaultAudience;
@property BOOL isReauthorize; // @synthesize isReauthorize=_isReauthorize;
@property(retain, nonatomic) NSArray *permissions; // @synthesize permissions=_permissions;
@property BOOL tryFBAppAuth; // @synthesize tryFBAppAuth=_tryFBAppAuth;
@property BOOL tryFallback; // @synthesize tryFallback=_tryFallback;
@property BOOL tryIntegratedAuth; // @synthesize tryIntegratedAuth=_tryIntegratedAuth;
@property BOOL trySafariAuth; // @synthesize trySafariAuth=_trySafariAuth;
@property(retain, nonatomic) NSMutableDictionary *webParams; // @synthesize webParams=_webParams;

@end

