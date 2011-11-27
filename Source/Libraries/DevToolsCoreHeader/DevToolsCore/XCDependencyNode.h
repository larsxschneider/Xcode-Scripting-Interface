/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString, PBXTargetBuildContext, XCBuildInfo, XCDerivedFileCache;

@interface XCDependencyNode : NSObject
{
    unsigned long long _nodeNumber;
    NSString *_name;
    NSString *_path;
    PBXTargetBuildContext *_buildContext;
    NSMutableArray *_producerCommands;
    NSMutableArray *_includedNodes;
    NSMutableArray *_consumerCommands;
    NSMutableArray *_includingNodes;
    struct {
        unsigned int alwaysOutOfDate:1;
        unsigned int dontCareIfExists:1;
        unsigned int dontCareAboutTimestamp:1;
        unsigned int shouldScanForIncludes:1;
        unsigned int beingEnqueued:1;
        unsigned int beingReset:1;
        unsigned int synchronizeCommands:1;
    } _dnFlags;
    unsigned int _traversalGenCount;
    XCDerivedFileCache *_derivedFileCache;
    XCBuildInfo *_buildInfo;
    int _state;
    int _highestInclState;
    long long _time;
    long long _newestInclTime;
    CDStruct_7eef4560 _signature;
    CDStruct_7eef4560 _combinedInclSignature;
    long long _fileSize;
    struct {
        long long modTime;
    } _node2009;
}

- (void)_2009_enqueueCommandsOntoWorkQueue:(id)arg1 whenceDebugDesc:(id)arg2;
- (long long)_2009_modTime;
- (void)_addConsumerCommand:(id)arg1;
- (void)_addDependingNode:(id)arg1;
- (void)_addIncludingNode:(id)arg1;
- (void)_addProducerCommand:(id)arg1;
- (void)_removeDependingNode:(id)arg1;
- (void)_removeIncludingNode:(id)arg1;
- (void)_visitDownstreamCommandsUsingPreorderBlock:(id)arg1 postorderBlock:(void)arg2 recursionAvoidanceBitmap:(id)arg3 whenceDebugDesc:(void)arg4;
- (void)_visitUpstreamCommandsUsingPreorderBlock:(id)arg1 postorderBlock:(void)arg2 recursionAvoidanceBitmap:(id)arg3 whenceDebugDesc:(void)arg4;
- (void)addDependedNode:(id)arg1;
- (void)addIncludedNode:(id)arg1;
- (id)automaticFileContents;
- (id)buildContext;
- (id)buildInfo;
- (id)buildNodeState;
- (CDStruct_7eef4560)combinedSignatureOfIncludedNodes;
- (id)command;
- (void)computeStateIfNeeded;
- (id)consumerCommands;
- (void)dealloc;
- (void)decrementWaitCount;
- (id)dependencyInfoCacheEntry;
- (id)derivedFileCache;
- (id)description;
- (void)detachFromOtherGraphObjects;
- (BOOL)dontCareAboutTimestamp;
- (BOOL)dontCareIfExists;
- (void)enqueueOutOfDateCommandsOntoWorkQueue:(id)arg1;
- (void)fileMayHaveChanged;
- (long long)fileSize;
- (BOOL)hasBeenUpdatedByClientId:(id)arg1;
- (int)highestStateOfIncludedNodes;
- (id)includedNodes;
- (id)includingNodes;
- (void)incrementWaitCount;
- (id)init;
- (id)initWithNodeNumber:(unsigned long long)arg1 name:(id)arg2;
- (id)initWithNodeNumber:(unsigned long long)arg1 name:(id)arg2 path:(id)arg3;
- (void)invalidateCombinedIncludesSignature;
- (void)invalidateSignature;
- (BOOL)isAlwaysOutOfDate;
- (BOOL)isUpToDate;
- (BOOL)isVirtual;
- (BOOL)lockForWriting:(BOOL)arg1 byClientId:(id)arg2;
- (int)lockState;
- (void)makeConsumerCommandsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeConsumerCommandsPerformSelector:(SEL)arg1 withObject:(id)arg2 recursionAvoidanceBitmap:(char *)arg3;
- (id)name;
- (id)nameForGraphViz;
- (long long)newestTimestampOfIncludedNodes;
- (unsigned long long)nodeNumber;
- (id)path;
- (id)paths;
- (id)producerCommand;
- (id)producerCommands;
- (BOOL)recordsUpdatedFileListInEnvironment;
- (void)removeAllIncludedNodes;
- (void)removeDiscoveredInfo;
- (void)removePredictiveProcessingOutputRecursivelyBecauseOfChangedNode:(id)arg1;
- (void)resetState;
- (void)resetStateRecursively;
- (void)setAlwaysOutOfDate:(BOOL)arg1;
- (void)setAutomaticFileContents:(id)arg1;
- (void)setBuildContext:(id)arg1;
- (void)setBuildInfo:(id)arg1;
- (void)setCommandInputSignature:(CDStruct_7eef4560)arg1 commandConfigurationSignature:(CDStruct_7eef4560)arg2;
- (void)setDontCareAboutTimestamp:(BOOL)arg1;
- (void)setDontCareIfExists:(BOOL)arg1;
- (void)setRecordsUpdatedFileListInEnvironment:(BOOL)arg1;
- (void)setScansFileContentsForIncludes:(BOOL)arg1;
- (void)setSynchronizeCommandsOnDerivedFileCache:(id)arg1;
- (id)shortNameForDebugging;
- (CDStruct_7eef4560)signature;
- (id)signatureDescription;
- (void)statFileIfNeeded;
- (int)state;
- (id)stateDescription;
- (BOOL)synchronizeCommands;
- (id)timeDescription;
- (long long)timestamp;
- (void)touch;
- (void)unlockByClientId:(id)arg1;
- (const char *)unretainedFileSystemRepresentation;
- (void)untouch;
- (void)updateDiscoveredBuildInfo;
- (void)visitDownstreamCommandsUsingPreorderBlock:(id)arg1 postorderBlock:(void)arg2;
- (void)visitUpstreamCommandsUsingPreorderBlock:(id)arg1 postorderBlock:(void)arg2;
- (void)writeDefinitionToGraphVizFile:(struct __sFILE *)arg1;
- (void)writeDependencyEdgesToGraphVizFile:(struct __sFILE *)arg1;
- (void)writeInclusionEdgesToGraphVizFile:(struct __sFILE *)arg1;

@end

