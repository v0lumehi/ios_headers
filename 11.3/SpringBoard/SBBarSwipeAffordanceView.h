//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBBarSwipeScreenEdgePanGestureRecognizerDelegate.h"
#import "SBHomeGrabberDelegate.h"
#import "SBPanSystemGestureRecognizerDelegate.h"
#import "SBSystemGestureRecognizerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSHashTable, NSString, SBBarSwipeScreenEdgePanGestureRecognizer, SBHomeGesturePanGestureRecognizer, SBHomeGrabberView, SBPanSystemGestureRecognizer, UINotificationFeedbackGenerator;

@interface SBBarSwipeAffordanceView : UIView <UIGestureRecognizerDelegate, SBHomeGrabberDelegate, SBBarSwipeScreenEdgePanGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBPanSystemGestureRecognizerDelegate>
{
    NSHashTable *_observers;
    UINotificationFeedbackGenerator *_dismissalFeedbackGenerator;
    double _additionalEdgeSpacing;
    SBBarSwipeScreenEdgePanGestureRecognizer *_swipeEdgePanGestureRecognizer;
    _Bool _active;
    _Bool _reachabilityGestureEnabled;
    SBPanSystemGestureRecognizer *_reachabilityPanGestureRecognizer;
    id <SBBarSwipeAffordanceDelegate> _delegate;
    SBHomeGrabberView *_grabberView;
    long long _feedbackType;
}

@property(nonatomic) long long feedbackType; // @synthesize feedbackType=_feedbackType;
@property(readonly, nonatomic) SBHomeGrabberView *grabberView; // @synthesize grabberView=_grabberView;
@property(nonatomic, getter=isReachabilityGestureEnabled) _Bool reachabilityGestureEnabled; // @synthesize reachabilityGestureEnabled=_reachabilityGestureEnabled;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <SBBarSwipeAffordanceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SBPanSystemGestureRecognizer *reachabilityPanGestureRecognizer; // @synthesize reachabilityPanGestureRecognizer=_reachabilityPanGestureRecognizer;
@property(readonly, nonatomic) SBHomeGesturePanGestureRecognizer *swipeEdgePanGestureRecognizer; // @synthesize swipeEdgePanGestureRecognizer=_swipeEdgePanGestureRecognizer;
- (void).cxx_destruct;
- (_Bool)_reachabilityPanGestureRecognizerShouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (_Bool)_reachabilityPanGestureRecognizerShouldReceiveTouch:(id)arg1;
- (_Bool)_reachabilityPanGestureRecognizerShouldBegin;
- (void)_fireReachability;
- (void)_handleReachabilityPanGesture:(id)arg1;
- (void)_updateReachabilityGestureEnabledState;
- (id)_settleAffordanceAnimationBehaviorDescription;
- (id)_unhideHomeAffordanceAnimationSettings;
- (id)_hideHomeAffordanceAnimationSettings;
- (void)_setGrabberAdditionalEdgeSpacing:(double)arg1;
- (void)_offsetGrabberForProgress:(double)arg1;
- (void)_settleGrabber;
- (_Bool)_edgePanGestureRecognizerShouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)_fireAction;
- (double)_progressWithTranslation:(struct CGPoint)arg1 liftoffVelocity:(struct CGPoint)arg2;
- (void)_handleEdgePanGesture:(id)arg1;
- (_Bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (long long)touchGestureInterfaceOrientationForBarSwipeRecognizer:(id)arg1;
- (long long)_effectiveOrientationAccountingForTransforms;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (void)didAddSubview:(id)arg1;
- (void)_runBlockOnObservers:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_deactivate;
- (void)_activate;
@property(nonatomic) long long colorBias; // @dynamic colorBias;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

