//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBHomeScreenTodayViewController;

@protocol SBHomeScreenTodayViewControllerDelegate <NSObject>
- (void)todayViewControllerDidFocusSearchField:(SBHomeScreenTodayViewController *)arg1;
- (void)todayViewController:(SBHomeScreenTodayViewController *)arg1 didEndInteractivePullToSearchSuccessfully:(_Bool)arg2;
- (void)todayViewController:(SBHomeScreenTodayViewController *)arg1 didUpdateInteractivePullToSearchWithProgress:(double)arg2;
- (void)todayViewControllerDidBeginInteractivePullToSearch:(SBHomeScreenTodayViewController *)arg1;
- (_Bool)todayViewControllerCanBeginInteractivePullToSearch:(SBHomeScreenTodayViewController *)arg1;
@end

