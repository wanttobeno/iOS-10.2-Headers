//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BBBulletin;
@protocol SBBulletinAlertHandlerRegistry;

@protocol SBBulletinAlertHandler <NSObject>
- (void)handleEvent:(int)arg1 withBulletin:(BBBulletin *)arg2 forRegistry:(id <SBBulletinAlertHandlerRegistry>)arg3;
- (_Bool)bindBulletin:(BBBulletin *)arg1 forRegistry:(id <SBBulletinAlertHandlerRegistry>)arg2;
@end

