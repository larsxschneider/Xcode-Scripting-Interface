/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCBuildPhaseDGSnapshot.h>

@class NSString;

@interface XCAppleScriptBuildPhaseDGSnapshot : XCBuildPhaseDGSnapshot
{
    BOOL _isSharedContext;
    NSString *_contextName;
}

+ (id)defaultName;
- (void)computeDependenciesForBuildFileReference:(id)arg1 inTargetBuildContext:(id)arg2;
- (void)computeDependenciesInTargetBuildContext:(id)arg1;
- (id)contextName;
- (void)dealloc;
- (id)initWithInformationFromBuildPhase:(id)arg1 forTargetSnapshot:(id)arg2;
- (BOOL)isSharedContext;

@end

