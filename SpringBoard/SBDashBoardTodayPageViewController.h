//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBDashBoardPageViewController.h"

#import "SBDashBoardPageViewControllerProtocol-Protocol.h"
#import "SBDashBoardTodayViewControllerDelegate-Protocol.h"

@class NSArray, NSSet, NSString, SBDashBoardAppearance, SBDashBoardBehavior, SBDashBoardPresentation, SBDashBoardTodayViewController, UIColor, _UILegibilitySettings;
@protocol SBDashBoardViewControllerProtocol, SBDashBoardViewPresenting, UICoordinateSpace;

@interface SBDashBoardTodayPageViewController : SBDashBoardPageViewController <SBDashBoardTodayViewControllerDelegate, SBDashBoardPageViewControllerProtocol>
{
    SBDashBoardTodayViewController *_todayViewController;
}

+ (_Bool)isAvailableForConfiguration;
+ (unsigned long long)requiredCapabilities;
@property(retain, nonatomic) SBDashBoardTodayViewController *todayViewController; // @synthesize todayViewController=_todayViewController;
- (void).cxx_destruct;
- (_Bool)handleEvent:(id)arg1;
- (void)dashBoardTodayViewController:(id)arg1 contentViewsDidChange:(id)arg2;
- (void)numberOfWidgetsChanged:(id)arg1;
- (id)displayLayoutElementIdentifier;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) SBDashBoardAppearance *activeAppearance;
@property(readonly, copy, nonatomic) SBDashBoardBehavior *activeBehavior;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) _Bool authenticated;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(nonatomic) __weak id <SBDashBoardViewControllerProtocol> dashBoardViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) SBDashBoardPresentation *externalPresentation;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long participantState;
@property(readonly, nonatomic) long long presentationAltitude;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
@property(readonly, nonatomic) long long presentationPriority;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic) long long presentationTransition;
@property(readonly, nonatomic) long long presentationType;
@property(nonatomic) __weak id <SBDashBoardViewPresenting> presenter;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly) Class superclass;
@property(nonatomic, getter=isTransitioning) _Bool transitioning;

@end

