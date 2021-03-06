/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCBuildOperation.h>

@class NSMutableArray;

@interface XCFileBuildOperation : XCBuildOperation
{
    NSMutableArray *_fileReferences;
}

- (BOOL)buildsContinueAfterErrors;
- (id)createDependenciesForProcessingSourceFileReference:(id)arg1 inTargetBuildContext:(id)arg2;
- (void)dealloc;
- (id)fileReferences;
- (id)initWithProject:(id)arg1 buildAction:(id)arg2 configurationName:(id)arg3 activeArchitecture:(id)arg4 overridingProperties:(id)arg5 buildables:(id)arg6;
- (id)initWithProject:(id)arg1 buildAction:(id)arg2 configurationName:(id)arg3 activeArchitecture:(id)arg4 overridingProperties:(id)arg5 fileReferences:(id)arg6 inTarget:(id)arg7;
- (BOOL)looksForPredictiveCompilationFiles;
- (unsigned long long)maximumNumberOfSubprocesses;
- (id)outputFileCommandForSourceNode:(id)arg1 inBuildContext:(id)arg2;
- (id)productNodesInTargetBuildContext:(id)arg1;

@end

