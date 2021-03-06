/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/PBXGroup.h>

@interface PBXVariantGroup : PBXGroup
{
}

+ (void)_replaceBuildFilesForReference:(id)arg1 withBuildFilesForReference:(id)arg2;
+ (id)referenceByUnwrappingVariantGroup:(id)arg1;
+ (id)variantGroupByWrappingReference:(id)arg1 isLocalized:(BOOL)arg2;
- (BOOL)allowsRemovalFromDisk;
- (id)copyWithZone:(struct _NSZone *)arg1 getUnretainedObjectMappings:(id *)arg2;
- (id)defaultReference;
- (BOOL)deleteFromProjectAndDisk:(BOOL)arg1;
- (id)destinationGroupForInsertion;
- (BOOL)ensureHasDefaultReference;
- (BOOL)isVariantGroup;
- (BOOL)makeGlobal;
- (BOOL)makeLocalized;
- (BOOL)makeVariantForRegion:(id)arg1;
- (void)pruneReferencesBySendingBooleanSelector:(SEL)arg1 toObject:(id)arg2 withContext:(void *)arg3;
- (id)referencesForBuilding;
- (void)removeItem:(id)arg1;
- (BOOL)setName:(id)arg1 syncDisk:(BOOL)arg2;
- (id)variantForRegion:(id)arg1;

@end

