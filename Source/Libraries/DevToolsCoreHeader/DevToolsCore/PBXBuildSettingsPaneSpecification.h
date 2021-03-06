/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCSpecification.h>

@class NSArray, NSString;

@interface PBXBuildSettingsPaneSpecification : XCSpecification
{
    NSString *_settingsDomainPath;
    NSString *_paneClassName;
    NSString *_paneFollows;
    NSArray *_widgets;
}

+ (id)localizedSpecificationTypeName;
+ (id)registeredSpecificationsSorted;
+ (Class)specificationBaseClass;
+ (id)specificationRegistryName;
+ (id)specificationType;
+ (id)specificationTypePathExtensions;
- (void)dealloc;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;
- (id)name;
- (Class)paneClass;
- (id)paneClassName;
- (id)paneFollows;
- (id)settingsDomainPath;
- (id)widgets;

@end

