//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBAlertView.h"

@class CALayer, NSString, UIButton, UILabel, UIView, UIVisualEffectView;
@protocol SBSMSClass0AlertDisplayDelegate;

@interface SBSMSClass0AlertView : SBAlertView
{
    UIView *_contentContainerView;
    UIVisualEffectView *_alertContainerView;
    UIVisualEffectView *_blurEffectContainerView;
    UIVisualEffectView *_darkBlurView;
    UILabel *_messageTextLabel;
    UILabel *_messageTitleLabel;
    UIButton *_dismissButton;
    UIButton *_learnMoreButton;
    CALayer *_lineLayer;
    NSString *_messageString;
    id <SBSMSClass0AlertDisplayDelegate> _delegate;
}

@property(nonatomic) id <SBSMSClass0AlertDisplayDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
- (void).cxx_destruct;
- (void)alertDisplayWillBecomeVisible;
- (void)dismissButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)learnMoreButtonClicked:(id)arg1;
- (id)blurEffectContainerView;
- (id)alertContainerView;
- (id)darkBlurView;
- (id)learnMoreButton;
- (id)dismissButton;
- (id)messageTextLabel;
- (id)messageTitleLabel;
- (id)contentContainerView;

@end

