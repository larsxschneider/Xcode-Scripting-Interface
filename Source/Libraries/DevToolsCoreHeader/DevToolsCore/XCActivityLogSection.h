/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableString, NSString, XCActivityLogSectionRecorder;

@interface XCActivityLogSection : NSObject
{
    unsigned long long _uniqueNumber;
    NSString *_title;
    double _timeOpened;
    double _timeClosed;
    NSMutableArray *_subsections;
    NSMutableString *_text;
    NSMutableArray *_messages;
    BOOL _wasCancelled;
    XCActivityLogSectionRecorder *_recorder;
}

+ (void)configureDeserializer:(id)arg1;
+ (unsigned long long)getNextUniqueLogSectionNumber;
+ (Class)logRecorderClass;
+ (id)sectionByDeserializingData:(id)arg1 error:(id *)arg2;
+ (unsigned long long)serializationFormatVersion;
- (void)configureSerializer:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initFromDeserializer:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (BOOL)isOpen;
- (void)logRecorder:(id)arg1 addMessage:(id)arg2;
- (void)logRecorder:(id)arg1 addSubsection:(id)arg2;
- (void)logRecorder:(id)arg1 appendText:(id)arg2;
- (void)logRecorder:(id)arg1 didStopRecordingWithInfo:(id)arg2;
- (void)logRecorder:(id)arg1 setWasCancelled:(BOOL)arg2;
- (id)messages;
- (id)recorder;
- (id)serializedData;
- (id)subsections;
- (id)text;
- (double)timeClosed;
- (double)timeOpened;
- (id)title;
- (unsigned long long)uniqueNumber;
- (BOOL)wasCancelled;
- (void)writeToSerializer:(id)arg1;

@end
