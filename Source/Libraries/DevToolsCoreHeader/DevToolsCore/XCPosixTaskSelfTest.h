/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCPosixTask.h>

@class NSMutableData;

@interface XCPosixTaskSelfTest : XCPosixTask
{
    NSMutableData *stdoutData;
    NSMutableData *stderrData;
    BOOL outputComplete;
    BOOL terminated;
}

- (BOOL)_waitForFlag:(char *)arg1;
- (void)dealloc;
- (void)outputComplete;
- (void)processTerminated;
- (void)receivedStderrObject:(id)arg1;
- (void)receivedStdoutObject:(id)arg1;
- (id)stderrResults;
- (id)stdoutResults;
- (BOOL)terminated;
- (BOOL)waitForOutputComplete;
- (BOOL)waitForTerminated;

@end

