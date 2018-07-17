//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSwitcherWallpaperPageContentView.h"

@class SBAppLayout, SBOrientationTransformWrapperView, SBRemoteAlertAdapter, UIView, UIViewController;

@interface SBAppSwitcherRemoteAlertPageContentView : SBSwitcherWallpaperPageContentView
{
    SBAppLayout *_appLayout;
    SBOrientationTransformWrapperView *_portraitContentWrapper;
    SBOrientationTransformWrapperView *_rotatingContentWrapper;
    UIView *_alertContentViewWrapper;
    UIView *_contentView;
    SBRemoteAlertAdapter *_remoteAlert;
    UIViewController *_containerViewController;
    _Bool _remoteAlertHasCustomWallpaperStyle;
    _Bool _remoteAlertRemoteTunnelingWasActive;
    long long _remoteAlertWallpaperStyle;
}

@property(nonatomic) _Bool remoteAlertRemoteTunnelingWasActive; // @synthesize remoteAlertRemoteTunnelingWasActive=_remoteAlertRemoteTunnelingWasActive;
@property(nonatomic) long long remoteAlertWallpaperStyle; // @synthesize remoteAlertWallpaperStyle=_remoteAlertWallpaperStyle;
@property(nonatomic) _Bool remoteAlertHasCustomWallpaperStyle; // @synthesize remoteAlertHasCustomWallpaperStyle=_remoteAlertHasCustomWallpaperStyle;
@property(readonly, copy, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
- (void).cxx_destruct;
- (void)_removeRemoteAlertChildViewController;
- (void)transitionDidEnd:(_Bool)arg1 forPresentation:(_Bool)arg2 transitionRequest:(id)arg3;
- (void)viewDismissing:(id)arg1 forTransitionRequest:(id)arg2;
- (void)viewPresenting:(id)arg1 forTransitionRequest:(id)arg2;
- (void)setVisible:(_Bool)arg1;
- (void)setActive:(_Bool)arg1;
- (void)_updateCornerRadius;
- (void)_updateBackgroundStyle;
- (void)_installAlertInViewController:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setAlert:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 remoteAlert:(id)arg2 appLayout:(id)arg3 containerViewController:(id)arg4;

@end

