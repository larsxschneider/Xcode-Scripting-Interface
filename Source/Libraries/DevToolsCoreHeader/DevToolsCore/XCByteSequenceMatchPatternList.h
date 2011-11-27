/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface XCByteSequenceMatchPatternList : NSObject
{
    NSArray *_patternsByLiteralFirstChar[96];
    NSArray *_otherPatternsByLiteralLastChar[96];
    NSArray *_otherPatterns;
    unsigned long long _maxNumberOfWildcards;
}

- (void)dealloc;
- (id)firstMatchForBytes:(const char *)arg1 length:(unsigned long long)arg2 wildcardRanges:(struct _NSRange *)arg3;
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;
- (id)initWithPatterns:(id)arg1;
- (unsigned long long)maximumNumberOfWildcards;

@end
