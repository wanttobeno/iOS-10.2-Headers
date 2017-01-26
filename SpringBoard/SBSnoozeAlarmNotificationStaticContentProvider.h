//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBNotificationStaticContentProvider.h"

@class NSTimer;

@interface SBSnoozeAlarmNotificationStaticContentProvider : SBNotificationStaticContentProvider
{
    double _fireTime;
    NSTimer *_tickTimer;
}

@property(retain, nonatomic) NSTimer *tickTimer; // @synthesize tickTimer=_tickTimer;
@property(nonatomic) double fireTime; // @synthesize fireTime=_fireTime;
- (void).cxx_destruct;
- (void)_tickTimerFired:(id)arg1;
- (id)_formatDuration:(double)arg1;
- (id)_appName;
- (id)secondaryText;
- (id)title;
- (void)invalidateTimer;
- (void)dealloc;
- (id)init;
- (id)initWithNotificationRequest:(id)arg1 viewController:(id)arg2;

@end

