/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, PBXProjectIndex;

@interface PBXIndexEntry : NSObject
{
    PBXProjectIndex *_projectIndex;
    union _pbxsymbollocation _location;
    NSString *_sourceFile;
}

- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithProjectIndex:(id)arg1 location:(union _pbxsymbollocation)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)lineNumber;
- (union _pbxsymbollocation)location;
- (id)project;
- (id)projectIndex;
- (unsigned int)rawLocation;
- (id)sourceFile;

@end
