//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQTTDecoder, MQTTMessage, NSError;

@protocol MQTTDecoderDelegate <NSObject>
- (void)decoder:(MQTTDecoder *)arg1 handleEvent:(int)arg2 error:(NSError *)arg3;
- (void)decoder:(MQTTDecoder *)arg1 newMessage:(MQTTMessage *)arg2;
@end

