//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBButtonConsumerClientInfo : NSObject
{
    id <FBSystemServiceClient> _systemServiceClient;
    unsigned long long _eventMask;
    long long _eventPriority;
}

@property(nonatomic) long long eventPriority; // @synthesize eventPriority=_eventPriority;
@property(nonatomic) unsigned long long eventMask; // @synthesize eventMask=_eventMask;
@property(retain, nonatomic) id <FBSystemServiceClient> systemServiceClient; // @synthesize systemServiceClient=_systemServiceClient;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

