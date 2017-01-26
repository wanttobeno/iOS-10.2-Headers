//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBLiquidDetectionManager : NSObject
{
    int _wetToken;
    _Bool _finishedInit;
    _Bool _detectionEnabled;
    _Bool _accessoryPortWet;
}

+ (_Bool)showStatusBarIcon;
+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isAccessoryPortWet) _Bool accessoryPortWet; // @synthesize accessoryPortWet=_accessoryPortWet;
@property(readonly, nonatomic, getter=isDetectionEnabled) _Bool detectionEnabled; // @synthesize detectionEnabled=_detectionEnabled;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (void)_stateDidUpdate;
- (void)_updateStatusBar;
- (_Bool)_showStatusBarIcon;
- (void)_updateWetState;
- (void)_finishInit;
@property(readonly, nonatomic, getter=isLiquidDetected) _Bool liquidDetected; // @dynamic liquidDetected;
- (void)dealloc;
- (id)init;

@end

