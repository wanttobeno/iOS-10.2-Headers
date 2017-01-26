//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SBAppViewBackgroundView-Protocol.h"
#import "SBWallpaperObserver-Protocol.h"
#import "_SBFakeBlurObserver-Protocol.h"

@class NSString, UIColor, UIImage, UIImageView;
@protocol _SBFakeBlur;

@interface SBWallpaperEffectView : UIView <_SBFakeBlurObserver, SBWallpaperObserver, SBAppViewBackgroundView>
{
    long long _variant;
    UIColor *_wallpaperAverageColor;
    long long _startStyle;
    long long _endStyle;
    double _transitionFraction;
    UIView<_SBFakeBlur> *_blurView;
    UIView *_grayscaleTintView;
    UIView *_colorTintView;
    UIView<_SBFakeBlur> *_transitionBlurView;
    UIView *_transitionGrayscaleTintView;
    UIView *_transitionColorTintView;
    UIImageView *_maskImageView;
    UIView *_blurMaskingContainer;
    UIView *_tintMaskingContainer;
    UIImage *_maskImage;
    _Bool _shouldMaskBlur;
    _Bool _shouldMaskTint;
    _Bool _fullscreen;
    _Bool _forcesOpaque;
    unsigned long long _transformOptions;
    _Bool _accessibilityReduceTransparencyEnabled;
}

+ (id)imageInRect:(struct CGRect)arg1 forVariant:(long long)arg2 withStyle:(long long)arg3 zoomFactor:(double)arg4 mask:(id)arg5 masksBlur:(_Bool)arg6 masksTint:(_Bool)arg7;
@property(retain, nonatomic) UIView *tintMaskingContainer; // @synthesize tintMaskingContainer=_tintMaskingContainer;
@property(retain, nonatomic) UIView *blurMaskingContainer; // @synthesize blurMaskingContainer=_blurMaskingContainer;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIView *transitionColorTintView; // @synthesize transitionColorTintView=_transitionColorTintView;
@property(retain, nonatomic) UIView *transitionGrayscaleTintView; // @synthesize transitionGrayscaleTintView=_transitionGrayscaleTintView;
@property(retain, nonatomic) UIView<_SBFakeBlur> *transitionBlurView; // @synthesize transitionBlurView=_transitionBlurView;
@property(retain, nonatomic) UIView *colorTintView; // @synthesize colorTintView=_colorTintView;
@property(retain, nonatomic) UIView *grayscaleTintView; // @synthesize grayscaleTintView=_grayscaleTintView;
@property(retain, nonatomic) UIView<_SBFakeBlur> *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) unsigned long long transformOptions; // @synthesize transformOptions=_transformOptions;
@property(nonatomic) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) _Bool forcesOpaque; // @synthesize forcesOpaque=_forcesOpaque;
- (void).cxx_destruct;
- (void)_isolationWindowRectDidChange:(id)arg1;
- (void)_setFrame:(struct CGRect)arg1 forceUpdateBackgroundImage:(_Bool)arg2;
- (void)_setIsContainedInPopover:(_Bool)arg1;
- (void)updateBackgroundImage;
- (void)setAppearanceStorage:(id)arg1;
- (id)appearanceStorage;
- (void)setBarWantsAdaptiveBackdrop:(_Bool)arg1;
- (void)setTranslucent:(_Bool)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_accessibilityReduceTransparencyChanged:(id)arg1;
- (void)_configureGrayscaleAndColorTintViewForStartStyle:(_Bool)arg1;
- (void)_configureViews;
- (void)_configureForCurrentBlurStyle;
- (void)_configureFromScratch;
- (_Bool)_needsBlurViewForStyle:(long long)arg1;
- (void)_setTransitionFraction:(double)arg1;
@property(nonatomic) long long wallpaperStyle;
- (void)_updateWallpaperAverageColor:(id)arg1;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)fakeBlurView:(id)arg1 didChangeStyle:(long long)arg2;
- (void)layoutSubviews;
- (void)offsetWallpaperBy:(struct CGPoint)arg1;
- (void)setMaskImage:(id)arg1 masksBlur:(_Bool)arg2 masksTint:(_Bool)arg3;
- (_Bool)currentTransitionStateIsOpaque;
- (void)setTransitionState:(CDStruct_059c2b36)arg1;
- (_Bool)prepareToAnimateToTransitionState:(inout CDStruct_059c2b36 *)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)setStyle:(long long)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithWallpaperVariant:(long long)arg1 transformOptions:(unsigned long long)arg2;
- (id)initWithWallpaperVariant:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

