/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDate, NSMutableDictionary, NSString, NSURL;

@interface XCArchivedApplicationBuild : NSObject
{
    NSMutableDictionary *_archiveInfo;
    NSURL *_archiveURL;
    NSString *_uuid;
    NSString *_buildStatus;
}

+ (id)archivedApplicationBuildWithContentsOfURL:(id)arg1;
+ (id)keyPathsForValuesAffectingApplicationName;
+ (id)keyPathsForValuesAffectingApplicationVersion;
+ (id)keyPathsForValuesAffectingArchiveInfoURL;
+ (id)keyPathsForValuesAffectingArchivedDate;
+ (id)keyPathsForValuesAffectingBuildStatus;
+ (id)keyPathsForValuesAffectingBundleIdentifier;
+ (id)keyPathsForValuesAffectingContainedApplicationURL;
+ (id)keyPathsForValuesAffectingDisplayedStatus;
+ (id)keyPathsForValuesAffectingInfoPlist;
+ (id)keyPathsForValuesAffectingPlatformDisplayName;
+ (id)keyPathsForValuesAffectingPlatformIdentifier;
+ (id)keyPathsForValuesAffectingUserProvidedComment;
+ (id)keyPathsForValuesAffectingUserProvidedName;
+ (id)keyPathsForValuesAffectingValidationErrors;
- (void)_writeArchiveInfo;
@property(readonly) NSURL *applicationIconURL;
@property(readonly) NSString *applicationName;
@property(readonly) NSString *applicationVersion;
@property(retain) NSMutableDictionary *archiveInfo; // @synthesize archiveInfo=_archiveInfo;
@property(readonly) NSURL *archiveInfoURL;
@property(copy) NSURL *archiveURL; // @synthesize archiveURL=_archiveURL;
@property(readonly) NSDate *archivedDate;
@property(readonly) NSString *buildStatus;
@property(readonly) NSString *bundleIdentifier;
@property(readonly) NSURL *containedApplicationURL;
- (id)description;
- (id)displayedStatus;
- (unsigned long long)hash;
- (id)infoPlist;
- (id)initWithContentsOfURL:(id)arg1 info:(id)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSString *platformDisplayName;
@property(readonly) NSString *platformIdentifier;
- (void)setBuildStatus:(id)arg1;
@property(copy) NSString *userProvidedComment;
@property(copy) NSString *userProvidedName;
@property(copy) NSString *uuid; // @synthesize uuid=_uuid;
- (void)setValidationErrors:(id)arg1;
- (_Bool)usingFallbackClass;
@property(readonly) NSArray *validationErrors;

@end
