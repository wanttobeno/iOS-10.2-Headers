//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBSearchEtceteraMultiplexingViewController.h"

@class NCNotificationListViewController, SBSearchEtceteraNavigationController, UIView;
@protocol SBNotificationCenterWithSearchViewControllerPresentationDelegate;

@interface SBNotificationCenterWithSearchViewController : SBSearchEtceteraMultiplexingViewController
{
    unsigned long long _lastValidPresentationMode;
    id <SBNotificationCenterWithSearchViewControllerPresentationDelegate> _presentationDelegate;
}

@property(nonatomic) __weak id <SBNotificationCenterWithSearchViewControllerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void).cxx_destruct;
- (void)_sendDidPresentOrDismissModalViewControllerCallbackWithCoordinator:(id)arg1;
- (void)presentationControllerDidEndDismissing:(id)arg1;
- (void)presentationControllerWillBeginDismissing:(id)arg1;
- (void)presentationControllerDidEndPresenting:(id)arg1;
- (void)presentationControllerWillBeginPresenting:(id)arg1;
- (void)performScrollTest:(id)arg1 iterations:(long long)arg2 delta:(long long)arg3;
- (void)willActivateHosting;
- (id)customAnimator;
- (id)requestedLegibilitySettings;
- (_Bool)_shouldWidgetsBlurContent;
- (unsigned long long)presentationMode;
- (unsigned long long)initialPresentationMode;
- (unsigned long long)defaultSearchViewDismissalReason;
- (unsigned long long)defaultSearchViewPresentationSource;
- (_Bool)_todayViewWantsClippingLine;
- (_Bool)_wantsSeparatorForScrollView:(id)arg1;
- (id)_todayViewController;
- (void)_updateClippingLineVisibilityForVisibleModes:(unsigned long long)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didChangeToMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)willChangeToMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)updateClippingLineVisibility;
- (void)exitSpotlightAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enterSpotlightAnimated:(_Bool)arg1 fromPartialPulldown:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool showPageControl;
@property(readonly, nonatomic) UIView *contentContainerView;
@property(readonly, nonatomic) UIView *notificationAndTodayContainerView;
@property(readonly, nonatomic) NCNotificationListViewController *notificationListViewController;
@property(readonly, nonatomic) SBSearchEtceteraNavigationController *navigationController;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

@end

