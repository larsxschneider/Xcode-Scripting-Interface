/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol XCWorkQueueCommands <NSObject>
- (void)addCommandIdentToBuildStateStoreDependencyList;
- (void)commandInvocation:(id)arg1 didEmitBytes:(const char *)arg2 length:(unsigned long long)arg3;
- (void)commandInvocationDidEnd:(id)arg1 successfully:(BOOL)arg2;
- (void)commandInvocationWillStart:(id)arg1;
- (id)createStartedCommandInvocationInSlot:(unsigned long long)arg1 ofWorkQueueOperation:(id)arg2;
- (void)decrementWaitCount;
- (void)decrementWaitCountsOfDependingNodes;
- (id)descriptionForWorkQueueLog;
- (void)didDeactivateInWorkQueue:(id)arg1 didCompleteSuccessfully:(BOOL)arg2;
- (unsigned long long)estimatedMemoryUse;
- (BOOL)hasCachedOutputs;
- (void)incrementWaitCount;
- (void)incrementWaitCountsOfDependingNodes;
- (id)instantiatedCommandOutputParserWithLogSectionRecorder:(id)arg1;
- (id)instantiatedCommandResultsPostprocessor;
- (BOOL)isBlockedOnInputOrOutputFileLocks;
- (BOOL)isReadyForProcessing;
- (BOOL)outputFilesHaveBeenUpdated;
- (unsigned long long)phaseNumber;
- (id)predictiveProcessingCandidateFilePath;
- (id)predictiveProcessingInputFilePath;
- (id)predictiveProcessingValiditySignature;
- (void)propagateCachedOutputs;
- (void)rerunCommand;
- (id)ruleInfo;
- (void)setEstimatedMemoryUse:(unsigned long long)arg1;
- (void)setSoftError:(BOOL)arg1;
- (void)setWorkQueueCommandTag:(unsigned long long)arg1;
- (BOOL)shouldPropagateCachedOutputs;
- (BOOL)softError;
- (id)subprocessCommandLineForProcessing;
- (unsigned long long)waitCount;
- (void)wasAddedToWorkQueue:(id)arg1;
- (void)willActivateInWorkQueue:(id)arg1;
- (void)willBeRemovedFromWorkQueue:(id)arg1;
- (id)workQueue;
- (unsigned long long)workQueueCommandTag;
@end
