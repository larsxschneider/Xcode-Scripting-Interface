/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCSpecification.h>

@class NSString;

@interface PBXSCMSpecification : XCSpecification
{
    NSString *_classBaseName;
    BOOL _canAddDirectories;
    BOOL _canRenameFiles;
    BOOL _canPerformOffline;
    NSString *_repositoryClassName;
}

+ (id)localizedSpecificationTypeName;
+ (id)specificationRegistryName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
+ (id)specificationTypePathExtensions;
- (BOOL)canAddDirectories;
- (BOOL)canPerformOffline;
- (BOOL)canRenameFiles;
- (id)classBaseName;
- (void)dealloc;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;
- (Class)repositoryClass;
- (id)repositoryClassName;

@end

