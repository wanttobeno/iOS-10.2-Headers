//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIDynamicAnimatorDelegate-Protocol.h"

@class NSString, SBBounceBehavior, SBBounceSettings, SBBouncingSystem, UIDynamicAnimator, _SBNotificationCenterBouncingItem, _UIFeedbackEdgeBehavior;

@interface SBNotificationCenterBounceAnimator : NSObject <UIDynamicAnimatorDelegate>
{
    UIDynamicAnimator *_animator;
    SBBouncingSystem *_system;
    SBBounceBehavior *_behavior;
    _SBNotificationCenterBouncingItem *_item;
    CDUnknownBlockType _completion;
    SBBounceSettings *_settings;
    struct CGRect _targetFrame;
    _UIFeedbackEdgeBehavior *_feedbackBehavior;
}

@property(nonatomic) __weak _UIFeedbackEdgeBehavior *feedbackBehavior; // @synthesize feedbackBehavior=_feedbackBehavior;
@property(copy, nonatomic, getter=_completion, setter=_setCompletion:) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic, getter=_behavior, setter=_setBehavior:) SBBounceBehavior *behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic, getter=_animator) UIDynamicAnimator *animator; // @synthesize animator=_animator;
- (void).cxx_destruct;
- (void)dynamicAnimatorDidPause:(id)arg1;
- (void)stop;
- (void)_updateSettings;
- (void)beginBounceWithInitialFrame:(struct CGRect)arg1 targetFrame:(struct CGRect)arg2 velocity:(struct CGPoint)arg3 removingGravityAtMidway:(_Bool)arg4 stepper:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)initWithReferenceBounds:(struct CGRect)arg1 settings:(id)arg2 feedback:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

