/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/PBXBookmarkItem.h>

@class PBXFileReference;

@interface PBXBookmark : PBXBookmarkItem
{
    PBXFileReference *_fileReference;
    unsigned long long _timestamp;
}

+ (void)_addBookmarkToGlobalCache:(id)arg1;
+ (void)_removeBookmarkFromGlobalCache:(id)arg1;
+ (id)allBookmarks;
+ (id)archivableRelationships;
+ (id)archiveNameForKey:(id)arg1;
+ (id)bookmarkWithFileReference:(id)arg1;
+ (id)defaultWindowFrameAutosaveName;
+ (void)removeBookmarkFromGlobalCache:(id)arg1;
- (id)absolutePathname;
- (long long)comparePaths:(id)arg1;
- (void)dealloc;
- (id)defaultName;
- (id)fileReference;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFileReference:(id)arg1;
- (id)initWithFileReference:(id)arg1 timestamp:(unsigned long long)arg2;
- (id)innerDescription;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPath:(id)arg1;
- (id)objectSpecifier;
- (id)readFromPListUnarchiver:(id)arg1;
- (id)resolvedAbsolutePathname;
- (void)setContainer:(id)arg1;
- (unsigned long long)timestamp;

@end

