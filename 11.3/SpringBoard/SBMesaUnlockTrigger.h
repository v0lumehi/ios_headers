//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBMesaUnlockTrigger : NSObject
{
    id <SBMesaUnlockTriggerDelegate> _delegate;
    _Bool _authenticated;
}

@property(nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(nonatomic) __weak id <SBMesaUnlockTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (void)fingerOff;
- (void)fingerOn;
- (void)menuButtonUp;
- (void)menuButtonDown;
- (void)significantUserInteractionOccurred;
- (void)screenOff;
- (_Bool)bioUnlock;

@end

