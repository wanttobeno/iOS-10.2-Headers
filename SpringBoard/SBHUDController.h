//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBHUDView, UIView, UIWindow;

@interface SBHUDController : NSObject
{
    UIWindow *_hudWindow;
    UIView *_hudContentView;
    SBHUDView *_hudView;
    long long _orientation;
    _Bool _hudVisibleOrFading;
}

+ (id)sharedHUDController;
- (void).cxx_destruct;
- (void)hideHUDView;
- (id)visibleOrFadingHUDView;
- (id)visibleHUDView;
- (void)presentHUDView:(id)arg1 autoDismissWithDelay:(double)arg2;
- (void)presentHUDView:(id)arg1;
- (void)_orderWindowOut:(id)arg1;
- (void)_tearDown;
- (void)_createUI;
- (void)reorientHUDIfNeeded:(_Bool)arg1;
- (void)_recenterHUDView;
- (void)dealloc;

@end

