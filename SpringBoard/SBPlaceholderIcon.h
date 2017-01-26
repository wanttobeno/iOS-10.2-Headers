//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBIcon.h"

@interface SBPlaceholderIcon : SBIcon
{
    id _nodeIdentifier;
    SBIcon *_icon;
}

+ (id)emptyPlaceholder;
+ (void)setGrabbedIcon:(id)arg1;
+ (id)grabbedIconPlaceholder;
+ (id)placeholderForIcon:(id)arg1;
+ (id)placeholderNodeIdentifierForIcon:(id)arg1;
- (void).cxx_destruct;
- (id)referencedIcon;
- (_Bool)isEmptyPlaceholder;
- (_Bool)isGrabbedIconPlaceholder;
- (_Bool)isPlaceholder;
- (_Bool)shouldCacheImageForFormat:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (id)automationID;
- (id)nodeIdentifier;
- (id)_initWithNodeIdentifier:(id)arg1 icon:(id)arg2;

@end

