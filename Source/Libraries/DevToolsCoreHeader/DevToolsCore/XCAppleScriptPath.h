/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface XCAppleScriptPath : NSObject
{
    id _container;
    long long _index;
    NSString *_path;
}

- (void)_setPath:(id)arg1;
- (id)container;
- (void)dealloc;
- (void)handleMoveCommand:(id)arg1;
- (long long)index;
- (id)init;
- (void)insertPathIntoContainer:(id)arg1 atIndex:(long long)arg2 forCommand:(id)arg3;
- (id)mutableContainerArray;
- (id)objectSpecifierForKey:(id)arg1;
- (id)path;
- (void)setContainer:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setPath:(id)arg1;

@end

