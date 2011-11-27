/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/PBXProjectItem.h>

@class NSMutableArray, NSString;

@interface XCObjectBucket : PBXProjectItem
{
    NSMutableArray *_objects;
    NSString *_name;
}

+ (id)archivableAttributes;
+ (id)archivableRelationships;
- (void)addObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (id)asFlattenedArray;
- (void)dealloc;
- (BOOL)findAndRemoveObject:(id)arg1;
- (void)flattenIntoArray:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)isAncestorOf:(id)arg1;
- (id)name;
- (id)objects;
- (void)removeObject:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObjects:(id)arg1;

@end

