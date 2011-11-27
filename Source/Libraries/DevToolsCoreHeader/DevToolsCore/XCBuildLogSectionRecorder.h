/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCActivityLogSectionRecorder.h>

@class NSThread;

@interface XCBuildLogSectionRecorder : XCActivityLogSectionRecorder
{
    NSThread *_recorderThread;
    BOOL _hasAddedErrorMessages;
}

- (void)_removeSubrecorder:(id)arg1;
- (void)_setSuperrecorder:(id)arg1;
- (void)addAnalyzerResultMessageWithTitle:(id)arg1;
- (void)addAnalyzerResultStepMessageWithTitle:(id)arg1;
- (id)addCommandInvocationSectionWithTitle:(id)arg1 ruleInfoDescription:(id)arg2 detailDescription:(id)arg3;
- (void)addContextInfoMessageWithTitle:(id)arg1;
- (void)addErrorMessageWithTitle:(id)arg1;
- (id)addGenericSectionWithTitle:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)addNoticeMessageWithTitle:(id)arg1;
- (void)addSubmessage:(id)arg1 toMessage:(id)arg2;
- (void)addSubsection:(id)arg1;
- (id)addUnitTestSectionWithTitle:(id)arg1;
- (void)addWarningMessageWithTitle:(id)arg1;
- (struct _NSRange)appendText:(id)arg1;
- (struct _NSRange)appendTextFormat:(id)arg1;
- (struct _NSRange)appendTextUTF8Bytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (void)didAddErrorMessage;
- (BOOL)hasAddedAnyErrorMessages;
- (id)initWithLogSection:(id)arg1;
- (struct _NSRange)mostRecentlyAppendedTextRange;
- (void)noteDescendantRecorderDidStopRecording:(id)arg1;
- (id)rememberedMessageForKey:(id)arg1;
- (id)section;
- (void)setIsQuiet:(BOOL)arg1;
- (void)setRememberedMessage:(id)arg1 forKey:(id)arg2;
- (void)setWasFetchedFromBuildCache:(BOOL)arg1;
- (void)stopRecordingWithInfo:(id)arg1;
- (void)subrecorderDidStopRecording:(id)arg1;
- (id)superrecorder;
- (id)topLevelRecorder;

@end

