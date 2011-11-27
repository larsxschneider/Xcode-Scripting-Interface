/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface XCNetworkHostInfo : NSObject
{
    NSMutableArray *_clients;
    struct __SCNetworkReachability *_reachabilityTarget;
    struct {
        long long version;
        void *info;
        void *retain;
        void *release;
        void *copyDescription;
    } _context;
    NSString *_networkHostName;
    BOOL _online;
}

+ (id)hostWithName:(id)arg1;
- (void)addClient:(id)arg1;
- (id)clients;
- (void)dealloc;
- (void)disconnect;
- (void)finalize;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1 networkHostName:(id)arg2;
- (void)networkHostOnlineStatusChanged:(unsigned int)arg1;
- (BOOL)online;
- (BOOL)removeClient:(id)arg1;

@end

