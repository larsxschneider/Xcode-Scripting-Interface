/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/PBXTarget.h>

#import "XCProductPartOwners-Protocol.h"

@class NSMutableArray, NSMutableDictionary, PBXReference;

@interface PBXNativeTarget : PBXTarget <XCProductPartOwners>
{
    NSMutableArray *_productParts;
    PBXReference *_infoPlistRef;
    NSMutableDictionary *_infoPlistSettings;
}

+ (id)buildSystemDefaultBuildSettings;
+ (id)buildSystemDefaultBuildSettings_asPropertyValues;
- (void)_createProductPartsFromProductTypeTemplateParts;
- (void)_infoPlistReferenceDidMove:(id)arg1;
- (void)_unarchiverDidFinishUnarchiving:(id)arg1;
- (void)_updateObservingInfoPlistReference;
- (void)_writeOutInfoPlistSettingsUsing:(id)arg1;
- (void)addBandIBuildSettingsToDynamicallyComputedTargetBuildSettings:(id)arg1 withAction:(id)arg2 andConfigurationName:(id)arg3;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (id)builtProductsLocation;
- (id)builtProductsLocationForConfigurationNamed:(id)arg1;
- (BOOL)canInstallHeaders;
- (BOOL)canPackageHeaders;
- (void)dealloc;
- (Class)dependencyGraphSnapshotClass;
- (id)dynamicallyComputedOverridingTargetBuildSettingsWithExpansionContext:(id)arg1;
- (void)fileMayHaveChangedAtPath:(id)arg1;
- (id)fullProductNameForConfigurationNamed:(id)arg1;
- (BOOL)hasUserConfigurableBuildRules;
- (id)infoPlistFilePath;
- (id)infoPlistFilePathForConfigurationNamed:(id)arg1;
- (id)infoPlistSettings;
- (id)initWithName:(id)arg1 productTypeIdentifier:(id)arg2;
- (id)initWithName:(id)arg1 productTypeIdentifier:(id)arg2 baseDirectoryPath:(id)arg3;
- (id)intermediatesLocation;
- (id)intermediatesLocationForConfigurationNamed:(id)arg1;
- (BOOL)isJambased;
- (BOOL)isNative;
- (id)productPartForIdentifier:(id)arg1;
- (id)productParts;
- (id)productReferenceExpectedFileTypeForConfigurationNamed:(id)arg1;
- (BOOL)productReferenceIsExecutable;
- (id)productSettingForKey:(id)arg1;
- (id)productSettings;
- (BOOL)productSettingsAreValid;
- (void)rebuildCountedSetOfBuildFileBaseNamesInTargetBuildContext:(id)arg1;
- (void)referenceWasAdded:(id)arg1;
- (void)referenceWasRenamed:(id)arg1;
- (void)referenceWillBeRemoved:(id)arg1;
- (void)referenceWillChange:(id)arg1;
- (id)relevantToolSpecifications;
- (id)relevantToolSpecificationsForConfigurationNamed:(id)arg1;
- (id)relevantToolSpecificationsForConfigurationsNamed:(id)arg1;
- (void)removeProductSettingForKey:(id)arg1;
- (void)setInfoPlistSettings:(id)arg1;
- (void)setProductSetting:(id)arg1 forKey:(id)arg2;
- (void)setProductSettings:(id)arg1;
- (BOOL)shouldArchiveProductSettingsXML;
- (id)subpartsForProductPart:(id)arg1;
- (id)targetTypeDisplayName;
- (void)touchFileAtPath:(id)arg1;
- (void)untouchFileAtPath:(id)arg1;
- (void)voidInfoPlistSettingsCache;
- (BOOL)wantsProductSettings;
- (void)willChange;
- (void)writeOutInfoPlistSettings;

@end

