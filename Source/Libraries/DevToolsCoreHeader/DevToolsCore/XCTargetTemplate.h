/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, PBXProject;

@interface XCTargetTemplate : NSObject
{
    NSString *_templatePListPath;
    NSString *_templateName;
    PBXProject *_project;
    Class _templateClass;
    NSString *_templateDescription;
    BOOL _hasCachedPListInfo;
    BOOL _isPListBasedTemplate;
}

- (id)_plistDictForTargetName:(id)arg1;
- (id)_templateDictionaryForTargetName:(id)arg1;
- (void)cacheTemplateInfoFromPList;
- (id)categorizedTemplateName;
- (id)containingProject;
- (void)dealloc;
- (id)init;
- (id)initWithTargetClass:(Class)arg1 name:(id)arg2 containingProject:(id)arg3;
- (id)initWithTemplatePListPath:(id)arg1 name:(id)arg2 containingProject:(id)arg3;
- (id)name;
- (id)objectSpecifier;
- (id)targetWithName:(id)arg1;
- (Class)templateClass;
- (id)templateDescription;
- (id)templatePListPath;

@end

