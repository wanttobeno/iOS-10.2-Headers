//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBWorkspaceEntity.h"

@class SBAlert;

@interface SBWorkspaceAlert : SBWorkspaceEntity
{
    SBAlert *_alert;
}

+ (id)entityForAlert:(id)arg1;
@property(retain, nonatomic) SBAlert *alert; // @synthesize alert=_alert;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAlertEntity;
- (CDUnknownBlockType)_generator;
- (_Bool)representsAlertOfClass:(Class)arg1;
@property(readonly, nonatomic) Class alertClass;
- (id)representedDisplay;
- (id)initWithAlert:(id)arg1;

@end

