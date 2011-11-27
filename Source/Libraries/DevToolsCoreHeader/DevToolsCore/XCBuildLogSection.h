/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCActivityLogSection.h>

@interface XCBuildLogSection : XCActivityLogSection
{
    unsigned long long _totalErrorCount;
    unsigned long long _totalWarningCount;
    unsigned long long _totalAnalyzerWarningCount;
    unsigned long long _totalAnalyzerResultCount;
    BOOL _isQuiet;
    BOOL _wasFetchedFromBuildCache;
}

+ (void)configureDeserializer:(id)arg1;
+ (id)extraTranscriptTextAttributes;
+ (Class)logRecorderClass;
+ (unsigned long long)serializationFormatVersion;
- (unsigned long long)buildLogItemIdentifier;
- (struct _NSRange)buildLogTranscriptCharacterRange;
- (unsigned long long)buildLogTranscriptCharacterRangeBaseForSubitems;
- (id)buildable;
- (void)checkMessageCounts;
- (void)configureSerializer:(id)arg1;
- (void)dealloc;
- (id)emittedOutput;
- (BOOL)haveAnyMessagesBeenSuppressed;
- (id)initFromDeserializer:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (BOOL)isActive;
- (BOOL)isAnalyzerResult;
- (BOOL)isCommandInvocationSection;
- (BOOL)isContextInfo;
- (BOOL)isError;
- (BOOL)isHeaderInclusion;
- (BOOL)isNotice;
- (BOOL)isQuiet;
- (BOOL)isRuleInvocation;
- (BOOL)isTargetHeadingItem;
- (BOOL)isTargetSection;
- (BOOL)isToplevelItem;
- (BOOL)isUnitTestSection;
- (BOOL)isWarning;
- (void)logRecorder:(id)arg1 adjustMessageCountsWithErrorDelta:(long long)arg2 warningCountDelta:(long long)arg3 analyzerWarningDelta:(long long)arg4 analyzerResultDelta:(long long)arg5;
- (void)logRecorder:(id)arg1 didStopRecordingWithInfo:(id)arg2;
- (void)logRecorder:(id)arg1 setIsQuiet:(BOOL)arg2;
- (void)logRecorder:(id)arg1 setWasFetchedFromBuildCache:(BOOL)arg2;
- (id)nextSiblingItem;
- (id)subitems;
- (double)timeEmitted;
- (id)title;
- (unsigned long long)totalNumberOfAnalyzerResults;
- (unsigned long long)totalNumberOfAnalyzerWarnings;
- (unsigned long long)totalNumberOfErrors;
- (unsigned long long)totalNumberOfItems;
- (unsigned long long)totalNumberOfWarnings;
- (BOOL)wasFetchedFromBuildCache;
- (void)writeToSerializer:(id)arg1;

@end

