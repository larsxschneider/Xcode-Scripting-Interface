/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/SCMRequest.h>

@class NSMutableDictionary, NSString;

@interface SCMTaskRequest : SCMRequest
{
    NSMutableDictionary *_environment;
    unsigned long long _uniqueRequestID;
    NSString *_launchPath;
    NSString *_directoryPath;
}

- (void)dealloc;
@property(copy) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
- (id)environment;
- (void)handleError:(id)arg1;
- (id)initWithModel:(id)arg1 repository:(id)arg2;
@property(copy) NSString *launchPath; // @synthesize launchPath=_launchPath;
- (BOOL)preflightCheck;
- (id)runDataTaskWithArguments:(id)arg1;
- (id)runDataTaskWithArguments:(id)arg1 forPaths:(id)arg2;
- (id)runTaskWithArguments:(id)arg1;
- (id)runTaskWithArguments:(id)arg1 forPaths:(id)arg2;
- (void)runTaskWithArguments:(id)arg1 forPaths:(id)arg2 outputParser:(id)arg3 outputParserSelector:(SEL)arg4;
- (void)runTaskWithArguments:(id)arg1 outputParser:(id)arg2 outputParserSelector:(SEL)arg3;
- (id)runTaskWithArguments:(id)arg1 withInput:(id)arg2;
- (id)runTaskWithTool:(id)arg1 withArguments:(id)arg2;
- (void)setSandboxPath:(id)arg1;
- (id)startActivityWithTask:(id)arg1;
- (BOOL)verifyExecutable;

@end

