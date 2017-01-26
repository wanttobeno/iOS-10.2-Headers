//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBWorkspaceTransaction.h"

#import "FBApplicationUpdateScenesTransactionObserver-Protocol.h"
#import "FBSynchronizedTransaction-Protocol.h"
#import "FBSynchronizedTransactionGroupDelegate-Protocol.h"

@class FBDisplayLayoutTransition, FBSynchronizedTransactionGroup, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, SBAlertManager, SBSceneBackgroundedStatusAssertion, SBWorkspaceApplicationTransitionContext;
@protocol FBSynchronizedTransactionDelegate, SBSceneLayoutWorkspaceTransactionDelegate;

@interface SBSceneLayoutWorkspaceTransaction : SBWorkspaceTransaction <FBSynchronizedTransactionGroupDelegate, FBApplicationUpdateScenesTransactionObserver, FBSynchronizedTransaction>
{
    id <SBSceneLayoutWorkspaceTransactionDelegate> _delegate;
    unsigned long long _options;
    FBDisplayLayoutTransition *_fbLayoutTransition;
    _Bool _isTransitioning;
    _Bool _transitionFailed;
    _Bool _delegateTransitionComplete;
    _Bool _synchronizeLayoutTransitionWithSceneUpdates;
    _Bool _performSceneUpdates;
    _Bool _waitForSceneUpdates;
    SBAlertManager *_alertManager;
    SBWorkspaceApplicationTransitionContext *_transitionContext;
    FBSynchronizedTransactionGroup *_sceneUpdateTransactionGroup;
    SBSceneBackgroundedStatusAssertion *_scenesBackgroundedStatusAssertion;
    NSMutableSet *_updateTransactions;
    NSMutableDictionary *_appsBySceneID;
    NSMutableDictionary *_activatingAppsBySceneID;
    NSMutableDictionary *_deactivatingAppsBySceneID;
    NSMutableSet *_scenesToBackground;
    id <FBSynchronizedTransactionDelegate> _synchronizationDelegate;
}

@property(readonly, nonatomic) SBWorkspaceApplicationTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) __weak id <FBSynchronizedTransactionDelegate> synchronizationDelegate; // @synthesize synchronizationDelegate=_synchronizationDelegate;
@property(readonly, nonatomic) NSDictionary *deactivatingApplications; // @synthesize deactivatingApplications=_deactivatingAppsBySceneID;
@property(readonly, nonatomic) NSDictionary *activatingApplications; // @synthesize activatingApplications=_activatingAppsBySceneID;
@property(readonly, nonatomic) NSDictionary *applications; // @synthesize applications=_appsBySceneID;
@property(readonly, nonatomic) NSSet *sceneUpdateTransactions; // @synthesize sceneUpdateTransactions=_updateTransactions;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_isTransitioning;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) __weak id <SBSceneLayoutWorkspaceTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)synchronizedTransactionGroup:(id)arg1 shouldFailForSynchronizedTransaction:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (void)performSynchronizedCommit;
- (_Bool)isReadyForSynchronizedCommit;
- (void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;
- (void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2;
- (void)transaction:(id)arg1 willUpdateScene:(id)arg2;
- (void)transaction:(id)arg1 didCreateScene:(id)arg2;
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)_sendActivationResultWithSuccess:(_Bool)arg1;
- (_Bool)_overrideInterfaceOrientationForOrientationMismatch:(long long *)arg1;
- (void)_updateScenesForTransitionCompletion;
- (void)_teardownKeyboardSuppression;
- (void)_setupKeyboardSuppression;
- (void)_prepareScenesForTransition;
- (void)_updateAggregateDictionary;
- (void)_mainDisplayUpdateAggregateDictionaryForLayoutRoleWithApplication:(id)arg1;
- (void)_prepareSynchronizedSceneUpdates;
- (void)_synchronizeSceneUpdatesNow;
- (void)_performSynchronizedCommit;
- (void)_beginLayoutTransitionNow;
- (void)_completeTransition;
- (void)_evaluateTransitionCompletion;
- (void)_performTransition;
- (void)_captureAppsForTransition;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_willFailWithReason:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (_Bool)_canBeInterrupted;
- (void)_didComplete;
- (void)_begin;
- (void)_willBegin;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

