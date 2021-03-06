//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class MPIOConsumerPool, NSArray, NSInputStream, NSMutableArray, NSMutableData, NSMutableSet, NSObject<OS_dispatch_queue>, NSOperationQueue, NSOutputStream, NSString, NSURL, NSURLRequest;

@interface MPWebSocket : NSObject <NSStreamDelegate>
{
    int _webSocketVersion;
    NSOperationQueue *_delegateOperationQueue;
    NSObject<OS_dispatch_queue> *_delegateDispatchQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_consumers;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSMutableData *_readBuffer;
    unsigned int _readBufferOffset;
    NSMutableData *_outputBuffer;
    unsigned int _outputBufferOffset;
    unsigned char _currentFrameOpcode;
    unsigned long _currentFrameCount;
    unsigned long _readOpCount;
    unsigned int _currentStringScanPosition;
    NSMutableData *_currentFrameData;
    NSString *_closeReason;
    NSString *_secKey;
    BOOL _pinnedCertFound;
    unsigned char _currentReadMaskKey[4];
    unsigned long _currentReadMaskOffset;
    BOOL _consumerStopped;
    BOOL _closeWhenFinishedWriting;
    BOOL _failed;
    BOOL _secure;
    NSURLRequest *_urlRequest;
    struct __CFHTTPMessage *_receivedHTTPHeaders;
    BOOL _sentClose;
    BOOL _didFail;
    int _closeCode;
    BOOL _isPumping;
    NSMutableSet *_scheduledRunloops;
    MPWebSocket *_selfRetain;
    NSArray *_requestedProtocols;
    MPIOConsumerPool *_consumerPool;
    id <MPWebSocketDelegate> _delegate;
    NSURL *_url;
    int _readyState;
    NSString *_protocol;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_HTTPHeadersDidFinish;
- (void)_MP_commonInit;
- (void)_addConsumerWithDataLength:(unsigned long)arg1 callback:(CDUnknownBlockType)arg2 readToCurrentFrame:(BOOL)arg3 unmaskBytes:(BOOL)arg4;
- (void)_addConsumerWithScanner:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_addConsumerWithScanner:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2 dataLength:(unsigned long)arg3;
- (BOOL)_checkHandshake:(struct __CFHTTPMessage *)arg1;
- (void)_closeWithProtocolError:(id)arg1;
- (void)_connect;
- (void)_disconnect;
- (void)_failWithError:(id)arg1;
- (void)_handleFrameHeader:(CDStruct_c6e275e6)arg1 curData:(id)arg2;
- (void)_handleFrameWithData:(id)arg1 opCode:(int)arg2;
- (void)_handleMessage:(id)arg1;
- (void)_initializeStreams;
- (BOOL)_innerPumpScanner;
- (void)_performDelegateBlock:(CDUnknownBlockType)arg1;
- (void)_pumpScanner;
- (void)_pumpWriting;
- (void)_readFrameContinue;
- (void)_readFrameNew;
- (void)_readHTTPHeader;
- (void)_readUntilBytes:(const void *)arg1 length:(unsigned long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)_readUntilHeaderCompleteWithCallback:(CDUnknownBlockType)arg1;
- (void)_sendFrameWithOpcode:(int)arg1 data:(id)arg2;
- (void)_writeData:(id)arg1;
- (void)assertOnWorkQueue;
- (void)close;
- (void)closeWithCode:(int)arg1 reason:(id)arg2;
- (void)dealloc;
@property(nonatomic) id <MPWebSocketDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateDispatchQueue; // @synthesize delegateDispatchQueue=_delegateDispatchQueue;
@property(retain, nonatomic) NSOperationQueue *delegateOperationQueue; // @synthesize delegateOperationQueue=_delegateOperationQueue;
- (void)didConnect;
- (void)handleCloseWithData:(id)arg1;
- (void)handlePing:(id)arg1;
- (void)handlePong;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 protocols:(id)arg2;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURLRequest:(id)arg1 protocols:(id)arg2;
- (void)open;
@property(readonly, copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(nonatomic) int readyState; // @synthesize readyState=_readyState;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)send:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
@property(readonly, retain, nonatomic) NSURL *url; // @synthesize url=_url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

