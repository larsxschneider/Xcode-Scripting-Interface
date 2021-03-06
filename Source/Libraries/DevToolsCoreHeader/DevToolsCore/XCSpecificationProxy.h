/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSError, NSString, TSPropertyListDictionary, XCSpecification, XCSpecificationCache;

@interface XCSpecificationProxy : NSObject
{
    Class _specTypeBaseClass;
    TSPropertyListDictionary *_propertyList;
    XCSpecification *_loadedSpecification;
    NSError *_loadError;
    XCSpecificationCache *_cache;
    struct _NSRange _cacheByteRange;
    NSString *_identifier;
    NSString *_proxyDomain;
}

+ (id)localizedSpecificationTypeName;
- (void)dealloc;
- (id)description;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)domain;
- (void)forwardInvocation:(id)arg1;
- (id)identifier;
- (long long)identifierCompare:(id)arg1;
- (id)initWithSpecificationTypeBaseClass:(Class)arg1 identifier:(id)arg2 cache:(id)arg3 byteRange:(struct _NSRange)arg4 inDomain:(id)arg5;
- (id)initWithSpecificationTypeBaseClass:(Class)arg1 propertyList:(id)arg2 inDomain:(id)arg3;
- (BOOL)isMissingSpecificationProxy;
- (BOOL)isNotYetLoadedSpecificationProxy;
- (id)loadedSpecification;
- (id)localizedDescription;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)name;
- (long long)nameCompare:(id)arg1;
- (id)objectOrNilForKey:(id)arg1;
- (id)properties;
- (id)specificationType;
- (Class)specificationTypeBaseClass;

@end

