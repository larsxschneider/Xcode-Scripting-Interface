/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCountedSet, NSMutableArray;

@interface XCMessageQueue : NSObject
{
    NSMutableArray *_queue;
    struct __CFRunLoopSource *_runloopSource;
    NSCountedSet *_runloops;
    id _delegate;
    unsigned long long _firstSuspendedIndex;
    BOOL _dispatchSuspended;
}

+ (BOOL)backgroundThreadsShouldSynchronizeWithMainThread;
+ (void)initialize;
- (void)addObject:(id)arg1;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (unsigned long long)count;
- (void)dealloc;
- (id)delegate;
- (id)dequeueFirstObject;
- (void)finalize;
- (id)init;
- (void)invalidate;
- (BOOL)isValid;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)resumeDispatch;
- (void)setDelegate:(id)arg1;
- (void)suspendDispatchAfterCurrentQueueDrains;

@end
