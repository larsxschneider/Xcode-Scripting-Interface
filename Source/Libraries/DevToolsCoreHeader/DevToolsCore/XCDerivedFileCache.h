/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface XCDerivedFileCache : NSObject
{
    NSString *_basePath;
    NSMutableDictionary *_signaturesToPaths;
    long long _disableCachePruningCount;
    NSMutableSet *_registeredLockingClientIds;
    NSMutableDictionary *_lockedFilePaths;
}

+ (id)defaultBasePath;
+ (id)defaultSharedBasePath;
+ (int)emptyCaches;
+ (id)hashStringFromCommandLine:(id)arg1 inputFilePaths:(id)arg2;
+ (void)initialize;
+ (id)sharedDerivedFileCache;
+ (id)sharedDerivedFileCacheWithBasePath:(id)arg1;
- (id)_lockInfoForPath:(id)arg1;
- (void)_pruneCache;
- (id)basePath;
- (void)dealloc;
- (id)derivedFilePathForDomain:(id)arg1 inputFilePaths:(id)arg2 commandLine:(id)arg3;
- (id)derivedFilePathForDomain:(id)arg1 inputFilePaths:(id)arg2 commandLineHashString:(id)arg3;
- (void)disableCachePruning;
- (void)enableCachePruning;
- (id)init;
- (id)initWithBasePath:(id)arg1;
- (BOOL)lockPath:(id)arg1 forWriting:(BOOL)arg2 byClientId:(id)arg3;
- (int)lockStateOfPath:(id)arg1;
- (BOOL)pathWasUnlockedForWriting:(id)arg1 byClientId:(id)arg2;
- (void)pruneCacheToNumberOfBytes:(unsigned long long)arg1 minimumCacheEntryAgeForRemoval:(double)arg2;
- (void)registerLockingClientId:(id)arg1;
- (void)unlockPath:(id)arg1 byClientId:(id)arg2;
- (void)unregisterLockingClientId:(id)arg1;

@end

