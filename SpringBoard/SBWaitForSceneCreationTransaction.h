//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBTransaction.h"

#import "BSWatchdogDelegate-Protocol.h"
#import "FBSceneManagerObserver-Protocol.h"
#import "FBWindowContextManagerObserver-Protocol.h"

@class BSWatchdog, FBScene, FBSceneManager, NSString;

@interface SBWaitForSceneCreationTransaction : SBTransaction <FBSceneManagerObserver, FBWindowContextManagerObserver, BSWatchdogDelegate>
{
    FBSceneManager *_sceneManager;
    NSString *_sceneIDToWaitForCreation;
    FBScene *_createdScene;
    BSWatchdog *_waitForContextsWatchdog;
    double _waitForContextsTimeout;
    _Bool _waitForContext;
    FBScene *_scene;
}

@property(retain, nonatomic, setter=_setScene:) FBScene *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) _Bool waitForContexts; // @synthesize waitForContexts=_waitForContext;
- (void).cxx_destruct;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)windowContextManagerWillStartTrackingContexts:(id)arg1;
- (void)watchdogFired:(id)arg1;
- (void)_invalidateContextWaitWatchdog;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_begin;
- (void)dealloc;
- (id)initWithSceneID:(id)arg1 waitForContexts:(_Bool)arg2 waitForContextsTimeout:(double)arg3;
- (id)initWithSceneID:(id)arg1 waitForContexts:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

