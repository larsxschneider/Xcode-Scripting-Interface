/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XCSCMOperationDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSNumber, NSString, XCSCMOperation, XCSCMReferenceDictionary;

@interface XCSCMRequest : NSObject <XCSCMOperationDelegate>
{
    NSNumber *_idNumber;
    XCSCMReferenceDictionary *_referenceDictionary;
    XCSCMReferenceDictionary *_finishedReferenceDictionary;
    NSDictionary *_arguments;
    id <XCSCMRequestDelegate> _delegate;
    NSMutableArray *_queue;
    XCSCMOperation *_activeProcess;
    long long _totalOperationsToProcess;
    long long _successfulSteps;
    long long _totalSteps;
    NSString *_requestState;
}

+ (BOOL)authenticateDirectory:(id)arg1 forUser:(id)arg2 password:(id)arg3;
+ (BOOL)authenticateProject:(id)arg1 user:(id)arg2 password:(id)arg3;
+ (id)authenticationEnvironmentForDirectory:(id)arg1;
+ (id)authenticationEnvironmentForProject:(id)arg1;
+ (id)authenticationInfoForDirectory:(id)arg1;
+ (id)authenticationInfoForProject:(id)arg1;
+ (BOOL)isABranchFileReference:(id)arg1;
+ (BOOL)isAuthenticatedDirectory:(id)arg1 forProject:(id)arg2;
+ (BOOL)isAuthenticatedProject:(id)arg1;
+ (BOOL)isFileUnderSourceControl:(id)arg1 forProject:(id)arg2;
+ (BOOL)isWrapperFileReference:(id)arg1 forProject:(id)arg2;
+ (id)networkHostForDirectory:(id)arg1 forProject:(id)arg2;
- (void)_setActiveProcess:(id)arg1;
- (void)_setIdNumber:(id)arg1;
- (void)_setQueue:(id)arg1;
- (void)_setSuccessfulSteps:(long long)arg1;
- (id)argumentsDictionary;
- (void)cleanup;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)finishedReferences;
- (id)flattenReferencesFromArray:(id)arg1;
- (void)flushQueue;
- (unsigned long long)hash;
- (id)idNumber;
- (id)initWithID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)operation:(id)arg1 finishedParsingForItemAtPath:(id)arg2;
- (void)operation:(id)arg1 reportedError:(id)arg2;
- (void)operation:(id)arg1 reportedMessage:(id)arg2;
- (void)operation:(id)arg1 reportedObject:(id)arg2 forKey:(id)arg3 forItemAtPath:(id)arg4;
- (void)operation:(id)arg1 wasSuspendedWithCode:(id)arg2 message:(id)arg3;
- (void)performSetupForOperation:(id)arg1 withArguments:(id)arg2 references:(id)arg3;
- (void)queueOperation:(id)arg1;
- (void)queueOperationsFromArray:(id)arg1;
- (id)referenceForPath:(id)arg1;
- (id)references;
- (void)requestCompleted;
- (id)requestState;
- (void)resumeQueue;
- (void)run;
- (void)setArgumentsDictionary:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReferences:(id)arg1;
- (void)setRequestState:(id)arg1;
- (void)setTotalSteps:(long long)arg1;
- (id)sourceControlManager;
- (id)statusViewString;
- (long long)successfulSteps;
- (void)suspend;
- (void)suspendQueue;
- (long long)totalOperationsToProcess;
- (long long)totalSteps;
- (id)touchedReferences;

@end

