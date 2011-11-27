/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCAttributeRun.h>

@class NSMutableSet;

@interface XCJournaledAttributeRun : XCAttributeRun
{
    unsigned long long operationInProgress;
    NSMutableSet *allAttributes;
    struct {
        int op;
        struct _NSRange range;
        void *attrs;
    } recentOperations[1024];
    long long nextJournalEntry;
    XCAttributeRun *checkpoint;
    BOOL dontDumpState;
    BOOL changeTrackingErrorEncountered;
}

+ (void)replayTrackingFile:(id)arg1;
+ (id)restoreFromReplayData:(id)arg1;
- (void *)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)checkpoint;
- (void)dealloc;
- (void)deleteRange:(struct _NSRange)arg1;
- (id)initWithObjectAttributes:(BOOL)arg1 coalescesAttributes:(BOOL)arg2;
- (void)insertAttributes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)replayOperation:(id)arg1;
- (void)setAttributes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)trackOperation:(int)arg1 range:(struct _NSRange)arg2 attributes:(void *)arg3;
- (void)trackingError:(id)arg1;

@end

