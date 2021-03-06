/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCSCMOperation.h>

#import "NSCopying-Protocol.h"
#import "PBXTSLineStreamConsuming-Protocol.h"
#import "PBXTSStreamConsumerRetaining-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableString, NSString, XCByteStreamPosixTask;

@interface XCSCMTaskOperation : XCSCMOperation <NSCopying, PBXTSLineStreamConsuming, PBXTSStreamConsumerRetaining>
{
    XCByteStreamPosixTask *_task;
    NSMutableDictionary *_taskEnvironment;
    NSString *_taskCurrentDirectory;
    NSArray *_filenames;
    NSMutableString *_taskOutput;
    NSString *_abortCode;
    NSString *_abortMessage;
}

- (void)_operationDidStop:(BOOL)arg1;
- (BOOL)_parseBufferedOutput;
- (BOOL)_parseForGeneralErrors;
- (BOOL)_parseForSpecificErrors;
- (void)_performOnTheFlyParsingForLines:(id)arg1;
- (id)absolutePathForFilename:(id)arg1;
- (void)appendToEnvironment:(id)arg1;
- (id)commandArgumentsArray;
- (id)commandName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)filenames;
- (id)init;
- (BOOL)parseForInformation;
- (id)paths;
- (void)reportObject:(id)arg1 forKey:(id)arg2 forFilename:(id)arg3;
- (void)reportObject:(id)arg1 forKey:(id)arg2 forPath:(id)arg3;
- (void)reportThatParsingCompletedForFilename:(id)arg1;
- (void)reportThatParsingCompletedForPath:(id)arg1;
- (void)run;
- (void)setAbortCode:(id)arg1 message:(id)arg2;
- (void)setFilenames:(id)arg1;
- (void)setPaths:(id)arg1;
- (void)setString:(id)arg1 forEnvironmentVariable:(id)arg2;
- (void)setTask:(id)arg1;
- (void)setTaskCurrentDirectory:(id)arg1;
- (void)setTaskEnvironment:(id)arg1;
- (void)setTaskOutput:(id)arg1;
- (id)setupStreams;
- (id)setupTask;
- (void)stream:(id)arg1 processLine:(id)arg2;
- (void)streamDidEnd:(id)arg1;
- (void)suspend;
- (id)task;
- (id)taskArgumentsArray;
- (id)taskCurrentDirectory;
- (id)taskEnvironment;
- (id)taskOutput;
- (void)terminate;
- (id)validateKeywordSubstitution:(id)arg1;
- (id)validateLogMessage:(id)arg1;

@end

