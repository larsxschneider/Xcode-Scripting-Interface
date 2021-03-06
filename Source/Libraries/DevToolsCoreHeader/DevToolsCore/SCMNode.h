/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/SCMObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SCMNode : SCMObject
{
    NSMutableDictionary *_children;
    NSMutableArray *_childrenArray;
    NSString *_name;
    NSString *_cachedPath;
    void *_observationInfo;
    BOOL _isDirectory;
    BOOL _childrenChanged;
}

- (id)absolutePath;
- (void)adoptChild:(id)arg1;
- (void)adoptChildren:(id)arg1;
@property(copy) NSString *cachedPath; // @synthesize cachedPath=_cachedPath;
- (id)childForPath:(id)arg1;
- (id)childForPath:(id)arg1 create:(BOOL)arg2;
- (id)childForPathComponents:(id)arg1 create:(BOOL)arg2;
- (id)childWithName:(id)arg1 create:(BOOL)arg2;
- (id)children;
- (void)childrenWillChange;
- (long long)compare:(id)arg1;
- (id)createChildForPath:(id)arg1;
- (id)createChildWithName:(id)arg1;
- (void)dealloc;
- (id)describeTree:(long long)arg1;
- (id)description;
- (id)initWithModel:(id)arg1 parent:(id)arg2 name:(id)arg3;
@property BOOL isDirectory; // @synthesize isDirectory=_isDirectory;
@property(copy) NSString *name; // @synthesize name=_name;
- (void *)observationInfo;
- (id)path;
- (void)removeChild:(id)arg1;
- (void)removeChildForPath:(id)arg1;
- (void)removeChildren;
- (void)sendChangedMessage;
- (void)setObservationInfo:(void *)arg1;
- (void)setParent:(id)arg1;

@end

