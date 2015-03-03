//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIWebViewDelegate.h"

@class FBFrictionlessRequestSettings, NSMutableDictionary, NSString, NSURL, UIActivityIndicatorView, UIButton, UIWebView;

@interface FBDialog : UIView <UIWebViewDelegate>
{
    id <FBDialogDelegate> _delegate;
    NSMutableDictionary *_params;
    NSString *_serverURL;
    NSURL *_loadingURL;
    UIWebView *_webView;
    UIActivityIndicatorView *_spinner;
    UIButton *_closeButton;
    int _orientation;
    BOOL _showingKeyboard;
    BOOL _isViewInvisible;
    FBFrictionlessRequestSettings *_frictionlessSettings;
    UIView *_modalBackgroundView;
    BOOL _everShown;
}

- (void)addObservers;
- (void)addRoundedRectToPath:(struct CGContext *)arg1 rect:(struct CGRect)arg2 radius:(float)arg3;
- (void)bounce1AnimationStopped;
- (void)bounce2AnimationStopped;
- (void)cancel;
- (void)dealloc;
@property(nonatomic) id <FBDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deviceOrientationDidChange:(void *)arg1;
- (void)dialogDidCancel:(id)arg1;
- (void)dialogDidSucceed:(id)arg1;
- (void)dialogSuccessHandleFrictionlessResponses:(id)arg1;
- (void)dialogWillAppear;
- (void)dialogWillDisappear;
- (void)dismiss:(BOOL)arg1;
- (void)dismissWithError:(id)arg1 animated:(BOOL)arg2;
- (void)dismissWithSuccess:(BOOL)arg1 animated:(BOOL)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1 fill:(const float *)arg2 radius:(float)arg3;
- (id)generateURL:(id)arg1 params:(id)arg2;
- (id)getStringFromUrl:(id)arg1 needle:(id)arg2;
- (void)hideSpinner;
- (id)init;
- (id)initWithURL:(id)arg1 params:(id)arg2 isViewInvisible:(BOOL)arg3 frictionlessSettings:(id)arg4 delegate:(id)arg5;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)load;
- (void)loadURL:(id)arg1 get:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
- (void)postDismissCleanup;
- (void)removeObservers;
- (BOOL)shouldRotateToOrientation:(int)arg1;
- (void)show;
- (void)showSpinner;
- (void)showWebView;
- (void)sizeToFitOrientation:(BOOL)arg1;
- (void)strokeLines:(struct CGRect)arg1 stroke:(const float *)arg2;
- (BOOL)testBoolUrlParam:(id)arg1 param:(id)arg2;
- (struct CGAffineTransform)transformForOrientation;
- (void)updateWebOrientation;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
