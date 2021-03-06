//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBHIDUILockAssertion;

@protocol SBProximitySensorControlling <NSObject>
@property(readonly, nonatomic, getter=isProximityDetectionSuspended) _Bool proximityDetectionSuspended;
@property(nonatomic, getter=isProximityDetectionEnabled) _Bool proximityDetectionEnabled;
- (SBHIDUILockAssertion *)suspendProximityDetectionAndMultitouchForSource:(long long)arg1 reason:(NSString *)arg2;
- (SBHIDUILockAssertion *)suspendProximityDetectionForSource:(long long)arg1 reason:(NSString *)arg2;
- (void)resetProximityCalibration;
@end

