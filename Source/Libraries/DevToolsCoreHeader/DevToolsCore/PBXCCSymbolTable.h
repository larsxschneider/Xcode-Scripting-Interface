/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface PBXCCSymbolTable : NSObject
{
    NSMutableArray *scopes;
}

- (void)addSymbol:(id)arg1;
- (id)allSymbols;
- (void)dealloc;
- (id)description;
- (id)enclosingContainer;
- (id)getSymbolWithName:(id)arg1;
- (id)importedTypeWithName:(id)arg1;
- (id)init;
- (void)popScope;
- (void)pushScope;
- (void)pushScope:(id)arg1;
- (id)scopes;

@end
