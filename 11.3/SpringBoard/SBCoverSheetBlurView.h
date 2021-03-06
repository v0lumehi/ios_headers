//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SBCoverSheetBlurView : UIView
{
    double _blurRadius;
    double _weighting;
    CDUnknownBlockType _scaleAdjustment;
    CDUnknownBlockType _alphaAdjustment;
    UIView *_reduceTransparencyView;
}

+ (Class)layerClass;
@property(retain, nonatomic) UIView *reduceTransparencyView; // @synthesize reduceTransparencyView=_reduceTransparencyView;
@property(copy, nonatomic) CDUnknownBlockType alphaAdjustment; // @synthesize alphaAdjustment=_alphaAdjustment;
@property(copy, nonatomic) CDUnknownBlockType scaleAdjustment; // @synthesize scaleAdjustment=_scaleAdjustment;
@property(nonatomic) double weighting; // @synthesize weighting=_weighting;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
- (void).cxx_destruct;
- (void)_removeReduceTransparencyView;
- (void)_createReduceTransparencyView;
- (void)_reduceTransparencyEnabledStateDidChange:(id)arg1;
- (void)_removeFilters;
- (void)_createFilters;
- (void)_configureForCurrentReduceTransparencySetting;
- (void)_updateForBlurRadius:(double)arg1 weighting:(double)arg2 forPresentationValue:(_Bool)arg3;
- (void)setWeighting:(double)arg1 forPresentationValue:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 scaleAdjustment:(CDUnknownBlockType)arg2 alphaAdjustment:(CDUnknownBlockType)arg3;

@end

