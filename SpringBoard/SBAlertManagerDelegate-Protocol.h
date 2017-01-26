//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSScene, SBAlert, SBAlertManager, SBAlertWindow, UIScreen;

@protocol SBAlertManagerDelegate <NSObject>
- (double)sceneLevelForAlerts;
- (struct CGRect)sceneFrameForAlerts:(UIScreen *)arg1;

@optional
- (unsigned long long)alertManager:(SBAlertManager *)arg1 defaultSupportedInterfaceOrientationsForAlert:(SBAlert *)arg2;
- (long long)alertManager:(SBAlertManager *)arg1 defaultInterfaceOrientationForPresentationOfAlert:(SBAlert *)arg2;
- (_Bool)alertManager:(SBAlertManager *)arg1 defaultShouldAutorotateForAlert:(SBAlert *)arg2;
- (SBAlertWindow *)alertManager:(SBAlertManager *)arg1 newAlertWindowForScene:(FBSScene *)arg2;
- (_Bool)alertManager:(SBAlertManager *)arg1 shouldDeactivateDismissedAlert:(SBAlert *)arg2;
@end

