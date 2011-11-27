/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCThreadedOperation.h>

#import "XCWorkQueueOperationDelegates-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSString, NSTimer, PBXBuildSettingsDictionary, PBXProject, XCBuildLog, XCBuildLogRecorder, XCBuildOperationPumpTaskLaunchInfo, XCWorkQueueOperation;

@interface XCBuildOperation : XCThreadedOperation <XCWorkQueueOperationDelegates>
{
    PBXProject *_project;
    NSString *_buildAction;
    NSArray *_buildables;
    NSString *_configurationName;
    NSString *_activeArchitecture;
    PBXBuildSettingsDictionary *_overridingProperties;
    BOOL _buildIndependentBuildablesInParallel;
    NSArray *_preparedBuildables;
    BOOL _buildDependencies;
    NSMutableArray *_allBuildables;
    NSMutableArray *_remainingBuildables;
    NSMutableArray *_inProgressBuildables;
    id <XCBuildables> _lastActiveBuildable;
    XCWorkQueueOperation *_currentWorkQueueOperation;
    int _resultCodeForOperation;
    NSMapTable *_buildablesToWorkQueues;
    NSMapTable *_workQueuesToBuildables;
    XCBuildLog *_buildLog;
    XCBuildLogRecorder *_buildLogRecorder;
    unsigned long long _totalNumberOfWarnings;
    unsigned long long _totalNumberOfErrors;
    unsigned long long _totalNumberOfAnalyzerWarnings;
    unsigned long long _totalNumberOfAnalyzerResults;
    struct __CFBitVector *_slotsHavingSuppressionMsg;
    BOOL _haveAnyMessagesBeenSuppressed;
    XCBuildOperationPumpTaskLaunchInfo *_pumpTask;
    void *_RESERVED1;
    void *_RESERVED2;
    NSTimer *_statusNotificationTimer;
    BOOL _needToPostStatus;
    double _deferredPercentComplete;
    NSString *_deferredStatusString;
    BOOL _needToPostBuildLogItems;
    NSMutableSet *_deferredChangedLogItems;
    NSMutableArray *_deferredChangeEvents;
}

+ (Class)buildLogClass;
+ (void)initialize;
+ (unsigned long long)messageLimit;
+ (id)operationArbitrator;
+ (void)setBuildLogClass:(Class)arg1;
- (id)_allBuildables;
- (void)_cancelPendingOperation;
- (void)_cleanupAfterRunning;
- (void)_pendWithReason:(id)arg1;
- (void)_postDeferredNotificationsIfNeeded;
- (BOOL)_setupBeforeRunning;
- (id)activeArchitecture;
- (BOOL)addWorkQueueForNextReadyBuildableToWorkQueueOperation:(id)arg1;
- (id)allBuildables;
- (id)buildAction;
- (BOOL)buildDependencies;
- (BOOL)buildIndependentBuildablesInParallel;
- (id)buildLog;
- (void)buildLog:(id)arg1 descendantLogSection:(id)arg2 message:(id)arg3 didAddMessage:(id)arg4;
- (void)buildLog:(id)arg1 didChangeBuildLogItems:(id)arg2 changeEvents:(id)arg3;
- (void)buildLog:(id)arg1 didReportStatus:(id)arg2 taskPercentComplete:(double)arg3;
- (id)buildables;
- (BOOL)buildsContinueAfterErrors;
- (void)cancel;
- (int)cleanupAfterRunning;
- (id)configurationName;
- (id)currentTarget;
- (id)currentWorkQueueOperation;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)finalize;
- (void)handleAvailableObjectsOnMessageQueue:(id)arg1;
- (BOOL)hasReachedMessageLimit;
- (id)headingTitleForBuildable:(id)arg1;
- (id)inProgressBuildables;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithProject:(id)arg1 buildAction:(id)arg2 configurationName:(id)arg3 activeArchitecture:(id)arg4 overridingProperties:(id)arg5 buildables:(id)arg6;
- (BOOL)isBuildResultsRestoreOperation;
- (BOOL)isReadyToRunWithReasonForDelay:(id *)arg1;
- (BOOL)isRunningInConsole;
- (BOOL)isTargetBuildOperation;
- (id)lastActiveBuildable;
- (id)localizedResultString;
- (BOOL)looksForPredictiveCompilationFiles;
- (unsigned long long)maximumNumberOfSubprocesses;
- (id)overridingProperties;
- (void)pendWasCancelledWithReason:(id)arg1;
- (double)percentComplete;
- (id)productNodesInTargetBuildContext:(id)arg1;
- (id)project;
- (id)remainingBuildables;
- (int)runOperationInBackground;
- (void)runWhenReady;
- (void)setBuildDependencies:(BOOL)arg1;
- (void)setBuildIndependentBuildablesInParallel:(BOOL)arg1;
- (void)setCurrentWorkQueueOperation:(id)arg1;
- (void)setLastActiveBuildable:(id)arg1;
- (int)setupBeforeRunning;
- (BOOL)shouldDisplayProgressAndStatusMessages;
- (BOOL)shouldDisplaySummaryInBuildLog;
- (BOOL)shouldUseDistributedBuilds;
- (unsigned long long)totalNumberOfAnalyzerResults;
- (unsigned long long)totalNumberOfAnalyzerWarnings;
- (unsigned long long)totalNumberOfErrors;
- (unsigned long long)totalNumberOfWarnings;
- (id)workQueueForBuildable:(id)arg1;
- (void)workQueueOperation:(id)arg1 buildable:(id)arg2 didActivateCommand:(id)arg3;
- (BOOL)workQueueOperation:(id)arg1 buildable:(id)arg2 didEndWithSuccessCount:(unsigned long long)arg3 failureCount:(unsigned long long)arg4 resultCode:(int)arg5;
- (void)workQueueOperation:(id)arg1 buildable:(id)arg2 willActivateNextProcessableCommandIfAnyOnWorkQueue:(id)arg3;
- (void)workQueueOperation:(id)arg1 didReportStatus:(id)arg2 andPercentComplete:(double)arg3;
- (id)workQueueOperationAnnotationDelegate;
- (BOOL)workQueueOperationCommandsShouldPropagateCachedOutputs:(id)arg1;
- (void)workQueueOperationDidWaitForCommandActivity:(id)arg1;
- (id)workQueueOperationUniqueId;
- (void)workQueueOperationWillWaitForCommandActivity:(id)arg1;

@end
