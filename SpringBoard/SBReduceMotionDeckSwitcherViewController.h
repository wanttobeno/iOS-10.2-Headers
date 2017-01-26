//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBDeckSwitcherViewController.h"

@class NSMutableDictionary, UIImageView;

@interface SBReduceMotionDeckSwitcherViewController : SBDeckSwitcherViewController
{
    NSMutableDictionary *_visibleIconTitleContainers;
    UIImageView *_outerShadowView;
}

- (void).cxx_destruct;
- (void)_updateScrollViewPagingWidth;
- (id)_iconTitleContainerForDisplayItem:(id)arg1;
- (id)_reduceMotionAnimationFactory;
- (struct CGRect)_frameForAllItemsInScrollView;
- (double)_scrollProgressForEffectiveIndex:(double)arg1 displayItemsCount:(unsigned long long)arg2 progressPresented:(double)arg3 frameOrigin:(double)arg4;
- (double)_opacityForIconTitleViewAtIndex:(unsigned long long)arg1;
- (void)_updateIconTitleViews;
- (void)_updateOuterShadowView;
- (id)_animationFactoryForWallpaper;
- (_Bool)_shouldScrollForDismissalToItem:(id)arg1;
- (_Bool)_shouldFadeInToRevealSideAppForDismissal;
- (id)_animationSettingsForHidingSideAppForPresentation;
- (id)_animationSettingsForRevealingSideAppForDismissal;
- (void)_animateDismissalWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_animatePresentationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)_shouldAdjustScrollViewTracking;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (double)_opacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (_Bool)_shouldShowIconAndTitleInItemContainers;
- (void)_applyStyleToItemContainer:(id)arg1 forceRealBlur:(_Bool)arg2;
- (void)_updateScrollViewFrameAndContentSize;
- (double)_preferredVisibleMarginForTopPage;
- (void)_didRemoveVisibleItemContainerForDisplayItem:(id)arg1;
- (void)_didAddVisibleItemContainer:(id)arg1 forDisplayItem:(id)arg2;
- (double)_scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 progressPresented:(double)arg3 frameOrigin:(double)arg4 ignoringScrollOffset:(_Bool)arg5;
- (struct CGRect)_frameForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 transitionParameters:(CDStruct_efa48ab2)arg3 scrollProgress:(double)arg4 ignoringScrollOffset:(_Bool)arg5 ignoringKillingAdjustments:(_Bool)arg6 ignoringPinning:(_Bool)arg7;
- (double)_leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 transitionParameters:(CDStruct_efa48ab2)arg3 scrollProgress:(double)arg4 ignoringKillingAdjustments:(_Bool)arg5;
- (_Bool)_shouldUseDepth;
- (struct CGSize)_scrollViewContentSizeForDisplayItemCount:(unsigned long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

