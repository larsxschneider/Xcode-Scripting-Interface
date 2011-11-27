/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCBuildLogSectionRecorder.h>

@class NSMutableArray, NSTimer, XCBuildOperation;

@interface XCBuildLogRecorder : XCBuildLogSectionRecorder
{
    XCBuildOperation *_buildOperation;
    NSMutableArray *_observers;
    NSMutableArray *_legacyObservers;
    NSMutableArray *_changeEvents;
    NSTimer *_timer;
}

- (void)_setBuildOperation:(id)arg1;
- (void)addLegacyObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)buildOperation;
- (void)dealloc;
- (id)initWithLogSection:(id)arg1;
- (id)legacyObservers;
- (void)noteDescendantLogSection:(id)arg1 didAddSubsection:(id)arg2;
- (void)noteDescendantLogSection:(id)arg1 didAppendText:(id)arg2;
- (void)noteDescendantLogSection:(id)arg1 message:(id)arg2 didAddMessage:(id)arg3;
- (void)noteDescendantLogSection:(id)arg1 willAddSubsection:(id)arg2;
- (void)noteDescendantLogSectionDidChange:(id)arg1;
- (void)noteDescendantLogSectionDidClose:(id)arg1 inSupersection:(id)arg2;
- (id)observers;
- (void)postBufferedNotifications;
- (void)postLogRecorderNotificationWithChangedParent:(id)arg1 addedChild:(id)arg2;
- (void)removeLegacyObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)section;
- (void)setTimeBuildFinished:(double)arg1;
- (void)stopRecordingWithInfo:(id)arg1;

@end

