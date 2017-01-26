//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBPressCollectorDelegate-Protocol.h"

@class NSString, SBPressCollector;

@interface SBPressSequenceAWDLogger : NSObject <SBPressCollectorDelegate>
{
    _Bool _didTriggerSOS;
    NSString *_pressName;
    SBPressCollector *_pressCollector;
}

@property(readonly, nonatomic) SBPressCollector *pressCollector; // @synthesize pressCollector=_pressCollector;
@property(readonly, nonatomic) NSString *pressName; // @synthesize pressName=_pressName;
- (void).cxx_destruct;
- (void)_notePowerDownImminent;
- (void)_noteSequenceEnded:(id)arg1;
- (void)pressCollector:(id)arg1 didCollectSequence:(id)arg2;
- (void)noteDidBeginSOS;
- (id)initWithPressName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

