//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPWebSocketDelegate.h"

@class MPWebSocket, NSDictionary, NSMutableDictionary, NSOperationQueue, NSString, NSURL, UIView;

@interface MPABTestDesignerConnection : NSObject <MPWebSocketDelegate>
{
    BOOL _open;
    BOOL _connected;
    BOOL _keepTrying;
    NSURL *_url;
    NSMutableDictionary *_session;
    NSDictionary *_typeToMessageClassMap;
    MPWebSocket *_webSocket;
    NSOperationQueue *_commandQueue;
    UIView *_recordingView;
    CDUnknownBlockType _connectCallback;
    CDUnknownBlockType _disconnectCallback;
    BOOL _sessionEnded;
}

- (void).cxx_destruct;
- (void)close;
@property(readonly, nonatomic) BOOL connected; // @synthesize connected=_connected;
- (void)dealloc;
- (id)designerMessageForMessage:(id)arg1;
- (void)hideConnectedView;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 keepTrying:(BOOL)arg2 connectCallback:(CDUnknownBlockType)arg3 disconnectCallback:(CDUnknownBlockType)arg4;
- (void)open;
- (void)reconnect:(BOOL)arg1 maxInterval:(int)arg2 maxRetries:(int)arg3;
- (void)sendMessage:(id)arg1;
@property(nonatomic) BOOL sessionEnded; // @synthesize sessionEnded=_sessionEnded;
- (id)sessionObjectForKey:(id)arg1;
- (void)setSessionObject:(id)arg1 forKey:(id)arg2;
- (void)showConnectedView;
- (void)webSocket:(id)arg1 didCloseWithCode:(int)arg2 reason:(id)arg3 wasClean:(BOOL)arg4;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

