//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotification;

@protocol RMStoreObserver <NSObject>

@optional
- (void)storeDownloadCanceled:(NSNotification *)arg1;
- (void)storeDownloadFailed:(NSNotification *)arg1;
- (void)storeDownloadFinished:(NSNotification *)arg1;
- (void)storeDownloadPaused:(NSNotification *)arg1;
- (void)storeDownloadUpdated:(NSNotification *)arg1;
- (void)storePaymentTransactionDeferred:(NSNotification *)arg1;
- (void)storePaymentTransactionFailed:(NSNotification *)arg1;
- (void)storePaymentTransactionFinished:(NSNotification *)arg1;
- (void)storeProductsRequestFailed:(NSNotification *)arg1;
- (void)storeProductsRequestFinished:(NSNotification *)arg1;
- (void)storeRefreshReceiptFailed:(NSNotification *)arg1;
- (void)storeRefreshReceiptFinished:(NSNotification *)arg1;
- (void)storeRestoreTransactionsFailed:(NSNotification *)arg1;
- (void)storeRestoreTransactionsFinished:(NSNotification *)arg1;
@end

