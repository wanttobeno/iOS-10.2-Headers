//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBBootDefaults, UMUser;

@interface SBStartupTransitionContextPersistence : NSObject
{
    SBBootDefaults *_bootDefaults;
    UMUser *_user;
}

- (void).cxx_destruct;
- (id)readTransitionContext;
- (void)saveContext:(id)arg1;
- (id)initWithBootDefaults:(id)arg1 user:(id)arg2;

@end

