//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBAppStatusBarSettingsAssertion, SBDisableAppStatusBarAlphaChangesAssertion, SBWindow, UIView;
@protocol FBSceneHostView;

@interface SBUIAnimationFadeAlertToHostedApp : SBUIMainScreenAnimationController
{
    SBWindow *_transitionWindow;
    SBAlert *_deactivatingAlert;
    UIView<FBSceneHostView> *_viewToAnimate;
    _Bool _reallyFinishedAnimating;
    SBDisableAppStatusBarAlphaChangesAssertion *_disableStatusBarAlphaChangeAssertion;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    long long _launchingOrientation;
    UIView *_fakeStatusBarViewContainer;
    _Bool _appIsTranslucent;
}

@property(retain, nonatomic, getter=_viewToAnimate, setter=_setViewToAnimate:) UIView *viewToAnimate; // @synthesize viewToAnimate=_viewToAnimate;
- (void).cxx_destruct;
- (void)_removeFakeStatusBarIfNecessary;
- (void)_showFakeStatusBarIfNecessary;
- (void)_setupFakeStatusBarIfNecessary;
- (void)_maybeReportAnimationFinished;
- (_Bool)_areApplicationLaunchesFinished;
- (id)_animationTimingFunction;
- (void)_applicationDependencyStateChanged;
- (void)_noteAnimationDidFinish;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)animationSettings;
- (id)_animationProgressDependencies;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)_setHidden:(_Bool)arg1;
- (id)_getTransitionWindow;
- (void)_reallyFinishedAnimating;
- (_Bool)_shouldAnimateWallpaper;
- (id)_deactivatingAlert;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

