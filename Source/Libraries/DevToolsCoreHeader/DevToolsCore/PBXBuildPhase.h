/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/PBXProjectItem.h>

#import "PBXContainerScriptingExtensions-Protocol.h"
#import "XCCompatibilityChecking-Protocol.h"

@class NSMutableArray, NSString, PBXTarget;

@interface PBXBuildPhase : PBXProjectItem <PBXContainerScriptingExtensions, XCCompatibilityChecking>
{
    NSString *_name;
    PBXTarget *_target;
    NSMutableArray *_buildFiles;
    NSMutableArray *_customBuildRules;
    unsigned long long _buildActionMask;
    BOOL _runOnlyForDeploymentPostprocessing;
}

+ (id)allowedFileTypes;
+ (id)archivableAttributes;
+ (id)archivableRelationships;
+ (id)archiveNameForKey:(id)arg1;
+ (id)buildPhase;
+ (id)buildPhaseFromTemplateDictionary:(id)arg1;
+ (id)defaultName;
+ (id)identifier;
- (BOOL)_isReferenceReallyInProject:(id)arg1;
- (void)_removeBuildFileFromChildrenOnly:(id)arg1;
- (void)_setBuildActionMask:(unsigned long long)arg1;
- (void)_setBuildFiles:(id)arg1;
- (void)_setTarget:(id)arg1;
- (void)_upgradeAfterAwakingFromUnarchiver:(id)arg1;
- (BOOL)acceptsReference:(id)arg1;
- (BOOL)acceptsReference:(id)arg1 checkFileType:(BOOL)arg2;
- (BOOL)acceptsVariantGroups;
- (BOOL)addBuildFile:(id)arg1;
- (void)addBuildFilePathsToFileList:(id)arg1;
- (void)addObject:(id)arg1;
- (BOOL)addReference:(id)arg1;
- (void)addRelevantToolSpecificationsForContext:(id)arg1 toSet:(id)arg2;
- (id)allowedFileTypes;
- (BOOL)allowsFileType:(id)arg1;
- (void)appendUserSettingsDictionariesTo:(id)arg1 defaultSettingsDictionariesTo:(id)arg2;
- (void)appendUserSettingsDictionariesTo:(id)arg1 defaultSettingsDictionariesTo:(id)arg2 forBuildConfigurationNamed:(id)arg3;
- (void)buildFileDidReorder:(id)arg1 oldIndex:(long long)arg2 newIndex:(long long)arg3;
- (id)buildFileForAbsolutePath:(id)arg1;
- (id)buildFileForReference:(id)arg1;
- (id)buildFileForReferenceIdenticalTo:(id)arg1;
- (id)buildFileForResolvedAbsolutePath:(id)arg1;
- (void)buildFileWasAdded:(id)arg1;
- (void)buildFileWillBeRemoved:(id)arg1;
- (id)buildFiles;
- (BOOL)canRename;
- (int)changeMask;
- (id)container;
- (BOOL)containsFileReferenceIdenticalTo:(id)arg1;
- (BOOL)containsFileReferenceSimilarTo:(id)arg1;
- (unsigned long long)countBuildFilesWithExtensionInSet:(id)arg1;
- (id)createDependencyGraphSnapshotForTargetSnapshot:(id)arg1;
- (id)createDependencyGraphSnapshotsForTargetSnapshot:(id)arg1;
- (id)customBuildRules;
- (void)dealloc;
- (Class)dependencyGraphSnapshotClass;
- (void)findFeaturesInUseAndAddToSet:(id)arg1 usingPathPrefix:(id)arg2;
- (id)gidCommentForArchive;
- (id)init;
- (id)initFromTemplateDictionary:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)inputFileNames;
- (BOOL)insertBuildFile:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)insertBuildFiles:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInBuildFiles:(id)arg1;
- (void)insertInBuildFiles:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 inCustomBuildRulesAtIndex:(unsigned long long)arg2;
- (BOOL)isDeletable;
- (id)linkedJavaClassArchivePathsUsingFrameworkJavaSubpaths:(id)arg1;
- (void)moveObject:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)name;
- (id)objectSpecifier;
- (id)outputFileNames;
- (BOOL)phaseContainsJavaFiles;
- (BOOL)phaseContainsNonJavaFiles;
- (id)presumedBuildConfigurationName;
- (id)primaryAttributeForBuildFile:(id)arg1;
- (void)referenceWillBeRemoved:(id)arg1;
- (void)referenceWillChange:(id)arg1;
- (void)removeBuildFile:(id)arg1;
- (void)removeFromBuildFilesAtIndex:(unsigned long long)arg1;
- (void)removeObject:(id)arg1;
- (void)removeObjectFromCustomBuildRulesAtIndex:(unsigned long long)arg1;
- (BOOL)removeReference:(id)arg1;
- (void)replaceInBuildFiles:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceObjectInCustomBuildRulesAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (BOOL)runOnlyForDeploymentPostprocessing;
- (void)setContainer:(id)arg1;
- (void)setCustomBuildRules:(id)arg1;
- (void)setDefaultAttributesForNewBuildFile:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRunOnlyForDeploymentPostprocessing:(BOOL)arg1;
- (id)stringByExpandingString:(id)arg1;
- (id)stringByExpandingString:(id)arg1 forBuildConfigurationNamed:(id)arg2;
- (id)stringByMakingExpandedPathAbsolute:(id)arg1;
- (id)target;
- (id)valueInBuildFilesAtIndex:(unsigned long long)arg1;
- (void)willChange;

@end

