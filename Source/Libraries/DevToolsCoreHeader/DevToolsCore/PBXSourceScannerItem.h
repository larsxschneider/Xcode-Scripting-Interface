/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PBXScannerItem-Protocol.h"

@class NSMutableArray, NSString;

@interface PBXSourceScannerItem : NSObject <PBXScannerItem>
{
    NSString *name;
    NSMutableArray *children;
    int type;
    PBXSourceScannerItem *parent;
    struct _NSRange nameRange;
    struct _NSRange range;
    long long nestingLevel;
    long long indentLevel;
}

- (void)addChild:(id)arg1;
- (id)childAtIndex:(long long)arg1;
- (id)children;
- (long long)compareWithScannerItem:(id)arg1;
- (void)dealloc;
- (id)description;
- (long long)indentLevel;
- (id)initWithName:(id)arg1 type:(long long)arg2;
- (BOOL)isDeclaration;
- (id)name;
- (struct _NSRange)nameRange;
- (id)nameWithIndent;
- (long long)nestingLevel;
- (long long)numberOfChildren;
- (id)parent;
- (struct _NSRange)range;
- (void)setIndentLevel:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setNameRange:(struct _NSRange)arg1;
- (void)setNestingLevel:(long long)arg1;
- (void)setParent:(id)arg1;
- (void)setRange:(struct _NSRange)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end

