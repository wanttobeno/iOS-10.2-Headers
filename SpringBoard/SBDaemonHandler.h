//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBDaemonHandler : NSObject
{
}

+ (void)noteDaemonCanceled:(id)arg1;
+ (id)stateDescription;
+ (void)removeRequestForKey:(id)arg1 forDaemonPid:(int)arg2;
+ (_Bool)addRequest:(id)arg1 forKey:(id)arg2 forDaemonPid:(int)arg3;
+ (void)initialize;

@end

