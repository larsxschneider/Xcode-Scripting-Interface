/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCDistributedBuildHost.h>

@class NSString;

@interface XCDistributedBuildLocalHost : XCDistributedBuildHost
{
    NSString *_distccVersion;
    NSString *_bonjourServiceName;
}

+ (void)initialize;
+ (BOOL)isLocalHostIdentifier:(id)arg1;
+ (id)localHost;
- (void)_allocateHost;
- (id)_getDistccVersion;
- (id)_launchInfoForLocalSystemInfoFetch;
- (id)bonjourServiceName;
- (void)clearHostInfo;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)hasCompiler:(id)arg1;
- (BOOL)hasSDK:(id)arg1;
- (id)init;
- (BOOL)isCompatibleDistccVersion:(id)arg1;
- (BOOL)isCompatibleHost;
- (BOOL)isCompatibleOSVersion:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLocalHost;
- (id)launchInfoForSystemInfoFetch;
- (id)sdkVersionForSDKPackage:(id)arg1;
- (void)setBonjourServiceName:(id)arg1;
- (id)setSystemInfoFromData:(id)arg1;
- (id)statusString;

@end
