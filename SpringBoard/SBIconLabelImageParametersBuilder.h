//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SBIcon, SBIconView, _UILegibilitySettings;
@protocol SBIconViewDelegate;

@interface SBIconLabelImageParametersBuilder : NSObject
{
    _Bool _accessibilityIncreaseContrastEnabled;
    _Bool _wantsFocusHighlight;
    int _iconLocation;
    SBIcon *_icon;
    SBIconView *_iconView;
    id <SBIconViewDelegate> _iconViewDelegate;
    Class _iconViewClass;
    _UILegibilitySettings *_settings;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool wantsFocusHighlight; // @synthesize wantsFocusHighlight=_wantsFocusHighlight;
@property(nonatomic) _Bool accessibilityIncreaseContrastEnabled; // @synthesize accessibilityIncreaseContrastEnabled=_accessibilityIncreaseContrastEnabled;
@property(retain, nonatomic) _UILegibilitySettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) int iconLocation; // @synthesize iconLocation=_iconLocation;
@property(retain, nonatomic) Class iconViewClass; // @synthesize iconViewClass=_iconViewClass;
@property(nonatomic) __weak id <SBIconViewDelegate> iconViewDelegate; // @synthesize iconViewDelegate=_iconViewDelegate;
@property(retain, nonatomic) SBIconView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) SBIcon *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (_Bool)_hasValidInputs;
- (id)_font;
- (double)_scale;
- (_Bool)_canUseMemoryPool;
- (id)_focusHighlightColor;
- (struct CGSize)_maxSize;
- (_Bool)_canTightenLabel;
- (_Bool)_canEllipsizeLabel;
- (void)setIcon:(id)arg1;
- (void)setIcon:(id)arg1 forLocation:(int)arg2;
- (id)buildParameters;

@end

