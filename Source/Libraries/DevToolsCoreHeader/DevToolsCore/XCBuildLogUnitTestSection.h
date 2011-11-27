/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCBuildLogSection.h>

@class NSString;

@interface XCBuildLogUnitTestSection : XCBuildLogSection
{
    NSString *_testsPassedString;
    NSString *_durationString;
    NSString *_summaryString;
    NSString *_testName;
}

+ (Class)logRecorderClass;
- (void)dealloc;
@property(copy) NSString *durationString; // @synthesize durationString=_durationString;
- (id)initFromDeserializer:(id)arg1;
- (BOOL)isUnitTestSection;
- (void)logRecorder:(id)arg1 didStopRecordingWithInfo:(id)arg2;
@property(copy) NSString *summaryString; // @synthesize summaryString=_summaryString;
@property(copy) NSString *testName; // @synthesize testName=_testName;
@property(copy) NSString *testsPassedString; // @synthesize testsPassedString=_testsPassedString;
- (void)writeToSerializer:(id)arg1;

@end

