//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBPasscodeEntryAlertViewController.h"

#import "SBPasscodeEntryAlertViewDelegate-Protocol.h"
#import "SBUIPasscodeLockViewDelegate-Protocol.h"

@class NSString, PSSoftwareUpdateTermsManager, SUAutoInstallOperation, SUDownload, UIViewController;
@protocol SBPasscodeEntryAlertViewControllerDelegate;

@interface SBSoftwareUpdateAuthenticationAlertViewController : SBPasscodeEntryAlertViewController <SBPasscodeEntryAlertViewDelegate, SBUIPasscodeLockViewDelegate>
{
    CDUnknownBlockType _completionBlock;
    NSString *_passcode;
    SUAutoInstallOperation *_installOperation;
    SUDownload *_download;
    unsigned long long _installType;
    UIViewController *_termsAndConditionsController;
    PSSoftwareUpdateTermsManager *_preferencesSUManager;
    _Bool _showingTermsAndConditions;
    id <SBPasscodeEntryAlertViewControllerDelegate> _delegate;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completionBlock;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)_termsDisagree;
- (void)_termsAgree;
- (void)_sendCompletionResponse:(_Bool)arg1;
- (void)_dismissSelf:(_Bool)arg1;
- (void)_sendDeactivationResponseFailureIfNecessary;
- (void)_dismissTermsAndConditionsIfNecessaryAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_presentTermsAndConditionsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shouldShowPasscodeView;
- (_Bool)passcodeAlertViewShouldShowAutomaticallyWhenVisible:(id)arg1;
- (_Bool)suppressesSiri;
- (_Bool)suppressesNotificationCenter;
- (_Bool)suppressesControlCenter;
- (_Bool)suppressesBanners;
- (void)deactivate;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)_authenticationSuccess:(id)arg1 fromMesa:(_Bool)arg2;
- (void)_authenticationCancelled;
- (void)_configurePasscodeView:(id)arg1;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithDownload:(id)arg1 withInstallType:(unsigned long long)arg2 withInstallOperation:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

