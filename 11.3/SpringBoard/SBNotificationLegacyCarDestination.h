//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NCNotificationAlertDestination.h"
#import "SBStarkScreenManagerObserver.h"

@class NSString, SBQuietModeStateAggregator;

@interface SBNotificationLegacyCarDestination : NSObject <SBStarkScreenManagerObserver, NCNotificationAlertDestination>
{
    id <NCNotificationAlertDestinationDelegate> _delegate;
    SBQuietModeStateAggregator *_quietModeStateAggregator;
    id <BBObserverDelegate> _bbObserverDelegate;
    unsigned long long _feed;
}

@property(nonatomic) unsigned long long feed; // @synthesize feed=_feed;
@property(retain, nonatomic) id <BBObserverDelegate> bbObserverDelegate; // @synthesize bbObserverDelegate=_bbObserverDelegate;
@property(retain, nonatomic) SBQuietModeStateAggregator *quietModeStateAggregator; // @synthesize quietModeStateAggregator=_quietModeStateAggregator;
@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate;
- (void).cxx_destruct;
- (_Bool)_isQuietModeEnabledAndActive;
- (void)_setObserverDelegateForStarkScreenManager:(id)arg1;
- (void)starkScreenManagerDidChangeCurrentController:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)canReceiveNotificationRequest:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

