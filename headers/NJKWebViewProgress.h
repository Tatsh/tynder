//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class NSString, NSURL;

@interface NJKWebViewProgress : NSObject <UIWebViewDelegate>
{
    unsigned int _loadingCount;
    unsigned int _maxLoadCount;
    NSURL *_currentURL;
    BOOL _interactive;
    id <NJKWebViewProgressDelegate> _progressDelegate;
    id <UIWebViewDelegate> _webViewProxyDelegate;
    CDUnknownBlockType _progressBlock;
    float _progress;
}

- (void).cxx_destruct;
- (void)completeProgress;
- (void)forwardInvocation:(id)arg1;
- (void)incrementProgress;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) __weak id <NJKWebViewProgressDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
- (void)reset;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setProgress:(float)arg1;
@property(nonatomic) __weak id <UIWebViewDelegate> webViewProxyDelegate; // @synthesize webViewProxyDelegate=_webViewProxyDelegate;
- (void)startProgress;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

