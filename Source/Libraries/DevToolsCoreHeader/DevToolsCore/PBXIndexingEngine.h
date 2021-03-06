/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PBXProjectIndex;

@interface PBXIndexingEngine : NSObject
{
    PBXProjectIndex *_projectIndex;
    struct dispatch_queue_s *_indexAccessQueue;
}

+ (BOOL)canIndexFileAtPath:(id)arg1;
+ (id)fileListForFrameworkOrLibrary:(id)arg1;
+ (id)indexableFileTypes;
+ (Class)indexingEngineClassForPath:(id)arg1;
- (void)beginIndexingPass;
- (void)defineClass:(const char *)arg1 cplus:(BOOL)arg2;
- (void)defineMacro:(const char *)arg1 expansion:(const char *)arg2;
- (void)defineTemplate:(const char *)arg1;
- (void)defineType:(const char *)arg1;
- (void)endIndexingPass;
- (void)indexFileAtAbsolutePath:(id)arg1 withSettings:(id)arg2;
- (id)initWithProjectIndex:(id)arg1;
- (id)projectIndex;
- (void)releaseCachedData;
- (void)stopIndexing;
- (BOOL)wantsImportedSymbols;

@end

