//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinBoard/BBBulletin.h>

#import "SBUIQuietModePlayability-Protocol.h"

@class NSString;

@interface BBBulletin (SBUtilities) <SBUIQuietModePlayability>
- (_Bool)overridesPocketMode;
- (_Bool)overridesQuietMode;
- (_Bool)isCritical;
- (id)sb_defaultTitle;
- (id)sb_applicationDisplayName;
- (id)sectionIconImageWithFormat:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

