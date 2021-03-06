//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImageView, UILabel;

@interface TNDRNotificationView : UIView
{
    BOOL _presenting;
    UIImageView *_imageView;
    UILabel *_label;
    NSMutableArray *_notificationQueue;
    int _currentNotificationType;
}

+ (id)sharedView;
- (void).cxx_destruct;
- (id)activeViewController;
- (id)applicationKeyWindow;
- (void)beginPresentingNotifications;
- (BOOL)canShowNotifications;
@property(nonatomic) int currentNotificationType; // @synthesize currentNotificationType=_currentNotificationType;
- (void)hideCurrentNotification;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isPresent) BOOL presenting; // @synthesize presenting=_presenting;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)layoutSubviews;
@property(retain, nonatomic) NSMutableArray *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
- (void)notifyWithFailedMessage:(id)arg1;
- (void)notifyWithMatchRequest;
- (void)notifyWithMomentShareFailedMessage;
- (void)notifyWithNewLike:(id)arg1;
- (void)notifyWithNewMatch:(id)arg1;
- (void)notifyWithNewMessage:(id)arg1;
- (void)notifyWithNewMessageText:(id)arg1 name:(id)arg2 matchID:(id)arg3;
- (void)postNotificationsCompletedShowStatusBar;
- (void)presentNextNotification;
- (void)setup;
- (void)statusBarFrameChanged:(id)arg1;
- (void)updateWithNotification:(id)arg1;

@end

