//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBDashBoardBehavior, SBDashBoardViewController;

@protocol SBDashBoardViewControllerObserver <NSObject>

@optional
- (void)dashBoardControllerDidPresentModalView:(SBDashBoardViewController *)arg1;
- (void)dashBoardControllerExternalLockProviderStateDidChange:(SBDashBoardViewController *)arg1;
- (void)dashBoardController:(SBDashBoardViewController *)arg1 didChangeActiveBehavior:(SBDashBoardBehavior *)arg2;
@end

