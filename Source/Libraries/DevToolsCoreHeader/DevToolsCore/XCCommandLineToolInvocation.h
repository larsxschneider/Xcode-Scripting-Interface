/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString;

@interface XCCommandLineToolInvocation : NSObject
{
    NSString *_toolIdent;
    NSDictionary *_paramDict;
    NSString *_conditionPath;
}

- (id)conditionPath;
- (id)createDependenciesInBuildContext:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPropertyListDictionary:(id)arg1;
- (id)initWithToolIdentifier:(id)arg1 parameters:(id)arg2;
- (id)initWithToolIdentifier:(id)arg1 parameters:(id)arg2 conditionPath:(id)arg3;
- (id)parameterDictionary;
- (id)toolIdentifier;

@end

