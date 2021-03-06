/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, PBXTargetBuildContext, XCBuildableState;

@interface XCBuildStateStore : NSObject
{
    PBXTargetBuildContext *_buildContext;
    XCBuildableState *_buildableState;
    NSMutableDictionary *_nodeStatesByIdent;
    NSMutableDictionary *_commandStatesByIdent;
}

- (BOOL)archiveFormatVersionIsCompatible;
- (id)buildContext;
- (id)buildableState;
- (id)commandStateWithIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithBuildContext:(id)arg1;
- (id)longDescription;
- (id)nodeStateWithIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)readFromFileHandle:(struct __sFILE *)arg1;
- (void)writeToFileHandle:(struct __sFILE *)arg1;

@end

