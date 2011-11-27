/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface XCCodeSignContext : NSObject
{
}

+ (id)_cachedCertificates;
+ (id)_cachedIdentifierIndex;
+ (id)_cachedIdentifiers;
+ (id)_certificateCache;
+ (id)_getKeychainSigningCertificates;
+ (void)_keychainEvent:(id)arg1;
+ (void)_rebuildCacheFromKeychainCertificates:(id)arg1;
+ (void)_rebuildCertificatesFromKeychain;
+ (void)_rebuildCertificatesFromKeychainAsync;
+ (id)certificateIdentitiesMatchingIdentityString:(id)arg1 inBuildContext:(id)arg2 withMessage:(id *)arg3;
+ (id)certificateIdentityMatchingIdentityString:(id)arg1 inBuildContext:(id)arg2 withMessage:(id *)arg3;
+ (id)chooseOneIdentityString:(id)arg1;
+ (id)codeSignArgumentsInTargetBuildContext:(id)arg1;
+ (id)codeSignContextClassFromContext:(id)arg1;
+ (id)codeSignIdentityMenu:(id)arg1;
+ (id)codeSignProductInTargetBuildContext:(id)arg1;
+ (id)codeSigningCertificates;
+ (id)codeSigningCertificatesHavingIdentity:(id)arg1;
+ (void)codeSigningNotAllowed:(id)arg1;
+ (id)defaultCodeSignIdentity;
+ (void)defineAuxiliaryFilesInTargetBuildContext:(id)arg1;
+ (void)defineCodeSignAuxiliaryFilesInTargetBuildContext:(id)arg1;
+ (void)deregisterForExternalNotifications;
+ (BOOL)doesStringSpecifyIdentity:(id)arg1;
+ (id)entitlementDependenciesInTargetBuildContext:(id)arg1 additionalEntitlements:(id)arg2;
+ (void)entitlementsNotApplicable:(id)arg1;
+ (void)initialize;
+ (BOOL)isAdHocIdentity:(id)arg1;
+ (void)noteCodeSigningSettingsDidChange;
+ (void)noteCodeSigningSettingsDidChangeForProject:(id)arg1;
+ (void)noteCodeSigningSettingsDidChangeNotification:(id)arg1;
+ (void)noteProfilesDidChangeNotification:(id)arg1;
+ (void)registerForExternalNotifications;
+ (void)resourceRulesNotApplicable:(id)arg1;
+ (id)stringProductTypeInSDK:(id)arg1;
+ (id)validateCodeSignIdentityInBuildContext:(id)arg1;
+ (BOOL)willCodeSignInContext:(id)arg1;

@end

