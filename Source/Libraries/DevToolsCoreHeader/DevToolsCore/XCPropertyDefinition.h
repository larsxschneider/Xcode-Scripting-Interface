/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSSet, NSString, TSPropertyListDictionary, XCPropertyDomainSpecification, XCPropertyMacroExpression;

@interface XCPropertyDefinition : NSObject
{
    NSString *_name;
    _Bool _isUserDefined;
    _Bool _hasResolvedFileTypes;
    _Bool _uiShouldRemoveIfEmpty;
    _Bool _isAppleInternalOnly;
    id <XCPropertyTypes> _uiType;
    NSArray *_allowedValues;
    id _defaultValue;
    NSSet *_supportedArchs;
    NSSet *_supportedFileTypes;
    XCPropertyDomainSpecification *_domain;
    NSSet *_conditionFlavors;
    id _commandLineArgs;
    XCPropertyMacroExpression *_conditionExpression;
    NSDictionary *_additionalLinkerArgs;
    NSDictionary *_additionalLibrarianArgs;
    NSString *_categoryName;
    NSString *_nameOfOptionToPrecedeOnCL;
    NSString *_nameOfOptionToSucceedOnCL;
    NSString *_nameOfOptionToPrecedeInUI;
    NSString *_nameOfOptionToSucceedInUI;
    NSDictionary *_additionalBuildSettings;
    NSString *_localizedName;
    NSString *_localizedDescription;
    NSArray *_localizedAllowedValues;
    NSString *_defLocDesc;
    TSPropertyListDictionary *_properties;
}

+ (id)booleanPropertyDefinitionWithName:(id)arg1 defaultValue:(id)arg2;
+ (id)dbgAllPropertyDefinitions;
+ (id)enumerationPropertyDefinitionWithName:(id)arg1 allowedValues:(id)arg2 defaultValue:(id)arg3;
+ (id)identifier;
+ (void)initialize;
+ (BOOL)isListType;
+ (id)pathListPropertyDefinitionWithName:(id)arg1 defaultValue:(id)arg2;
+ (id)propertyDefinitionFromPListDictionary:(id)arg1;
+ (id)propertyValueFromStringRepresentation:(id)arg1 error:(id *)arg2;
+ (BOOL)registerPropertyType:(id)arg1 forPropertyNamed:(id)arg2;
+ (id)stringListPropertyDefinitionWithName:(id)arg1 defaultValue:(id)arg2;
+ (id)stringPropertyDefinitionWithName:(id)arg1 defaultValue:(id)arg2;
+ (id)stringRepresentationFromPropertyValue:(id)arg1 error:(id *)arg2;
+ (id)typeOfPropertyNamed:(id)arg1;
+ (BOOL)unregisterPropertyTypeForPropertyNamed:(id)arg1;
- (id)_generatedCommandLineArgumentsFromInstrux:(void *)arg1 forValue:(id)arg2 inContext:(id)arg3;
- (void)_loadLocalizationsFromPropertyListDictionary:(id)arg1 stringsDictionary:(id)arg2;
- (id)additionalBuildSettings;
- (id)allowedValues;
- (id)argumentGenerationInfoProvidersForValue:(id)arg1;
- (BOOL)canGenerateCommandLineArguments;
- (id)category;
- (id)categoryNameForUserInterface;
- (id)commandArgumentGenerationInfo;
- (id)conditionExpression;
- (id)conditionFlavors;
- (void)dealloc;
- (id)defaultValue;
- (id)definitionLocationDescription;
- (id)description;
- (id)generateArgumentsForCommand:(id)arg1 inBuildContext:(id)arg2;
- (id)generatedCommandLineArgumentsForValue:(id)arg1 inTargetBuildContext:(id)arg2;
- (id)init;
- (id)initFromPListDictionary:(id)arg1;
- (id)initWithName:(id)arg1 allowedValues:(id)arg2 defaultValue:(id)arg3 isAppleInternalOnly:(BOOL)arg4 commandLineArguments:(void *)arg5;
- (id)initWithName:(id)arg1 uiType:(id)arg2 allowedValues:(id)arg3 defaultValue:(id)arg4 isAppleInternalOnly:(BOOL)arg5 commandLineArguments:(void *)arg6;
- (BOOL)isAppleInternalOnly;
- (BOOL)isListType;
- (BOOL)isUserDefined;
- (id)localizedAllowedValues;
- (id)localizedDescription;
- (id)localizedName;
- (id)name;
- (id)nameOfOptionToPrecedeInUserInterface;
- (id)nameOfOptionToPrecedeOnCommandLine;
- (id)nameOfOptionToSucceedInUserInterface;
- (id)nameOfOptionToSucceedOnCommandLine;
- (void)printToStdout;
- (id)properties;
- (id)propertyDomain;
- (BOOL)propertyIsEnabledInPropertyExpansionContext:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setDefinitionLocationDescription:(id)arg1;
- (void)setPropertyDomain:(id)arg1;
- (void)setUserDefined:(BOOL)arg1;
- (id)supportedArchitectures;
- (id)supportedFileTypes;
- (BOOL)supportsArchitecture:(id)arg1;
- (BOOL)supportsFileType:(id)arg1;
- (id)type;
- (id)typeString;
- (BOOL)uiShouldRemoveIfEmptyValue;
- (id)uiType;
- (id)uiTypeString;
- (id)valueForUndefinedKey:(id)arg1;

@end

