//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBAppViewController;

@protocol SBAppViewControllerDelegate <NSObject>

@optional
- (void)appViewControllerDidDeactivateApplication:(SBAppViewController *)arg1;
- (void)appViewControllerWillActivateApplication:(SBAppViewController *)arg1;
- (void)appViewController:(SBAppViewController *)arg1 didTransitionFromMode:(long long)arg2 toMode:(long long)arg3;
- (_Bool)appViewController:(SBAppViewController *)arg1 shouldTransitionToMode:(long long)arg2;
@end

