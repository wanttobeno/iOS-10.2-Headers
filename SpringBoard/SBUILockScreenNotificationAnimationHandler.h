//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, SBLockScreenViewController;
@protocol OS_dispatch_group;

@interface SBUILockScreenNotificationAnimationHandler : NSObject
{
    SBLockScreenViewController *_lockScreenViewController;
    CADisplayLink *_displayLink;
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

- (void).cxx_destruct;
- (void)_displayLinkDidFire:(id)arg1;
- (void)performAnimationWithAdditionalAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithLockScreenViewController:(id)arg1;

@end

