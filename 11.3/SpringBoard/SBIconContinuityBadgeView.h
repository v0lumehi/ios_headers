//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBIconAccessoryView.h"

@class NSString, SBDarkeningImageView, SBIconAccessoryImage;

@interface SBIconContinuityBadgeView : UIView <SBIconAccessoryView>
{
    long long _badgeType;
    SBIconAccessoryImage *_backgroundImage;
    SBIconAccessoryImage *_foregroundImage;
    SBDarkeningImageView *_backgroundView;
    SBDarkeningImageView *_foregroundView;
}

+ (id)_checkoutImageForContinuityBadgeType:(long long)arg1 highlighted:(_Bool)arg2;
+ (id)_checkoutBackgroundImage;
+ (id)checkoutAccessoryImagesForIcon:(id)arg1 location:(long long)arg2;
+ (struct CGPoint)_overhang;
@property(retain, nonatomic) SBDarkeningImageView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(retain, nonatomic) SBDarkeningImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) SBIconAccessoryImage *foregroundImage; // @synthesize foregroundImage=_foregroundImage;
@property(retain, nonatomic) SBIconAccessoryImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) long long badgeType; // @synthesize badgeType=_badgeType;
- (void).cxx_destruct;
- (void)_clearIcon;
- (void)setAccessoryBrightness:(double)arg1;
- (struct CGPoint)accessoryOriginForIconBounds:(struct CGRect)arg1;
- (void)prepareForReuse;
- (_Bool)displayingAccessory;
- (void)configureForIcon:(id)arg1 infoProvider:(id)arg2;
- (void)configureAnimatedForIcon:(id)arg1 infoProvider:(id)arg2 withPreparation:(CDUnknownBlockType)arg3 animation:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

