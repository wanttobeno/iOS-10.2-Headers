//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBDashBoardViewTransitioning-Protocol.h"

@class NSString, SBDashBoardSlideUpToAppController, SBSlideUpAppGrabberView;

@protocol SBDashBoardSlideUpToAppControllerDelegate <SBDashBoardViewTransitioning>
- (SBSlideUpAppGrabberView *)slideControllerRequestedGrabberView:(SBDashBoardSlideUpToAppController *)arg1;
- (void)slideController:(SBDashBoardSlideUpToAppController *)arg1 prepareForSlideUpAppLaunchAnimated:(_Bool)arg2;
- (void)slideController:(SBDashBoardSlideUpToAppController *)arg1 requestedUnlockWithActionBlock:(void (^)(_Bool))arg2;
- (void)slideController:(SBDashBoardSlideUpToAppController *)arg1 didUpdateWithApplicationWithBundleIdentifier:(NSString *)arg2;
- (_Bool)slideControllerShouldBeginSliding:(SBDashBoardSlideUpToAppController *)arg1;
@end

