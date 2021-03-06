//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFetchedResultsControllerDelegate.h"
#import "SDWebImagePrefetcherDelegate.h"
#import "TNDRMQTTSessionManagerDelegate.h"

@class NSArray, NSDate, NSFetchedResultsController, NSMutableArray, NSOperationQueue, NSString, NSTimer, SDWebImagePrefetcher, TNDRMQTTSessionManager, TNDRPopularLocationMerger;

@interface TNDRDataManager : NSObject <NSFetchedResultsControllerDelegate, SDWebImagePrefetcherDelegate, TNDRMQTTSessionManagerDelegate>
{
    BOOL _changedPreferences;
    BOOL _updatingRecommendations;
    BOOL _updatingMatches;
    BOOL _updatingMoments;
    BOOL _updatingMyMoments;
    BOOL _updatingMomentsFeed;
    BOOL _updatingMomentLikes;
    BOOL _hasUnviewedMatches;
    BOOL _updatingInBackground;
    BOOL _preventNewMatchMomentQueries;
    BOOL _canRewindUsers;
    NSDate *_openedApplicationDate;
    NSString *_currentChatID;
    id <TNDRUpdateManagerDelegate> _delegate;
    int _previousMatchCount;
    NSTimer *_recommendationsTimer;
    NSTimer *_updatesTimer;
    NSTimer *_momentsTimer;
    NSMutableArray *_userPrefetchURLs;
    NSMutableArray *_momentPrefetchURLs;
    SDWebImagePrefetcher *_momentImagePrefetcher;
    NSFetchedResultsController *_changedMatchesFetchedResultsController;
    NSFetchedResultsController *_rewindFetchedResultsController;
    TNDRMQTTSessionManager *_mqttManager;
    NSOperationQueue *_momentsMergingOperationQueue;
    NSOperationQueue *_momentLikesMergingOperationQueue;
    NSOperationQueue *_matchUpdatesMergingOperationQueue;
    NSTimer *_failedChoiceSendTimer;
    TNDRPopularLocationMerger *_popularLocationMerger;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)canCallMomentsAPISinceLastCalledTime:(id)arg1;
@property(nonatomic) BOOL canRewindUsers; // @synthesize canRewindUsers=_canRewindUsers;
@property(retain, nonatomic) NSFetchedResultsController *changedMatchesFetchedResultsController; // @synthesize changedMatchesFetchedResultsController=_changedMatchesFetchedResultsController;
- (void)clearStaleRecommendationsAndRefresh;
- (void)connectToTinderMQTTBrokerAfterUpdates;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned int)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (int)countPopularLocations;
@property(retain, nonatomic) NSString *currentChatID; // @synthesize currentChatID=_currentChatID;
- (id)currentCountryCode;
@property(nonatomic) __weak id <TNDRUpdateManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didConnectToMQTT;
- (void)didDisconnectFromBrokerUnintentionally;
- (void)disconnectFromTinderMQTTBroker;
- (void)doDataUpdates:(BOOL)arg1;
- (void)doMomentImagePrefetch;
- (void)doUserImagePrefetch;
- (void)enableMomentsPolling:(BOOL)arg1;
@property(retain, nonatomic) NSTimer *failedChoiceSendTimer; // @synthesize failedChoiceSendTimer=_failedChoiceSendTimer;
@property(nonatomic, getter=hasChangedPreferences) BOOL changedPreferences; // @synthesize changedPreferences=_changedPreferences;
- (BOOL)hasTutorialMomentsForCurrentLanguage;
@property(nonatomic) BOOL hasUnviewedMatches; // @synthesize hasUnviewedMatches=_hasUnviewedMatches;
- (void)imagePrefetcher:(id)arg1 didFinishWithTotalCount:(unsigned int)arg2 skippedCount:(unsigned int)arg3;
- (id)init;
- (void)invalidateUpdateTimer;
- (BOOL)isMQTTConnected;
- (BOOL)isMQTTEnabled;
- (BOOL)isPrefetched:(id)arg1;
@property(nonatomic, getter=isUpdatingInBackground) BOOL updatingInBackground; // @synthesize updatingInBackground=_updatingInBackground;
@property(nonatomic, getter=isUpdatingMatches) BOOL updatingMatches; // @synthesize updatingMatches=_updatingMatches;
@property(nonatomic, getter=isUpdatingMomentLikes) BOOL updatingMomentLikes; // @synthesize updatingMomentLikes=_updatingMomentLikes;
@property(nonatomic, getter=isUpdatingMoments) BOOL updatingMoments; // @synthesize updatingMoments=_updatingMoments;
@property(nonatomic, getter=isUpdatingMomentsFeed) BOOL updatingMomentsFeed; // @synthesize updatingMomentsFeed=_updatingMomentsFeed;
@property(nonatomic, getter=isUpdatingMyMoments) BOOL updatingMyMoments; // @synthesize updatingMyMoments=_updatingMyMoments;
@property(nonatomic, getter=isUpdatingRecommendations) BOOL updatingRecommendations; // @synthesize updatingRecommendations=_updatingRecommendations;
- (id)languageCodeForCurrentPreferredLanguage;
- (id)lastSeenMomentID;
- (id)latestMomentIDForMyMoments;
- (void)logMergeOperationQueueStatus;
@property(retain, nonatomic) NSOperationQueue *matchUpdatesMergingOperationQueue; // @synthesize matchUpdatesMergingOperationQueue=_matchUpdatesMergingOperationQueue;
- (id)matchesWithMissingUserData;
- (void)mergeBlockedMatchUpdates:(id)arg1 inContext:(id)arg2;
- (BOOL)mergeMatchUpdates:(id)arg1 inContext:(id)arg2;
- (unsigned int)mergeMomentsUpdates:(id)arg1 inContext:(id)arg2;
- (unsigned int)mergeRecommendationUpdates:(id)arg1 inContext:(id)arg2;
@property(retain, nonatomic) SDWebImagePrefetcher *momentImagePrefetcher; // @synthesize momentImagePrefetcher=_momentImagePrefetcher;
@property(retain, nonatomic) NSOperationQueue *momentLikesMergingOperationQueue; // @synthesize momentLikesMergingOperationQueue=_momentLikesMergingOperationQueue;
@property(retain, nonatomic) NSMutableArray *momentPrefetchURLs; // @synthesize momentPrefetchURLs=_momentPrefetchURLs;
- (id)momentsIDPrefixForCurrentLanguage;
@property(retain, nonatomic) NSOperationQueue *momentsMergingOperationQueue; // @synthesize momentsMergingOperationQueue=_momentsMergingOperationQueue;
- (BOOL)momentsPollingEnabled;
@property(retain, nonatomic) NSTimer *momentsTimer; // @synthesize momentsTimer=_momentsTimer;
@property(retain, nonatomic) TNDRMQTTSessionManager *mqttManager; // @synthesize mqttManager=_mqttManager;
- (BOOL)newPersistentStoreFilePresent:(id)arg1;
- (id)oldestMomentIDForMyMoments;
@property(retain, nonatomic) NSDate *openedApplicationDate; // @synthesize openedApplicationDate=_openedApplicationDate;
- (void)performPopularLocationsUpdateCompletion:(CDUnknownBlockType)arg1;
- (void)performPostAuthProcesses;
@property(retain, nonatomic) TNDRPopularLocationMerger *popularLocationMerger; // @synthesize popularLocationMerger=_popularLocationMerger;
@property(nonatomic) BOOL preventNewMatchMomentQueries; // @synthesize preventNewMatchMomentQueries=_preventNewMatchMomentQueries;
@property(nonatomic) int previousMatchCount; // @synthesize previousMatchCount=_previousMatchCount;
- (void)queueMatchUpdateOperation:(id)arg1;
- (void)queuePrefetchForMyMoment:(id)arg1 size:(int)arg2;
- (void)queuePrefetchForUser:(id)arg1;
@property(retain, nonatomic) NSTimer *recommendationsTimer; // @synthesize recommendationsTimer=_recommendationsTimer;
- (void)removeMomentLikesForBlockedMatchWithUserID:(id)arg1 inContext:(id)arg2;
- (void)removeMomentsForUnfollowedMatch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeMomentsForUnfollowedMatches:(id)arg1 inContext:(id)arg2;
- (void)removeTutorialMoments;
- (void)resetMoments:(CDUnknownBlockType)arg1;
- (void)retrieveMomentsForNewMatches:(id)arg1;
- (void)retrieveTutorialMoments;
@property(retain, nonatomic) NSFetchedResultsController *rewindFetchedResultsController; // @synthesize rewindFetchedResultsController=_rewindFetchedResultsController;
@property(readonly, nonatomic) NSArray *rewindableUsers;
- (void)saveRetrievedMatchUpdatesToPersistentStore:(id)arg1 updatesModDateString:(id)arg2;
- (void)saveRetrievedMomentLikesToPersistentStore:(id)arg1 shouldNotify:(BOOL)arg2;
- (void)saveRetrievedMomentLikesToPersistentStore:(id)arg1 shouldNotify:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveRetrievedMomentsToPersistentStore:(id)arg1;
- (void)sendFailedRecommendationChoices;
- (void)sendNotificationRecsDone:(BOOL)arg1;
@property(retain, nonatomic) NSTimer *updatesTimer; // @synthesize updatesTimer=_updatesTimer;
@property(retain, nonatomic) NSMutableArray *userPrefetchURLs; // @synthesize userPrefetchURLs=_userPrefetchURLs;
- (void)setup;
- (void)setupChangedFetchedResultsController;
- (void)setupMQTTClient;
- (void)setupMergingOperationQueues;
- (void)setupPrefetch;
- (void)setupRewindFetchedResultsController;
- (void)startFailedRecsSendTimer:(BOOL)arg1;
- (void)startRecommendationUpdateTimer;
- (void)timestampMomentsAPILastCalledToNow;
- (id)tutorialMomentsForCurrentLanguage;
- (void)updateMatches;
- (void)updateMomentLikes;
- (void)updateMoments;
- (void)updateMomentsFeed;
- (void)updateMomentsFeedCascadeThruAllMomentsCalls:(BOOL)arg1;
- (void)updateMyMoments;
- (void)updateMyMomentsCascadeThruLikesCall:(BOOL)arg1;
- (void)updateMyMomentsFromOldestMomentID;
- (void)updatePopularLocationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateRecommendations;
- (void)updateRewindOptions;
- (void)updateUnviewedCounts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

