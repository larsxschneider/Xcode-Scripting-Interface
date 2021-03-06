/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCWorkQueueCommandInvocation.h>

@class NSArray, NSDictionary, NSInvocationOperation, NSString;

@interface XCWorkQueueCommandBuiltinInvocation : XCWorkQueueCommandInvocation
{
    NSArray *_arguments;
    NSDictionary *_environment;
    NSString *_workingDirPath;
    BOOL _isRunning;
    int _exitCode;
    NSInvocationOperation *_operation;
    int _outputFD;
    int _inputFD;
    int _taskOutputFD;
    int _taskInputFD;
}

- (BOOL)_startBuiltinTaskWithArguments:(id)arg1 environment:(id)arg2 workingDirectoryPath:(id)arg3;
- (void)cancel;
- (void)createOutputStreamIfNeeded;
- (void)dealloc;
- (int)emitMessage:(id)arg1;
- (int)emitMessageWithFormat:(id)arg1;
- (int)exitCode;
- (void)handleEndOfOutput;
- (void)handleInputFileDescriptorActivity;
- (void)handleOutputBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)handleOutputFileDescriptorActivity;
- (id)initWithSlotNumber:(unsigned long long)arg1 workQueueOperation:(id)arg2 workQueueCommand:(id)arg3 arguments:(id)arg4 environment:(id)arg5 workingDirectoryPath:(id)arg6;
- (int)inputFileDescriptor;
- (BOOL)isCancelled;
- (BOOL)isRunning;
- (int)outputFileDescriptor;
- (void)performTaskOperationWithContext:(id)arg1;
- (int)realExitCode;
- (int)runTaskWithArguments:(id)arg1 environment:(id)arg2 workingDirectoryPath:(id)arg3;
- (BOOL)startRunning;
- (void)stopJob;

@end

