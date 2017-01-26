//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SBWallpaperEffectView;

@interface SBMultiVariantWallpaperEffectView : UIView
{
    SBWallpaperEffectView *_homeWallpaperEffectView;
    SBWallpaperEffectView *_lockWallpaperEffectView;
    long long _variant;
    long long _style;
    unsigned long long _transformOptions;
}

@property(nonatomic) unsigned long long transformOptions; // @synthesize transformOptions=_transformOptions;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long variant; // @synthesize variant=_variant;
- (void).cxx_destruct;
- (void)_createEffectViewForVariantIfNeeded:(long long)arg1;
- (id)_activeEffectView;
- (void)layoutSubviews;
- (void)offsetWallpaperBy:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

