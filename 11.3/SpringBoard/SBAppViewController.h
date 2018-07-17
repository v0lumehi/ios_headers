//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BSInvalidatable.h"
#import "SBApplicationHosting.h"
#import "SBDeviceApplicationSceneHandleObserver.h"
#import "SBSceneViewHostRequester.h"

@class NSMutableSet, NSSet, NSString, SBActivationSettings, SBApplicationSceneHandle, SBApplicationSceneView, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneView;

@interface SBAppViewController : UIViewController <SBSceneViewHostRequester, SBDeviceApplicationSceneHandleObserver, SBApplicationHosting, BSInvalidatable>
{
    NSString *_identifier;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    SBDeviceApplicationSceneView *_hostedAppView;
    SBActivationSettings *_activationSettings;
    id <SBScenePlaceholderContentContext> _placeholderContentContext;
    NSMutableSet *_activeTransitions;
    NSSet *_actionsToDeliver;
    long long _requestedMode;
    long long _currentMode;
    _Bool _sceneContentIsReady;
    _Bool _ignoresOcclusions;
    _Bool _invalidated;
    _Bool _automatesLifecycle;
    _Bool _placeholderContentEnabled;
    _Bool _wantsSecureRendering;
    id <SBAppViewControllerDelegate> _delegate;
}

@property(nonatomic) _Bool wantsSecureRendering; // @synthesize wantsSecureRendering=_wantsSecureRendering;
@property(nonatomic) _Bool ignoresOcclusions; // @synthesize ignoresOcclusions=_ignoresOcclusions;
@property(nonatomic) __weak id <SBAppViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool automatesLifecycle; // @synthesize automatesLifecycle=_automatesLifecycle;
@property(nonatomic) long long requestedMode; // @synthesize requestedMode=_requestedMode;
@property(retain, nonatomic) NSSet *actionsToDeliver; // @synthesize actionsToDeliver=_actionsToDeliver;
@property(retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext; // @synthesize placeholderContentContext=_placeholderContentContext;
@property(readonly, nonatomic) long long currentMode; // @synthesize currentMode=_currentMode;
@property(readonly, nonatomic) SBApplicationSceneView *appView; // @synthesize appView=_hostedAppView;
@property(readonly, copy, nonatomic) SBApplicationSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
- (void).cxx_destruct;
- (void)_installedAppsDidChange:(id)arg1;
- (void)_deactivateHostedApp;
- (id)_createSceneUpdateTransactionForApplicationSceneEntity:(id)arg1 deliveringActions:(_Bool)arg2;
- (id)_configureApplicationSceneEntity:(id)arg1 deliveringActions:(_Bool)arg2;
- (void)_activateApp;
- (void)_sendActions:(id)arg1;
- (void)_destroyAppView;
- (void)_createAppView;
- (void)_setCurrentMode:(long long)arg1;
- (void)_updateForAppearanceState:(int)arg1;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (long long)sceneViewHostingPriority:(id)arg1;
- (id)sceneViewHostingRequestIdentifier:(id)arg1;
- (void)_transformHostedAppViewForRotationToOrientation:(long long)arg1;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)hostedApp;
- (_Bool)isHostingAnApp;
- (_Bool)canHostAnApp;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)invalidate;
@property(nonatomic) _Bool placeholderContentEnabled; // @synthesize placeholderContentEnabled=_placeholderContentEnabled;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 andApplicationSceneEntity:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

