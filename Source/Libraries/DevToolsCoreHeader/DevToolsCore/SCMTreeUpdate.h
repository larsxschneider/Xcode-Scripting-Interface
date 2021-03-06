/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/SCMActivity.h>

@class NSCalendarDate, NSString, SCMRevision;

@interface SCMTreeUpdate : SCMActivity
{
    NSString *_path;
    NSString *_author;
    NSCalendarDate *_date;
    int _status;
    int _repositoryStatus;
    SCMRevision *_revision;
    SCMRevision *_repositoryRevision;
    int _action;
    BOOL _isLeaf;
}

@property int action; // @synthesize action=_action;
- (id)activityMessage;
- (void)addXMLAttributes:(id)arg1;
- (void)applyToSandboxTree:(id)arg1;
@property(copy) NSString *author; // @synthesize author=_author;
- (id)childPathForRoot:(id)arg1;
- (id)createXMLElement;
@property(retain) NSCalendarDate *date; // @synthesize date=_date;
- (void)dealloc;
- (id)description;
- (id)initWithPath:(id)arg1;
@property BOOL isLeaf; // @synthesize isLeaf=_isLeaf;
@property(copy) NSString *path; // @synthesize path=_path;
@property(retain) SCMRevision *repositoryRevision; // @synthesize repositoryRevision=_repositoryRevision;
@property int repositoryStatus; // @synthesize repositoryStatus=_repositoryStatus;
@property(retain) SCMRevision *revision; // @synthesize revision=_revision;
- (id)sandboxEntryForRoot:(id)arg1;
@property int status; // @synthesize status=_status;

@end

