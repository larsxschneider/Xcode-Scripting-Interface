/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/PBXBookmarkItem.h>

@class NSMutableArray;

@interface PBXBookmarkGroup : PBXBookmarkItem
{
    NSMutableArray *_children;
}

+ (id)archivableRelationships;
- (void)_setChildren:(id)arg1;
- (void)_setChildrensContainer:(id)arg1;
- (BOOL)acceptsChild:(id)arg1;
- (void)addChild:(id)arg1;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (id)children;
- (id)childrenBookmarksForFileReference:(id)arg1;
- (id)childrenBookmarksForFilename:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)insertChildren:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)isAncestorOfChild:(id)arg1;
- (id)readFromPListUnarchiver:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)setBookmarkGroup:(id)arg1;
- (void)setContainer:(id)arg1;
- (BOOL)shouldArchiveChildren;

@end

