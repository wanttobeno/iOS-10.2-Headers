//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBAlertView.h"

@class SBAppStatusBarSettingsAssertion, SBUIPasscodeViewWithLockScreenStyle, UIView;
@protocol SBPasscodeEntryAlertViewDelegate, SBUIPasscodeLockView;

@interface SBPasscodeEntryAlertView : SBAlertView
{
    SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
    _Bool _dismissing;
    SBAppStatusBarSettingsAssertion *_showStatusBarAssertion;
    id <SBPasscodeEntryAlertViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SBPasscodeEntryAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dismissAnimationCompleted;
- (id)passcodeView;
- (CDUnknownBlockType)_passcodeViewGenerator;
- (void)layoutForInterfaceOrientation:(long long)arg1;
- (_Bool)isReadyToBeRemovedFromView;
- (void)alertDisplayBecameVisible;
- (void)alertDisplayWillBecomeVisible;
- (void)setPasscodeViewsToVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) UIView<SBUIPasscodeLockView> *passcodeLockView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

