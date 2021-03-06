//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPSessionManager.h"

@class NSOperation, NSString, NSURLSessionDataTask;

@interface TNDRHTTPClient : AFHTTPSessionManager
{
    NSString *_searchLocale;
    NSOperation *_lastMessageOperation;
    NSURLSessionDataTask *_updatesTask;
    NSURLSessionDataTask *_recsTask;
}

+ (id)sharedDebugHTTPClient;
+ (id)sharedHTTPClient;
- (void).cxx_destruct;
- (void)acceptAccountWarningNotice:(CDUnknownBlockType)arg1;
- (void)acceptMatchRequestFromUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addMatchWithID:(id)arg1 toListWithID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)addMatchesWithIDs:(id)arg1 toListWithID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)addPushNotificationToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)applicationVersion;
- (void)authenticateWithFacebookToken:(id)arg1 facebookID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)blockMatch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelAllHTTPOperations;
- (void)cancelRecommendationOperations;
- (void)cancelUpdateOperations;
- (void)changeListTitle:(id)arg1 forListWithID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)clearAuthorizationHeader;
- (void)completeForMockData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)completionForFailure:(CDUnknownBlockType)arg1 parameters:(id)arg2 method:(int)arg3 path:(id)arg4;
- (CDUnknownBlockType)completionForSuccess:(CDUnknownBlockType)arg1;
- (void)createListWithTitle:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)createNewMoment:(id)arg1 text:(id)arg2 filter:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)declineRecommendation:(id)arg1 inTrending:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteAccount:(CDUnknownBlockType)arg1;
- (void)deleteListWithID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)deleteMatchesWithIDs:(id)arg1 fromListWithID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)deleteMomentWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)followMatch:(id)arg1 shouldFollow:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)formattedTokenFromData:(id)arg1;
- (id)fullApplicationVersion;
- (void)handleAuthenticationFailure:(id)arg1 error:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)handleAuthenticationSuccess:(id)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)hasAuthenticationToken;
- (void)ignoreMatchRequestFromUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithBaseURL:(id)arg1;
@property(nonatomic) __weak NSOperation *lastMessageOperation; // @synthesize lastMessageOperation=_lastMessageOperation;
- (void)likeMomentWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)likeRecommendation:(id)arg1 userTraveling:(BOOL)arg2 recTraveling:(BOOL)arg3 inTrending:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)loadListsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)operatingSystemVersion;
- (void)passMomentWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)performRequestWithPath:(id)arg1 method:(int)arg2 parameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)performRequestWithPath:(id)arg1 method:(int)arg2 parameters:(id)arg3 sendParamsInBody:(BOOL)arg4 completion:(CDUnknownBlockType)arg5 enqueue:(BOOL)arg6;
- (void)processAuthenicationJSON:(id)arg1;
- (void)reauthenticate;
@property(nonatomic) __weak NSURLSessionDataTask *recsTask; // @synthesize recsTask=_recsTask;
- (void)removePushNotificationToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportMatch:(id)arg1 momentID:(id)arg2 withReason:(id)arg3 andOptionalExplanation:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)reportMatch:(id)arg1 withReason:(id)arg2 andOptionalExplanation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reportMomentWithID:(id)arg1 withReason:(id)arg2 andOptionalExplanation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reportUser:(id)arg1 withReason:(id)arg2 andOptionalExplanation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestCurrentUserProfile:(CDUnknownBlockType)arg1;
- (void)requestFriendsUsingTinder:(CDUnknownBlockType)arg1;
- (void)requestLikesForMoment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestMatch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestMatchForFacebookFriendOnTinder:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestMatchWithFacebookID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestMatchWithTinderID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestMomentWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestMomentsFeedBeginning:(id)arg1 lastSeenMoment:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestMomentsForTutorial:(CDUnknownBlockType)arg1;
- (void)requestMomentsForUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestMomentsLikesFeedBeginning:(id)arg1 lastSeenMoment:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestMyMomentsBeginning:(id)arg1 lastSeenMoment:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestMyMomentsOlderThanMoment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestPopularLocationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestRecommendations:(CDUnknownBlockType)arg1;
- (id)requestReturnUserHomeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)requestSearchLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestSearchLocationCoordinate:(CDStruct_2c43369c)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestTokenForPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestUpdatesBeginning:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)requestUserTravelToLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestValidationForToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)retrieveProductIdsForPurchaseWithCompletion:(CDUnknownBlockType)arg1;
- (id)retrievePurchasesWithCompletion:(CDUnknownBlockType)arg1;
- (void)retrieveUserMetadata:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *searchLocale; // @synthesize searchLocale=_searchLocale;
- (void)sendMessage:(id)arg1 toMatch:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendPhotoMessage:(id)arg1 toMatch:(id)arg2 withMessageID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendPushNotificationSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendSharedFacebookFriends:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendSharedPhoneNumbers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAuthorizationHeaderWithToken:(id)arg1;
@property(nonatomic) __weak NSURLSessionDataTask *updatesTask; // @synthesize updatesTask=_updatesTask;
- (void)setup;
- (void)setupAuthorizationDependentObjects;
- (id)stringFromTNDRHTTPRequestMethod:(int)arg1;
- (id)submitPurchaseReceipt:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)translatedLocaleForCurrentiOSLocale;
- (void)updateCurrentUserLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateCurrentUserProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateProfileWithBirthdate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateProfileWithBirthdate:(id)arg1 gender:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateProfileWithGender:(int)arg1 completion:(CDUnknownBlockType)arg2;

@end

