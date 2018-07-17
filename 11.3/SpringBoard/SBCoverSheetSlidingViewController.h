//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBCoverSheetSystemGestureDelegatePositionProviding.h"
#import "_UISettingsKeyObserver.h"

@class NSObject<OS_dispatch_group>, NSString, SBCoverSheetPositionView, SBCoverSheetSystemGesturesDelegate, SBCoverSheetTransitionSettings, SBLockScreenSettings, SBScreenEdgePanGestureRecognizer, UIViewController<SBCoverSheetSlidingViewControllerContentViewController>, UIViewFloatAnimatableProperty;

@interface SBCoverSheetSlidingViewController : UIViewController <SBCoverSheetSystemGestureDelegatePositionProviding, _UISettingsKeyObserver>
{
    _Bool _canBePulledDown;
    _Bool _canBePulledUp;
    _Bool _performingCatchUpForPresentation;
    UIViewController<SBCoverSheetSlidingViewControllerContentViewController> *_contentViewController;
    id <SBCoverSheetSlidingViewControllerDelegate> _delegate;
    SBScreenEdgePanGestureRecognizer *_dismissGestureRecognizer;
    SBScreenEdgePanGestureRecognizer *_dismissAddendumGestureRecognizer;
    long long _dismissalSlidingMode;
    long long _dismissalTransformMode;
    SBCoverSheetSystemGesturesDelegate *_systemGesturesDelegate;
    SBCoverSheetTransitionSettings *_transitionSettings;
    SBCoverSheetPositionView *_positionView;
    SBLockScreenSettings *_lockScreenSettings;
    long long _presentGestureState;
    long long _dismissGestureState;
    UIViewFloatAnimatableProperty *_progressProperty;
    UIViewFloatAnimatableProperty *_catchupProperty;
    long long _groupCount;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_group> *_completionGroup;
    struct CGPoint _lastTouchLocation;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup; // @synthesize completionGroup=_completionGroup;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) long long groupCount; // @synthesize groupCount=_groupCount;
@property(nonatomic) struct CGPoint lastTouchLocation; // @synthesize lastTouchLocation=_lastTouchLocation;
@property(nonatomic) _Bool performingCatchUpForPresentation; // @synthesize performingCatchUpForPresentation=_performingCatchUpForPresentation;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *catchupProperty; // @synthesize catchupProperty=_catchupProperty;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *progressProperty; // @synthesize progressProperty=_progressProperty;
@property(nonatomic) _Bool canBePulledUp; // @synthesize canBePulledUp=_canBePulledUp;
@property(nonatomic) _Bool canBePulledDown; // @synthesize canBePulledDown=_canBePulledDown;
@property(nonatomic, setter=_logDismissGestureState:) long long dismissGestureState; // @synthesize dismissGestureState=_dismissGestureState;
@property(nonatomic, setter=_logPresentGestureState:) long long presentGestureState; // @synthesize presentGestureState=_presentGestureState;
@property(retain, nonatomic) SBLockScreenSettings *lockScreenSettings; // @synthesize lockScreenSettings=_lockScreenSettings;
@property(retain, nonatomic) SBCoverSheetPositionView *positionView; // @synthesize positionView=_positionView;
@property(nonatomic) __weak SBCoverSheetTransitionSettings *transitionSettings; // @synthesize transitionSettings=_transitionSettings;
@property(retain, nonatomic) SBCoverSheetSystemGesturesDelegate *systemGesturesDelegate; // @synthesize systemGesturesDelegate=_systemGesturesDelegate;
@property(nonatomic) long long dismissalTransformMode; // @synthesize dismissalTransformMode=_dismissalTransformMode;
@property(nonatomic) long long dismissalSlidingMode; // @synthesize dismissalSlidingMode=_dismissalSlidingMode;
@property(retain, nonatomic) SBScreenEdgePanGestureRecognizer *dismissAddendumGestureRecognizer; // @synthesize dismissAddendumGestureRecognizer=_dismissAddendumGestureRecognizer;
@property(retain, nonatomic) SBScreenEdgePanGestureRecognizer *dismissGestureRecognizer; // @synthesize dismissGestureRecognizer=_dismissGestureRecognizer;
@property(nonatomic) __weak id <SBCoverSheetSlidingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController<SBCoverSheetSlidingViewControllerContentViewController> *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)_studyLogForCompletionOfTransitionToPresented:(_Bool)arg1;
- (void)_studyLogForGestureRecognizerState:(long long)arg1 bounds:(struct CGRect)arg2 position:(double)arg3 velocity:(double)arg4;
- (void)_updateCoverSheetDismissSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)_grabberRecognizer;
- (void)_removeSystemGestureRecognizers;
- (void)_addSystemGestureRecognizers;
- (void)_transitionToViewControllerAppearState:(int)arg1 ifNeeded:(_Bool)arg2 forUserGesture:(_Bool)arg3;
- (void)_transitionToViewControllerAppearState:(int)arg1 forUserGesture:(_Bool)arg2;
- (void)_transitionToViewControllerAppearState:(int)arg1;
- (void)_startCatchupAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_createProperties;
- (struct CGRect)_animationTickedWithProgress:(double)arg1 forPresentationValue:(_Bool)arg2;
- (void)_animationTickForPresentationValue:(_Bool)arg1;
- (void)_positionSubviewsForContentFrame:(struct CGRect)arg1 forPresentationValue:(_Bool)arg2;
- (struct CGRect)_updatePositionViewForProgress:(double)arg1 forPresentationValue:(_Bool)arg2;
- (void)_endTransitionToAppeared:(_Bool)arg1;
- (void)_updateForLocation:(struct CGPoint)arg1 interactive:(_Bool)arg2;
- (void)_beginTransitionFromAppeared:(_Bool)arg1;
- (_Bool)_isPresentingInterstitialForGestureRecognizer:(id)arg1;
- (_Bool)_shouldEndPresentedForEndingGestureRecognizer:(id)arg1;
- (_Bool)_shouldRubberBandForGestureRecognizer:(id)arg1;
- (struct CGPoint)_adjustedTouchLocationForCurrentDismissalMode:(struct CGPoint)arg1;
- (struct CGPoint)_velocityForGesture:(id)arg1;
- (struct CGPoint)_locationForGesture:(id)arg1;
- (void)_cancelTransitionForGesture:(id)arg1;
- (struct CGPoint)_finalLocationForTransitionToPresented:(_Bool)arg1;
- (id)activeGestureRecognizer;
- (void)_finishTransitionToPresented:(_Bool)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_presentOrDismissGestureEndedWithGestureRecognizer:(id)arg1;
- (void)_dismissGestureChangedWithGestureRecognizer:(id)arg1;
- (void)_presentOrDismissGestureChangedWithGestureRecognizer:(id)arg1;
- (void)_dismissGestureBeganWithGestureRecognizer:(id)arg1;
- (void)_presentGestureBeganWithGestureRecognizer:(id)arg1;
- (void)_handleDismissGesture:(id)arg1;
- (void)_handlePresentGesture:(id)arg1;
- (void)_dismissCoverSheetAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_presentCoverSheetAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)isTransitioning;
- (long long)participantState;
- (id)dashBoardIdentifier;
- (_Bool)isBottomMostSlider;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)wantsFullScreenLayout;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)setDismissGesturesEnabled:(_Bool)arg1;
- (_Bool)isAnyGestureActivelyRecognized;
- (_Bool)_isTransitioning;
- (_Bool)isDismissGestureActive;
- (_Bool)isPresentGestureActive;
- (void)setPresented:(_Bool)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1 canBePulledDown:(_Bool)arg2 canBePulledUp:(_Bool)arg3 dismissalPreemptingGestureRecognizer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

