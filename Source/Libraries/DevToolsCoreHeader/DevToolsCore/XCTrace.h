/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSOutputStream, NSString;

@interface XCTrace : NSObject
{
    int _lock;
    NSString *_filePackagePath;
    NSOutputStream *_timelineStream;
    double _baseTime;
}

+ (id)defaultTraceDirectoryPath;
+ (id)defaultTraceName;
+ (void)initialize;
+ (void)setCurrentThreadName:(unsigned int)arg1;
+ (id)sharedTrace;
- (void)addAttachment:(id)arg1 withName:(id)arg2;
- (void)addEvent:(id)arg1;
- (void)beginActivity:(id)arg1;
- (void)close;
- (void)dealloc;
- (void)endActivity:(id)arg1;
- (void)finalize;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

