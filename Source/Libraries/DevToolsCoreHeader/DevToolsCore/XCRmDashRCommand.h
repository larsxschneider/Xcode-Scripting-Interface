/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCWorkQueueCommand.h>

@class NSString;

@interface XCRmDashRCommand : XCWorkQueueCommand
{
    NSString *_path;
}

- (id)createStartedCommandInvocationInSlot:(unsigned long long)arg1 ofWorkQueueOperation:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)descriptionForWorkQueueLog;
- (id)initWithPath:(id)arg1;
- (id)instantiatedCommandOutputParserWithLogSectionRecorder:(id)arg1;
- (BOOL)isReadyForProcessing;
- (id)name;
- (id)path;
- (id)ruleInfo;
- (id)subprocessCommandLineForProcessing;

@end

