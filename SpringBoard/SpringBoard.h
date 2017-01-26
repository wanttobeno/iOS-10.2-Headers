//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/FBSystemApp.h>

#import "MCProfileConnectionObserver-Protocol.h"
#import "SBModalAlertPresentationCoordinatorDelegate-Protocol.h"
#import "SBPowerDownControllerDelegate-Protocol.h"
#import "SBRestartManagerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"

@class BBDataProviderConnection, NSDate, NSHashTable, NSMutableArray, NSMutableSet, NSNumberFormatter, NSObject, NSSet, NSString, NSTimer, SBAccountStoreManager, SBAppStatusBarSettingsAssertion, SBApplication, SBBluetoothAccessoryBatteryMonitor, SBCardItemsController, SBCombinationHardwareButton, SBFUserAuthenticationController, SBHomeHardwareButton, SBLockHardwareButton, SBMainDisplayInterfaceOrientationAggregator, SBModalAlertPresentationCoordinator, SBModalAlertPresenter, SBNCNotificationDispatcher, SBPowerDownController, SBPressSequenceAWDLogger, SBRestartManager, SBSStatusBarStyleOverridesAssertion, SBScreenshotManager, SBSynchronizeCloudCriticalDataOperation, SBUIController, SBUserSessionController, SBWidgetController, UIWindow;
@protocol OS_dispatch_queue, OS_dispatch_source, SBFLockOutStatusProvider;

@interface SpringBoard : FBSystemApp <MCProfileConnectionObserver, SBPowerDownControllerDelegate, SBRestartManagerDelegate, SBModalAlertPresentationCoordinatorDelegate, UIApplicationDelegate>
{
    SBUIController *_uiController;
    double _headsetButtonDownTime;
    struct __IOHIDEvent *_headsetDownEvent;
    int _headsetClickCount;
    int _ringerSwitchState;
    unsigned int _headsetButtonClickCount:8;
    unsigned int _menuButtonClickCount:8;
    unsigned int _screenWasDimOnMenuDown:1;
    unsigned int _screenshotWasTaken:1;
    unsigned int _dontLockOnNextLockUp:1;
    unsigned int _headsetDownDelayedActionPerformed:1;
    unsigned int _isSeekingInMedia:1;
    unsigned int _ignoringCurrentLockButtonPress:1;
    int _mediaSeekDirection;
    unsigned int _springBoardRequestsAccelerometerEvents;
    long long _activeInterfaceOrientation;
    int _lastRequestedStatusBarStyleOverrides;
    NSMutableSet *_activeInterfaceOrientationObservers;
    NSMutableArray *_activeInterfaceOrientationOverrideStack;
    _Bool _wantsOrientationEvents;
    int _notifyDontAnimateREOToken;
    int _notifyDontAllowMediaHUDToken;
    _Bool _expectsFaceContact;
    _Bool _expectsFaceContactInLandscape;
    _Bool _proximityEventsEnabled;
    _Bool _smartCoverClosed;
    _Bool _keybagRefetchTransactionIsActive;
    _Bool _menuButtonDown;
    NSSet *_restrictionDisabledApplications;
    SBApplication *_nowRecordingApp;
    SBApplication *_menuButtonInterceptApp;
    _Bool _menuButtonInterceptAppEnabledForever;
    NSMutableArray *_disableNowPlayingHUDAssertionBundleIds;
    NSMutableArray *_appsRegisteredForVolumeEvents;
    NSMutableArray *_appsRegisteredForLockButtonEvents;
    SBApplication *_lastLockButtonEventRecipient;
    NSNumberFormatter *_decimalFormatter;
    NSNumberFormatter *_percentFormatter;
    NSTimer *_midnightTimer;
    NSDate *_midnightFireDate;
    struct _opaque_pthread_t *_backgroundMIGServerThread;
    struct _opaque_pthread_t *_iconGenerationMIGServerThread;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned int _memoryPressureStatus;
    NSMutableArray *_blocksAwaitingAvailableMemory;
    BBDataProviderConnection *_bulletinBoardConnection;
    NSObject<OS_dispatch_queue> *_bulletinBoardQueue;
    SBCardItemsController *_cardItemsController;
    SBNCNotificationDispatcher *_notificationDispatcher;
    struct __CFBoolean *_shouldDelaySleepForHeadsetClick;
    NSHashTable *_volumePressBandits;
    _Bool _didPlayLockSound;
    unsigned long long _volumeAndLockButtonPrecedence;
    SBUserSessionController *_userSessionController;
    id <SBFLockOutStatusProvider> _lockOutController;
    SBFUserAuthenticationController *_authenticationController;
    NSHashTable *_disableActiveOrientationChangeAssertions;
    _Bool _hasFinishedLaunching;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBAppStatusBarSettingsAssertion *_showStatusBarAssertion;
    SBSStatusBarStyleOverridesAssertion *_recordingStatusBarStyleOverrideAssertion;
    _Bool _atHomescreen;
    NSObject<OS_dispatch_queue> *_volumePowerQueue;
    NSString *_logFile;
    SBBluetoothAccessoryBatteryMonitor *_bluetoothBatteryMonitor;
    SBScreenshotManager *_screenshotManager;
    SBSynchronizeCloudCriticalDataOperation *_synchronizeCloudCriticalDataOperation;
    SBRestartManager *_restartManager;
    struct __GSEvent *_pendingDeviceOrientationChangeEventDuringStartupTransition;
    SBModalAlertPresenter *_systemModalAlertPresenter;
    SBModalAlertPresentationCoordinator *_modalAlertPresentationCoordinator;
    SBMainDisplayInterfaceOrientationAggregator *_orientationAggregator;
    _Bool _inUserTransition;
    _Bool _determiningBootTransition;
    _Bool _dontLockEver;
    unsigned long long _volumeUpAggdStartTime;
    unsigned long long _volumeDownAggdStartTime;
    _Bool _typingActive;
    _Bool _batterySaverModeActive;
    int _nowPlayingProcessPID;
    NSMutableArray *_nowLocatingApps;
    SBWidgetController *_widgetController;
    SBHomeHardwareButton *_homeHardwareButton;
    SBLockHardwareButton *_lockHardwareButton;
    SBAccountStoreManager *_accountStoreController;
    SBPowerDownController *_powerDownController;
    NSTimer *_daylightSavingsTimer;
    SBCombinationHardwareButton *_combinationHardwareButton;
    SBPressSequenceAWDLogger *_volumeIncrementSequenceLogger;
    SBPressSequenceAWDLogger *_volumeDecrementSequenceLogger;
}

+ (Class)_applicationInfoClass;
+ (void)initializeSystemServices;
+ (void)preFrontBoardInitializationHook;
+ (long long)startupInterfaceOrientation;
+ (_Bool)supportsAsynchronousApplicationLoading;
+ (_Bool)shouldFixMainThreadPriority;
@property(readonly, nonatomic) SBPressSequenceAWDLogger *volumeDecrementSequenceLogger; // @synthesize volumeDecrementSequenceLogger=_volumeDecrementSequenceLogger;
@property(readonly, nonatomic) SBPressSequenceAWDLogger *volumeIncrementSequenceLogger; // @synthesize volumeIncrementSequenceLogger=_volumeIncrementSequenceLogger;
@property(readonly, nonatomic) SBCombinationHardwareButton *combinationHardwareButton; // @synthesize combinationHardwareButton=_combinationHardwareButton;
@property(retain, nonatomic) NSTimer *daylightSavingsTimer; // @synthesize daylightSavingsTimer=_daylightSavingsTimer;
@property(retain, nonatomic) SBPowerDownController *powerDownController; // @synthesize powerDownController=_powerDownController;
@property(nonatomic, getter=isBatterySaverModeActive) _Bool batterySaverModeActive; // @synthesize batterySaverModeActive=_batterySaverModeActive;
@property(nonatomic) int nowPlayingProcessPID; // @synthesize nowPlayingProcessPID=_nowPlayingProcessPID;
@property(readonly, nonatomic) SBAccountStoreManager *accountStoreController; // @synthesize accountStoreController=_accountStoreController;
@property(readonly, nonatomic) SBNCNotificationDispatcher *notificationDispatcher; // @synthesize notificationDispatcher=_notificationDispatcher;
@property(readonly, nonatomic) SBFUserAuthenticationController *authenticationController; // @synthesize authenticationController=_authenticationController;
@property(readonly, nonatomic) id <SBFLockOutStatusProvider> lockOutController; // @synthesize lockOutController=_lockOutController;
@property(readonly, nonatomic) SBLockHardwareButton *lockHardwareButton; // @synthesize lockHardwareButton=_lockHardwareButton;
@property(readonly, nonatomic) SBHomeHardwareButton *homeHardwareButton; // @synthesize homeHardwareButton=_homeHardwareButton;
@property(nonatomic, getter=isTypingActive) _Bool typingActive; // @synthesize typingActive=_typingActive;
@property(readonly, nonatomic) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator; // @synthesize modalAlertPresentationCoordinator=_modalAlertPresentationCoordinator;
@property(readonly, nonatomic) SBRestartManager *restartManager; // @synthesize restartManager=_restartManager;
@property(readonly, nonatomic) SBUserSessionController *userSessionController; // @synthesize userSessionController=_userSessionController;
@property(readonly, nonatomic) SBScreenshotManager *screenshotManager; // @synthesize screenshotManager=_screenshotManager;
@property(retain, nonatomic) NSMutableArray *nowLocatingApps; // @synthesize nowLocatingApps=_nowLocatingApps;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *bulletinBoardQueue; // @synthesize bulletinBoardQueue=_bulletinBoardQueue;
@property(readonly, nonatomic) BBDataProviderConnection *bulletinBoardConnection; // @synthesize bulletinBoardConnection=_bulletinBoardConnection;
- (void).cxx_destruct;
- (void)_batterySaverModeChanged:(int)arg1;
- (_Bool)hasDisableActiveInterfaceOrientationChangeAssertions;
- (void)removeDisableActiveInterfaceOrientationChangeAssertion:(id)arg1;
- (void)addDisableActiveInterfaceOrientationChangeAssertion:(id)arg1;
- (void)_sendBanditsVolumeDecreased;
- (void)_sendBanditsVolumeIncreased;
- (void)removeVolumePressBandit:(id)arg1;
- (void)addVolumePressBandit:(id)arg1;
- (_Bool)_hasVolumeBandits;
- (void)noteKeybagRefetchTransactionIsActive:(_Bool)arg1;
- (_Bool)isKeybagRefetchTransactionActive;
- (_Bool)underMemoryPressure;
- (void)_setStatusBarShowsProgress:(_Bool)arg1;
- (void)_accessibilityDeactivationAnimationWillBegin;
- (double)_accessibilityDeactivationAnimationStartDelay;
- (void)_accessibilityActivationAnimationWillBegin;
- (double)_accessibilityActivationAnimationStartDelay;
- (_Bool)_accessibilityObjectWithinProximity;
- (_Bool)_accessibilityIsSystemGestureActive;
- (void)_accessibilitySetSystemGesturesDisabledByAccessibility:(_Bool)arg1;
- (_Bool)_accessibilitySystemGesturesDisabledByAccessibility;
- (_Bool)_accessibilityShouldAllowIconLaunch;
- (_Bool)_accessibilityShouldAllowAppLaunch;
- (id)_accessibilityRunningApplications;
- (id)_accessibilityTopDisplay;
- (id)_accessibilityFrontMostApplication;
- (id)formattedPercentStringForNumber:(id)arg1;
- (id)formattedDecimalStringForNumber:(id)arg1;
- (void)_deactivateReachability;
- (void)_setReachabilitySupported:(_Bool)arg1;
- (void)setSuspensionAnimationDelay:(double)arg1;
- (void)setNowPlayingInfo:(id)arg1 forProcessWithPID:(int)arg2;
- (_Bool)isNowPlayingAppPlaying;
@property(readonly, nonatomic) SBApplication *leastRecentlyForegroundLocatingApp;
- (void)nowLocatingAppDidEnterForeground:(id)arg1;
- (void)removeNowLocatingApp:(id)arg1;
- (void)addNowLocatingApp:(id)arg1;
- (id)nowRecordingApp;
- (_Bool)isMusicPlayerInNowPlayingView;
- (void)_nowPlayingAppDidChangeNotification:(id)arg1;
- (_Bool)hasFinishedLaunching;
- (_Bool)launchApplicationWithIdentifier:(id)arg1 suspended:(_Bool)arg2;
- (void)launchMusicPlayerSuspended;
- (long long)alertInterfaceOrientation;
- (_Bool)isLocked;
- (_Bool)canShowAlerts;
- (void)didDismissActionSheet;
- (void)didDismissMiniAlert;
- (void)willDismissMiniAlert;
- (void)willDisplayMiniAlert;
- (void)frontDisplayDidChange:(id)arg1;
- (void)noteSceneLayoutDidUpdateOnDisplay:(id)arg1;
- (void)noteSubstantialTransitionOccured;
- (void)_setAmbiguousControlCenterActivationMargin:(double)arg1;
- (void)updateOrientationDetectionSettings;
- (void)setExpectsFaceContact:(_Bool)arg1;
- (void)setExpectsFaceContact:(_Bool)arg1 inLandscape:(_Bool)arg2;
- (_Bool)expectsFaceContactInLandscape;
- (_Bool)expectsFaceContact;
- (void)updateProximitySettings;
- (void)setProximityEventsEnabled:(_Bool)arg1;
- (_Bool)proximityEventsEnabled;
- (void)setSystemVolumeHUDEnabled:(_Bool)arg1 forAudioCategory:(id)arg2;
- (double)windowRotationDuration;
- (_Bool)homeScreenSupportsRotation;
- (_Bool)homeScreenRotationStyleWantsUIKitRotation;
- (long long)homeScreenRotationStyle;
- (void)_removeDefaultInterfaceOrientatationOverride;
- (void)_overrideDefaultInterfaceOrientationWithOrientation:(long long)arg1;
- (long long)interfaceOrientationForCurrentDeviceOrientation;
- (long long)_currentNonFlatDeviceOrientation;
- (_Bool)supportsPortraitUpsideDownOrientation;
- (void)_postActiveInterfaceOrientationChangedNotificationAnimated:(_Bool)arg1;
- (void)_updateNativeOrientationWithOrientation:(long long)arg1 updateMirroredDisplays:(_Bool)arg2 animated:(_Bool)arg3 logMessage:(id)arg4;
- (void)updateNativeOrientationWithOrientation:(long long)arg1 logMessage:(id)arg2;
- (void)updateNativeOrientationAndMirroredDisplays:(_Bool)arg1 logMessage:(id)arg2;
- (void)updateNativeOrientationAnimated:(_Bool)arg1 logMessage:(id)arg2;
- (void)updateNativeOrientationWithLogMessage:(id)arg1;
- (void)setWantsOrientationEvents:(_Bool)arg1 logMessage:(id)arg2;
@property(readonly, nonatomic) _Bool wantsOrientationEvents;
- (_Bool)_statusBarOrientationFollowsWindow:(id)arg1;
- (id)orientationAggregator;
- (long long)_frontMostAppOrientation;
- (void)_removeTransientActiveInterfaceOrientationOverrideForReason:(id)arg1;
- (void)popTransientActiveInterfaceOrientationForReason:(id)arg1;
- (void)pushTransientActiveInterfaceOrientation:(long long)arg1 forReason:(id)arg2;
- (long long)activeInterfaceOrientationWithoutConsideringAlerts;
- (long long)activeInterfaceOrientation;
- (void)removeActiveOrientationObserver:(id)arg1;
- (void)addActiveOrientationObserver:(id)arg1;
- (void)noteAlertView:(id)arg1 willChangeInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(_Bool)arg3 force:(_Bool)arg4 logMessage:(id)arg5;
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(_Bool)arg3 logMessage:(id)arg4;
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 logMessage:(id)arg3;
- (void)noteInterfaceOrientationChanged:(long long)arg1 force:(_Bool)arg2 logMessage:(id)arg3;
- (void)noteInterfaceOrientationChanged:(long long)arg1 logMessage:(id)arg2;
- (void)_setDeviceOrientation:(long long)arg1 animated:(_Bool)arg2 logMessage:(id)arg3;
- (void)_setStatusBarOrientation:(long long)arg1 animated:(_Bool)arg2 logMessage:(id)arg3;
- (void)_setStatusBarOrientation:(long long)arg1 logMessage:(id)arg2;
- (void)updateMirroredDisplayOrientationWithLogMessage:(id)arg1;
- (void)_handleDeviceOrientationChangedEvent:(struct __GSEvent *)arg1;
- (void)didReceiveMemoryWarning;
- (void)handleStatusBarTapWithEvent:(id)arg1;
- (void)_application:(id)arg1 statusBarTouchesEnded:(id)arg2;
- (void)_caseLatchWantsToAttemptLock;
- (void)noteCaseHardwarePresent;
- (void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)arg1;
- (_Bool)allowCaseLatchLockAndUnlock;
- (_Bool)caseIsEnabledAndLatched;
- (_Bool)smartCoverIsClosed;
- (void)_enqueueWorkspaceEvent:(CDUnknownBlockType)arg1 withName:(id)arg2 ifSatisfiesCondition:(CDUnknownBlockType)arg3 cancelingEventsWithNames:(id)arg4;
- (void)_smartCoverDidClose:(struct __IOHIDEvent *)arg1;
- (void)_smartCoverDidOpen:(struct __IOHIDEvent *)arg1;
- (void)_proximityChanged:(id)arg1;
- (void)resetIdleTimerAndUndim;
- (void)lockAfterCallDidEndForLockPress:(_Bool)arg1;
- (void)noteBacklightFadeFinished;
- (void)noteBacklightLevelChanged;
- (void)noteBacklightControllerUndimming:(id)arg1;
- (void)_adjustSignificantTimersAfterSleep;
- (void)_adjustDaylightSavingsTimerAfterSleep;
- (void)_daylightSavingsTimeChanged;
- (void)setUpDaylightSavingsTimer;
- (void)_adjustMidnightTimerAfterSleep;
- (void)_postSpringBoardSignificantTimeChangedNotificationWithLogMessage:(id)arg1;
- (void)_midnightPassed;
- (void)setupMidnightTimer;
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;
- (void)_reportAggdLoggingForVolumeChangedEvent:(struct __IOHIDEvent *)arg1;
- (void)_reportVolumeEventToLogger:(struct __IOHIDEvent *)arg1;
- (_Bool)_volumeChanged:(struct __IOHIDEvent *)arg1;
- (id)appsRegisteredForLockButtonEvents;
- (void)setAppRegisteredForLockButtonEvents:(id)arg1 isActive:(_Bool)arg2;
- (id)appsRegisteredForVolumeEvents;
- (void)setAppRegisteredForVolumeEvents:(id)arg1 isActive:(_Bool)arg2;
- (void)setWantsVolumeButtonEvents:(_Bool)arg1;
- (_Bool)menuButtonInterceptAppEnabledForever;
- (id)menuButtonInterceptApp;
- (void)setMenuButtonInterceptApp:(id)arg1 forever:(_Bool)arg2;
- (void)_relockUIIfNecessaryAfterTelephonyURLFailed;
- (void)_openURLCore:(id)arg1 display:(id)arg2 animating:(_Bool)arg3 activationSettings:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (void)_applicationOpenURL:(id)arg1 withApplication:(id)arg2 publicURLsOnly:(_Bool)arg3 animating:(_Bool)arg4 activationSettings:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (void)applicationOpenURL:(id)arg1 withApplication:(id)arg2 publicURLsOnly:(_Bool)arg3 animating:(_Bool)arg4 needsPermission:(_Bool)arg5 activationSettings:(id)arg6 withResult:(CDUnknownBlockType)arg7;
- (void)handleDocumentsAndDataURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applicationOpenURL:(id)arg1;
- (_Bool)_requestPermissionToOpenURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showAlertForUnhandledURL:(id)arg1 error:(int)arg2;
- (_Bool)shouldShowAlertForUnhandledURL:(id)arg1 error:(int)arg2;
- (long long)currentHomescreenStatusBarStyleWithoutConsideringAlerts;
- (long long)currentHomescreenStatusBarStyle;
- (_Bool)isSpringBoardStatusBarHidden;
- (long long)_statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (_Bool)handleDoubleHeightStatusBarTap:(long long)arg1;
- (void)_updateRingerState:(int)arg1 withVisuals:(_Bool)arg2 updatePreferenceRegister:(_Bool)arg3;
- (void)_ringerChanged:(struct __IOHIDEvent *)arg1;
- (void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)localeChanged;
- (void)_localeChanged;
- (_Bool)isBundleIdentifierRestrictionDisabled:(id)arg1;
- (void)_headsetButtonUp:(struct __IOHIDEvent *)arg1;
- (void)_headsetButtonDown:(struct __IOHIDEvent *)arg1;
- (void)_setDeferredHeadsetButtonDownEvent:(struct __IOHIDEvent *)arg1;
- (void)_imagesMounted;
- (void)_iapExtendedModeReset;
- (void)_iapServerConnectionDiedNotification:(id)arg1;
- (void)_performDelayedHeadsetClickTimeout;
- (void)powerDownCanceled:(id)arg1;
- (void)powerDownRequested:(id)arg1;
- (void)dismissPowerDownAlertWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showPowerDownAlert;
- (_Bool)isPowerDownAlertFrontmost;
- (_Bool)shouldNeverLock;
- (void)_startSeekWithDirection:(id)arg1;
- (void)_keyboardAvailabilityChanged;
- (_Bool)_isDim;
- (id)_keyWindowForScreen:(id)arg1;
- (id)_windowForSystemAppButtonEventsForScreen:(id)arg1;
- (void)_handleScreenShotShortcut:(id)arg1;
- (void)_handleGotoHomeScreenShortcut:(id)arg1;
- (void)_handleShiftCommandTab:(id)arg1;
- (void)_handleCommandTab:(id)arg1;
- (id)keyCommands;
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_logReliabilityInfoForEvent:(struct __IOHIDEvent *)arg1;
- (void)_handleKeyUIEvent:(id)arg1;
- (_Bool)__handleHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)setAppDisabledNowPlayingHUD:(_Bool)arg1 bundleIdentifier:(id)arg2;
- (_Bool)canShowLockScreenCameraGrabber;
- (_Bool)lockScreenCameraSupported;
- (_Bool)iapIsInExtendedMode;
- (void)batteryStatusDidChange:(id)arg1;
- (void)significantTimeChange;
- (void)_significantTimeChangeNotificationReceived;
- (void)_significantTimeDidChange:(_Bool)arg1;
- (void)runFieldTestScript;
- (void)_lockdownActivationChanged:(id)arg1;
- (void)userDefaultsDidChange:(id)arg1;
- (void)wipeDeviceNowWithReason:(id)arg1;
- (void)_rotateView:(id)arg1 toOrientation:(long long)arg2;
- (void)requestDeviceUnlock;
- (void)languageChanged;
- (id)_settingLanguageStringForNewLanguage;
- (_Bool)launchedForUserTransition;
- (void)_toggleSearch;
- (void)_recordingStateChanged:(id)arg1;
- (void)_removeRecordingStatusBarStyleOverrideAssertion;
- (void)_mediaServerConnectionDied:(id)arg1;
- (void)_registerForAVSystemControllerNotifications;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_updateVolumeAndPowerButtonPrioritiesForNotification:(id)arg1;
- (void)_initializeVolumeAndPowerButtonPriorities;
- (void)_mainQueue_applyVolumeAndPowerButtonPriorities:(unsigned long long)arg1;
- (void)_computeVolumeButtonsHavePrecedenceWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)_shouldHandleVolumeAndPowerButtonPriorities;
- (void)_initializeAndStartObservingDefaultsIfNecessary;
- (void)_updateHomeScreenPresenceNotification:(id)arg1;
- (_Bool)isShowingHomescreen;
- (void)systemControllerRouteChanged:(id)arg1;
- (void)_initializeDeferredItems;
- (void)applicationDidFinishLaunching:(id)arg1;
- (_Bool)isDeterminingBootTransition;
- (void)_performDeferredLaunchWork;
- (void)_startBulletinBoardServer;
- (id)_defaultExpirationComponents;
- (void)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (_Bool)_shouldSwallowHIDEvent:(struct __IOHIDEvent *)arg1;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (_Bool)application:(id)arg1 canOpenURL:(id)arg2;
- (_Bool)applicationIsAliveForSystemWatchdog:(id)arg1;
- (void)modalAlertPresentationCoordinator:(id)arg1 didChangeShowingSystemModalAlert:(_Bool)arg2;
- (void)restartManagerExitImminent:(id)arg1;
- (void)restartManager:(id)arg1 willRestartWithTransitionRequest:(id)arg2;
- (void)restartManagerWillReboot:(id)arg1;
- (void)restartManagerWillShutdown:(id)arg1;
- (void)_handleShutDownAndReboot;
- (void)handleSignal:(int)arg1;
@property(readonly, copy) NSString *debugDescription;
- (id)init;
@property(readonly, nonatomic) SBWidgetController *widgetController; // @synthesize widgetController=_widgetController;
- (void)setNextAssistantRecognitionStrings:(id)arg1;
- (id)setNextVoiceRecognitionAudioInputPaths:(id)arg1;
- (void)rotateIfNeeded:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)failedTest:(id)arg1 withResults:(id)arg2;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2 waitForNotification:(id)arg3 withTeardownBlock:(CDUnknownBlockType)arg4;
- (void)startedTest:(id)arg1;
- (void)_publishFakeNotificationsWithCount:(unsigned long long)arg1 requestDestination:(id)arg2 notificationScrollView:(id)arg3 publishBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handleApplicationExit:(id)arg1;
- (_Bool)_shouldPendAlertsForTest:(id)arg1;
- (void)_basicRotationTestForCurrentConfigurationWithTeardown:(CDUnknownBlockType)arg1;
- (void)_rotateFromPortrait:(CDUnknownBlockType)arg1 toLandscape:(CDUnknownBlockType)arg2 andFromLandscape:(CDUnknownBlockType)arg3 andBackToPortrait:(CDUnknownBlockType)arg4;
- (void)_presentTodayViewSpotlightWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupKeyboardAnimationSubTestsForTestName:(id)arg1;
- (id)_applicationToUseForOpenAndCloseTesting;
- (id)_todayControllerForTestingIfExists;
- (id)_dashBoardControllerForTesting;
- (void)_activateSafariWithCompletion:(CDUnknownBlockType)arg1;
- (void)_returnToHomeScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)_turnScreenOnOnDashBoardWithCompletion:(CDUnknownBlockType)arg1;
- (void)_simulateHomeButtonPressWithCompletion:(CDUnknownBlockType)arg1;
- (void)_simulateHomeButtonPress;
- (void)_simulateLockButtonPress;
- (void)_performAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)_runAppClose;
- (void)_runAppOpen;
- (void)_runDisplayAlertTest:(id)arg1;
- (void)_runDashBoardPresentDismissPasscode;
- (void)_runDashBoardDismissTestFromPageIndex:(unsigned long long)arg1 showPasscodeView:(_Bool)arg2;
- (void)_runDashBoardDismissFromPasscodeViewAfterAuthenticationTest;
- (void)_runDashBoardDismissFromTodayViewWhileAuthenticatedTest;
- (void)_runDashBoardDismissWhileAuthenticatedTest;
- (void)_runDashBoardEnterSpotlightLaunchNullAppDismissUnlockToHomeTest;
- (void)_launchFullscreenApplication:(id)arg1 withLaunchResult:(CDUnknownBlockType)arg2 transactionCompletion:(CDUnknownBlockType)arg3;
- (void)_returnToHomescreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)_resetForceRotate;
- (void)_rotationCompletion:(id)arg1;
- (void)_forceRotateToOrientation:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_runDashBoardRotationTestOnPageAtIndex:(unsigned long long)arg1 showSpotlight:(_Bool)arg2;
- (void)_runDashBoardRotationTestOnPageAtIndex:(unsigned long long)arg1;
- (void)_runDashBoardRotationTestOnTodayViewPageInSpotlight;
- (void)_runDashBoardRotationTestOnTodayViewPage;
- (void)_runDashBoardRotationTestOnMainPage;
- (void)_runDashBoardRotationTestOnCameraPage;
- (void)_runDashBoardScrollTestFromPageIndex:(unsigned long long)arg1 toPageWithIndex:(unsigned long long)arg2 subTestName:(id)arg3 backSubTestName:(id)arg4 withBlur:(_Bool)arg5;
- (void)_runDashBoardScrollFromLeftToRightPageTestWithBlur:(_Bool)arg1;
- (void)_runDashBoardScrollToRightPageTestWithBlur:(_Bool)arg1;
- (void)_runDashBoardScrollToLeftPageTestWithBlur:(_Bool)arg1;
- (void)assistant:(id)arg1 viewDidAppear:(long long)arg2;
- (void)assistant:(id)arg1 viewWillAppear:(long long)arg2;
- (void)_runSiriBringUpTest:(id)arg1;
- (void)_runPresentBannerTest;
- (void)_runPresentLongLookTest;
- (void)_runControlCenterDismissOrbActionsTest;
- (void)_runControlCenterShowOrbActionsTest;
- (void)_runControlCenterShowAirDropSheetTest;
- (void)_runControlCenterScrollAmongstPagesTest;
- (void)_bringUpControlCenter;
- (void)_runControlCenterBringupOnLockScreenTest;
- (void)_runControlCenterBringupOverSafariTest;
- (void)_runControlCenterBringupTest;
- (void)_runControlCenterDismissTest;
- (void)_runLockScreenScrollNotificationsTestWithOptions:(id)arg1;
- (void)_publishFakeLockScreenNotificationsWithCount:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runNotificationCenterWidgetLaunchTestNamed:(id)arg1 options:(id)arg2;
- (void)_runTodayViewEditTest;
- (void)_runDashboardTodayViewScrollWidgetsTestWithOptions:(id)arg1;
- (void)_runTodayViewScrollWidgetsTestWithOptions:(id)arg1;
- (void)_runWidgetsScrollTestWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runScrollTestWithScrollView:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_runNotificationCenterScrollTestWithOptions:(id)arg1;
- (void)_runNotificationCenterDismissTest;
- (void)_runNotificationCenterBringupTest;
- (void)_runAppSwitcherBringupTest;
- (void)_runAppSwitcherDismissTest;
- (void)_continueRunningScrollAppSwitcherTest:(id)arg1 runColdTest:(_Bool)arg2;
- (void)_startScrollAppSwitcherTest:(id)arg1 runColdTest:(_Bool)arg2;
- (void)_runScrollAppSwitcherLandscapeTest:(id)arg1;
- (void)_runScrollAppSwitcherTest:(id)arg1;
- (void)_runSearchTest:(id)arg1;
- (void)_runScrollSearchResultsTest:(id)arg1;
- (void)_runSearch:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)_runSpotlightTodayViewRotation;
- (void)_runSpotlightPulldownRotation;
- (void)exitSpotlight:(id)arg1;
- (void)_bringUPSpotlight:(CDUnknownBlockType)arg1;
- (void)_runSpotlightScrollTest:(id)arg1;
- (void)_runSpotlightLeftOfHomeRotation;
- (void)_doCommonSpotlightTestForNotificationCenter:(id)arg1 forSearchFieldFocusWithTeardown:(CDUnknownBlockType)arg2;
- (void)_presentNotificationCenterForSpotlightTestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_runNotificationCenterPartialPullDownToSpotlightOverSafari;
- (void)_runNotificationCenterFocusSearchFieldToSpotlightOverSafari;
- (void)_runNotificationCenterPartialPullDownToSpotlightOverLockScreen;
- (void)_runNotificationCenterFocusSearchFieldToSpotlightOverLockScreen;
- (void)_runNotificationCenterPartialPullDownToSpotlightOverHomeScreen;
- (void)_activatePartialPulldownSpotlightForTest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runNotificationCenterFocusSearchFieldToSpotlightOverHomeScreen;
- (void)_publishFakeNCNotificationsWithCount:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runLockScreenSwipeLeftIsShowingSpotlight:(_Bool)arg1;
- (void)_runLockScreenSwipeLeftToSpotlight;
- (void)_runLockScreenSwipeLeftToTodayView;
- (void)_runLockScreenTodayViewPullDownToSpotlight;
- (void)_runLockScreenTodayViewFocusSearchFieldToSpotlight;
- (void)_runTodayViewPullDownToSpotlight;
- (void)_runTodayViewFocusSearchFieldToSpotlight;
- (void)_runHomeScreenIconPullToSpotlightDismiss;
- (void)_runHomeScreenIconPullToSpotlight;
- (void)_runHomeScreenSwipeLeftToSpotlight;
- (void)_runHomeScreenSwipeRightFromTodayView;
- (void)_runHomeScreenSwipeLeftToTodayView;
- (void)_runScrollIconListTest;
- (void)runRotationTest:(int)arg1;
- (void)endLaunchTest;
- (void)startResumeTestNamed:(id)arg1 options:(id)arg2;
- (void)startLaunchTestNamed:(id)arg1 options:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)startLaunchTestNamed:(id)arg1 options:(id)arg2;
- (void)_cleanUpLaunchTestState;
- (void)_retryLaunchTestWithOptions:(id)arg1;
- (void)_workspaceTransactionCompleted:(id)arg1;
- (void)_unscatterWillBegin:(id)arg1;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (void)installNotificationObserverForNotificationName:(id)arg1 forOneNotification:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

