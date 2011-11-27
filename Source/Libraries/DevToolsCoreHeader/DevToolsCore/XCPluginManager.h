/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSSet, NSString;

@interface XCPluginManager : NSObject
{
    unsigned long long _directory;
    unsigned long long _domainMask;
    NSMutableArray *_searchPaths;
    NSArray *_subpaths;
    NSSet *_extensions;
    NSSet *_pluginStopList;
    NSMutableArray *_plugins;
    NSString *_extraPlugInPathsDefaultName;
    BOOL _includeUIPlugins;
}

+ (id)sharedPluginManager;
- (void)dealloc;
- (id)extrasPlugInPathsDefaultName;
- (void)findAndLoadPlugins;
- (void)findAndLoadPluginsInDomain:(id)arg1;
- (BOOL)includeUIPlugins;
- (id)init;
- (BOOL)loadPluginBundle:(id)arg1;
- (id)loadedPlugins;
- (id)pluginExtensions;
- (id)pluginStopList;
- (unsigned long long)searchPathDirectory;
- (unsigned long long)searchPathDomainMask;
- (id)searchPathSubpaths;
- (id)searchPaths;
- (void)setExtrasPlugInPathsDefaultName:(id)arg1;
- (void)setIncludeUIPlugins:(BOOL)arg1;
- (void)setPluginExtensions:(id)arg1;
- (void)setPluginStopList:(id)arg1;
- (void)setSearchPathDirectory:(unsigned long long)arg1;
- (void)setSearchPathDomainMask:(unsigned long long)arg1;
- (void)setSearchPathSubpaths:(id)arg1;
- (void)setSearchPaths:(id)arg1;

@end

