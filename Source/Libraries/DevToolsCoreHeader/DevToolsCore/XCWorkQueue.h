/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCountedSet, NSMutableArray, NSMutableData, XCBuildLogSectionRecorder, XCWorkQueueOperation;

@interface XCWorkQueue : NSObject
{
    id <XCBuildables> _buildable;
    XCWorkQueueOperation *_workQueueOperation;
    BOOL _processingHasStarted;
    BOOL _commandsBlockedByExternalConditions;
    XCBuildLogSectionRecorder *_buildLogRecorder;
    NSMutableArray *_waitingCommands;
    NSMutableArray *_activeCommands;
    NSMutableArray *_finishedCommandsIndexedByTag;
    NSMutableArray *_failedCommands;
    unsigned long long _numWaitingPhaseCounts;
    NSMutableData *_waitingPhaseCountsData;
    unsigned long long *_waitingPhaseCounts;
    unsigned long long _currentPhaseNumber;
    unsigned long long _nextActivatedCommandTag;
    unsigned long long _numProcessedCommands;
    unsigned long long _numTotalCommands;
    NSCountedSet *_numTotalForEachRuleName;
    NSCountedSet *_numWillRunForEachRuleName;
    NSCountedSet *_numActivatedForEachRuleName;
    double _percentComplete;
    struct __CFArray *_timingDataStrings;
    struct {
        double wallClockTime;
        int vmPageins;
        int vmPageouts;
    } _initialSystemState;
    double _aggregateRealTime;
    double _aggregateUserTime;
    double _aggregateSystemTime;
}

- (id)activateNextProcessableCommandWithinConstraints:(id)arg1;
- (void)addCommandIfAbsent:(id)arg1;
- (void)addTimingDataWithRuleInfo:(id)arg1 userTime:(double)arg2 systemTime:(double)arg3 systemStatsDelta:(id)arg4;
- (id)buildLogRecorder;
- (id)buildable;
- (id)commandWithTag:(unsigned long long)arg1;
- (BOOL)commandsAreBlockedByExternalConditions;
- (BOOL)containsCommand:(id)arg1;
- (void)deactivateCommand:(id)arg1 didCompleteSuccessfully:(BOOL)arg2;
- (void)dealloc;
- (void)emitTimingDataUsingWorkQueueOperation:(id)arg1;
- (unsigned long long)incrementNumberOfProcessedCommands;
- (id)init;
- (BOOL)isEmpty;
- (id)longDescription;
- (unsigned long long)numberOfActivatedCommandsForRuleName:(id)arg1;
- (unsigned long long)numberOfActiveCommands;
- (unsigned long long)numberOfCommandsWhichWillRunForRuleName:(id)arg1;
- (unsigned long long)numberOfProcessedCommands;
- (unsigned long long)numberOfTotalCommands;
- (unsigned long long)numberOfWaitingCommands;
- (BOOL)processingHasStarted;
- (void)recordInitialSystemState;
- (void)removeAllCommands;
- (void)reportStatusAndPercentComplete:(id)arg1;
- (void)setBuildOutputRecorder:(id)arg1;
- (void)setBuildable:(id)arg1;
- (void)setProcessingHasStarted:(BOOL)arg1;
- (void)setWorkQueueOperation:(id)arg1;
- (void)stopRecordingBuildOutput;
- (unsigned long long)totalNumberOfCommandsForRuleName:(id)arg1;
- (id)workQueueOperation;

@end
