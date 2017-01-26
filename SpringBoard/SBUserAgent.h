//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBUIUserAgent-Protocol.h"

@class NSString, SBBulletinAlertHandlerRegistry;

@interface SBUserAgent : NSObject <SBUIUserAgent>
{
    SBBulletinAlertHandlerRegistry *_modalAlertRegistry;
}

+ (id)sharedUserAgent;
- (void).cxx_destruct;
- (id)topSuspendedEventsOnlyDisplayID;
- (_Bool)isInternalInstall;
- (struct __CFRunLoop *)wifiRunLoopRef;
- (void)disableLockScreenBundleNamed:(id)arg1 deactivationContext:(id)arg2;
- (void)enableLockScreenBundleNamed:(id)arg1 activationContext:(id)arg2;
- (id)localizedDisplayNameForDisplayID:(id)arg1;
- (void)setWallpaperTunnelActive:(_Bool)arg1 forFullscreenAlertController:(id)arg2;
- (_Bool)isNamedRemoteAlertServiceActive:(id)arg1 controllerClassName:(id)arg2;
- (void)activateRemoteAlertService:(id)arg1 options:(id)arg2 activationHandler:(CDUnknownBlockType)arg3 deactivationHandler:(CDUnknownBlockType)arg4;
- (void)activateRemoteAlertService:(id)arg1 options:(id)arg2;
- (void)setMinimumBacklightLevel:(float)arg1 animated:(_Bool)arg2;
- (void)removeActiveInterfaceOrientationObserver:(id)arg1;
- (void)addActiveInterfaceOrientationObserver:(id)arg1;
- (void)activateModalBulletinAlert:(id)arg1;
- (id)modalBulletinAlertHandlerRegistry;
- (int)networkUsageTypeForAppWithDisplayID:(id)arg1;
- (id)folderNameForDisplayID:(id)arg1;
- (void)setIdleText:(id)arg1;
- (void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(id)arg2;
- (void)notifyOnNextUserEvent;
- (_Bool)isIdleTimerDisabledForReason:(id)arg1;
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(id)arg2;
- (_Bool)isScreenOn;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(_Bool)arg1 andDimScreen:(_Bool)arg2;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(_Bool)arg1;
- (void)lockAndDimDevice;
- (void)undimScreen;
- (void)updateCustomSubtitleTextForAwayViewPlugin:(id)arg1;
- (void)adjustLockScreenContentByOffset:(double)arg1 forAwayViewPlugin:(id)arg2 withAnimationDuration:(double)arg3;
- (void)updateLockScreenInterfaceIfNecessary;
- (_Bool)launchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(_Bool)arg3 animate:(_Bool)arg4;
- (_Bool)canLaunchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2;
- (_Bool)isApplicationRestrictedOrHidden:(id)arg1;
- (_Bool)_launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(_Bool)arg4 animate:(_Bool)arg5;
- (_Bool)launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(_Bool)arg4;
- (_Bool)launchApplicationFromSource:(int)arg1 withURL:(id)arg2 options:(id)arg3;
- (_Bool)launchApplicationFromSource:(int)arg1 withDisplayID:(id)arg2 options:(id)arg3;
- (_Bool)canLaunchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3;
- (_Bool)_openApplication:(id)arg1 withURL:(id)arg2 fromSource:(int)arg3 animated:(_Bool)arg4 options:(id)arg5;
- (void)_cleanupFromBannerLaunch;
- (id)_safeValue:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3;
- (_Bool)openURL:(id)arg1 allowUnlock:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)lockScreenIsShowing;
- (_Bool)deviceIsTethered;
- (_Bool)deviceIsBlocked;
- (_Bool)deviceIsPasscodeLockedRemotely;
- (_Bool)deviceIsPasscodeLocked;
- (_Bool)deviceIsLocked;
- (_Bool)canUserLaunchIcon;
- (_Bool)alertIsActive;
- (_Bool)springBoardIsActive;
- (_Bool)applicationInstalledForDisplayID:(id)arg1;
- (_Bool)isApplicationForegroundObscured:(id)arg1;
- (id)foregroundDisplayID;
- (id)foregroundApplicationDisplayID;
- (long long)activeInterfaceOrientation;
- (void)updateInterfaceOrientationIfNecessary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

