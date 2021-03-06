/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class XCDependencyInfoCache, XCPath;

@interface XCDependencyInfoCacheEntry : NSObject
{
    XCPath *_path;
    CDStruct_7eef4560 _buildCmdInputSignature;
    CDStruct_7eef4560 _buildCmdConfigSignature;
    CDStruct_7eef4560 _contentSignature;
    unsigned int _fileSize;
    XCDependencyInfoCache *_cache;
    XCDependencyInfoCacheEntry *_prevMRUCacheEntry;
    XCDependencyInfoCacheEntry *_nextMRUCacheEntry;
}

- (CDStruct_7eef4560)buildCommandConfigurationSignature;
- (CDStruct_7eef4560)buildCommandInputSignature;
- (CDStruct_7eef4560)contentSignature;
- (void)dealloc;
- (id)description;
- (unsigned int)fileSize;
- (id)init;
- (id)initFromFILE:(struct __sFILE *)arg1;
- (id)initWithPath:(id)arg1;
- (id)path;
- (void)setBuildCommandConfigurationSignature:(CDStruct_7eef4560)arg1;
- (void)setBuildCommandInputSignature:(CDStruct_7eef4560)arg1;
- (void)setContentSignature:(CDStruct_7eef4560)arg1;
- (void)setFileSize:(unsigned int)arg1;
- (void)writeToFILE:(struct __sFILE *)arg1;

@end

