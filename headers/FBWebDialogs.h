//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBWebDialogs : NSObject
{
}

+ (void)presentDialogModallyWithSession:(id)arg1 dialog:(id)arg2 parameters:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (void)presentDialogModallyWithSession:(id)arg1 dialog:(id)arg2 parameters:(id)arg3 handler:(CDUnknownBlockType)arg4 delegate:(id)arg5;
+ (void)presentFeedDialogModallyWithSession:(id)arg1 parameters:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)presentRequestsDialogModallyWithSession:(id)arg1 message:(id)arg2 title:(id)arg3 parameters:(id)arg4 handler:(CDUnknownBlockType)arg5;
+ (void)presentRequestsDialogModallyWithSession:(id)arg1 message:(id)arg2 title:(id)arg3 parameters:(id)arg4 handler:(CDUnknownBlockType)arg5 friendCache:(id)arg6;

@end
