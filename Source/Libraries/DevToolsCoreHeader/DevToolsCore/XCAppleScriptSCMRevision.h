/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PBXFileReference, XCSCMRevisionInfo;

@interface XCAppleScriptSCMRevision : NSObject
{
    PBXFileReference *_fileReference;
    XCSCMRevisionInfo *_revisionEntry;
}

- (id)author;
- (id)commitMessage;
- (void)dealloc;
- (id)fileReference;
- (id)initWithFileReference:(id)arg1 revisionData:(id)arg2;
- (id)name;
- (id)objectSpecifier;
- (id)revision;
- (id)tagName;
- (id)timestamp;

@end

