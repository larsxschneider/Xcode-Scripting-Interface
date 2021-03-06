/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSMutableArray, NSMutableData, _XCIntegerVector;

@interface XCStructuredLog : NSObject
{
    NSMutableData *_entryData;
    NSMutableData *_subsectionTable;
    NSMutableArray *_subsections;
    _XCIntegerVector *_tableOfContents;
    NSData *_closedLogData;
}

- (unsigned long long)_appendEntryDataFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
- (void)appendMessageWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
- (void)appendMessageWithFormat:(id)arg1;
- (id)appendSubsectionWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
- (id)appendSubsectionWithFormat:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)displayStringAtIndex:(unsigned long long)arg1;
- (BOOL)doesEntryAtIndex:(unsigned long long)arg1 matchString:(id)arg2;
- (id)init;
- (unsigned long long)numEntries;
- (unsigned long long)numberOfLinesOfEntryAtIndex:(unsigned long long)arg1 forNumberOfCharacterColumns:(unsigned long long)arg2;
- (id)subsectionAtIndex:(unsigned long long)arg1;

@end

