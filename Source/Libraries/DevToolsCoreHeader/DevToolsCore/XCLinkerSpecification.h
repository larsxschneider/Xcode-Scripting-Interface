/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCCommandLineToolSpecification.h>

@class NSArray;

@interface XCLinkerSpecification : XCCommandLineToolSpecification
{
    NSArray *_inputFileTypes;
}

+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
+ (id)specificationTypePathExtensions;
- (id)architectures;
- (void)dealloc;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;
- (id)inputFileTypes;

@end

