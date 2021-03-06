/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSMutableData;

@interface PBXProjectIndexBTree : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableData *_store;
    void *_compare;
    void *_printValue;
    const void *_context;
    struct dispatch_queue_s *_treeAccessQueue;
    _pbxbtreeheader_01a06060 *_header;
    _pbxbtreecursor_23e470bf _cursor;
}

- (void)_checkFreeList:(BOOL)arg1;
- (void)_deleteCurrentValue;
- (void)_deleteEntryAtCursor:(_pbxbtreecursor_81b114c9)arg1;
- (void)_deleteValueAtCursor:(_pbxbtreecursor_81b114c9)arg1;
- (unsigned int)_firstValue;
- (void)_insertEntry:(struct _pbxbtreeentry)arg1 atCursor:(_pbxbtreecursor_81b114c9)arg2;
- (void)_insertValue:(unsigned int)arg1 atCursor:(_pbxbtreecursor_81b114c9)arg2;
- (unsigned int)_lastValue;
- (void)_lock;
- (void)_lock:(_pbxbtreecursor_81b114c9 *)arg1;
- (unsigned long long)_newLeaf;
- (unsigned long long)_newNode;
- (unsigned int)_nextValueForKey:(const void *)arg1;
- (void)_unlock;
- (void)_unlock:(_pbxbtreecursor_81b114c9 *)arg1;
- (struct dispatch_queue_s *)accessQueue;
- (BOOL)containsValue:(unsigned int)arg1 forKey:(const void *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)deepDescription;
- (id)deepDescriptionOfNode:(unsigned long long)arg1 atDepth:(unsigned long long)arg2;
- (BOOL)deleteValue:(unsigned int)arg1 forKey:(const void *)arg2;
- (BOOL)deleteValueForKey:(const void *)arg1;
- (id)enumerator;
- (unsigned int)firstValue:(_pbxbtreecursor_81b114c9 *)arg1;
- (_pbxbtreeheader_01a06060 *)header;
- (id)initMaxWidth:(unsigned long long)arg1 lookupFailedValue:(unsigned int)arg2 keepUnique:(BOOL)arg3 comparisonFunction:(void *)arg4 comparisonContext:(const void *)arg5;
- (id)initWithContentsOfFile:(id)arg1 comparisonFunction:(void *)arg2 comparisonContext:(const void *)arg3;
- (id)initWithContentsOfFile:(id)arg1 comparisonFunction:(void *)arg2 keyForValueFunction:(void *)arg3 context:(const void *)arg4;
- (void)insertValue:(unsigned int)arg1 forKey:(const void *)arg2;
- (unsigned int)lastValue:(_pbxbtreecursor_81b114c9 *)arg1;
- (unsigned long long)maxDepth;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned int)nextValue:(_pbxbtreecursor_81b114c9 *)arg1;
- (unsigned int)nextValueForKey:(const void *)arg1 at:(_pbxbtreecursor_81b114c9 *)arg2;
- (unsigned long long)nodeCount;
- (unsigned int)previousValue:(_pbxbtreecursor_81b114c9 *)arg1;
- (void *)printValueFunction;
- (void)setPrintValueFunction:(void *)arg1;
- (id)shortDescriptionOfLeaf:(unsigned long long)arg1;
- (id)shortDescriptionOfNode:(unsigned long long)arg1;
- (unsigned int)valueForKey:(const void *)arg1;
- (unsigned int)valueForKey:(const void *)arg1 at:(_pbxbtreecursor_81b114c9 *)arg2;
- (BOOL)writeDataToFile:(id)arg1 queue:(struct dispatch_queue_s *)arg2;

@end

