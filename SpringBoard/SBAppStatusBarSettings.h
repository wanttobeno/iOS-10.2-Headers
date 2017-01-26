//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSSettingDescriptionProvider-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class BSMutableSettings, BSSettings, NSString, _UILegibilitySettings;

@interface SBAppStatusBarSettings : NSObject <BSSettingDescriptionProvider, NSCopying, NSMutableCopying>
{
    BSMutableSettings *_settings;
}

@property(readonly, nonatomic, getter=_BSSettings) BSSettings *BSSettings; // @synthesize BSSettings=_settings;
- (void).cxx_destruct;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // @dynamic legibilitySettings;
@property(readonly, nonatomic) long long style; // @dynamic style;
@property(readonly, nonatomic) double alpha; // @dynamic alpha;
- (void)dealloc;
- (id)_initWithBSSettings:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

