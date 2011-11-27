/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/SCMModel.h>

#import "XCNetworkHostObserver-Protocol.h"

@class NSString, SCMRequest;

@interface SCMRepository : SCMModel <XCNetworkHostObserver>
{
    NSString *_system;
    NSString *_port;
    NSString *_host;
    NSString *_user;
    NSString *_password;
    NSString *_launchPath;
    NSString *_connectionStatusString;
    NSString *_connectionErrorString;
    SCMRequest *_connectionTestRequest;
    int _lastConnectionStatus;
    int _hostOnlineStatus;
    unsigned int _protocol;
    BOOL _authenticated;
    BOOL _online;
    BOOL _testedConnection;
    BOOL _needsConnectionTest;
    BOOL _testingConnection;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)repositoryConfigurationForPath:(id)arg1;
+ (id)systemIdentifier;
+ (id)systemName;
- (id)absolutePathForModelPath:(id)arg1;
@property BOOL authenticated; // @synthesize authenticated=_authenticated;
- (BOOL)canCheckout:(id)arg1;
- (BOOL)canCopy:(id)arg1;
- (BOOL)canCreateFolder:(id)arg1;
- (BOOL)canDelete:(id)arg1;
- (BOOL)canExport:(id)arg1;
- (BOOL)canImport:(id)arg1;
- (BOOL)canMove:(id)arg1;
- (void)checkoutOperation;
@property(copy) NSString *connectionErrorString; // @synthesize connectionErrorString=_connectionErrorString;
- (int)connectionStatus;
@property(copy) NSString *connectionStatusString; // @synthesize connectionStatusString=_connectionStatusString;
- (id)connectionStatusStringForStatusCode:(int)arg1;
@property(retain) SCMRequest *connectionTestRequest; // @synthesize connectionTestRequest=_connectionTestRequest;
- (BOOL)containsRootEntry:(id)arg1;
- (void)copyOperation;
- (id)createDirectoryEntryForPath:(id)arg1;
- (void)createOperation;
- (id)createRequestWithSelector:(SEL)arg1;
- (void)dealloc;
- (void)deleteOperation;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directoryEntryForPath:(id)arg1;
- (void)disconnect;
- (void)exportOperation;
- (void)finishConnectionTest:(id)arg1;
- (void)forceConnectionTest;
@property(copy) NSString *host; // @synthesize host=_host;
@property int hostOnlineStatus; // @synthesize hostOnlineStatus=_hostOnlineStatus;
- (void)importOperation;
- (void)infoOperation;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1 path:(id)arg2;
- (BOOL)isEqualToRepository:(id)arg1;
@property int lastConnectionStatus; // @synthesize lastConnectionStatus=_lastConnectionStatus;
@property(copy) NSString *launchPath; // @synthesize launchPath=_launchPath;
- (void)listOperation;
- (void)lockOperation;
- (void)logOperation;
- (void)loginOperation;
- (void)logoutOperation;
- (void)mkdirOperation;
- (void)moveOperation;
@property BOOL needsConnectionTest; // @synthesize needsConnectionTest=_needsConnectionTest;
- (void)networkHostOnlineStatusChanged:(BOOL)arg1;
@property BOOL online; // @synthesize online=_online;
- (BOOL)ownsSandboxAtPath:(id)arg1;
- (BOOL)ownsSandboxWithAttributes:(id)arg1;
@property(copy) NSString *password; // @synthesize password=_password;
- (id)passwordAccountName;
- (id)passwordServiceName;
@property(copy) NSString *port; // @synthesize port=_port;
- (void)propertiesOperation;
@property unsigned int protocol; // @synthesize protocol=_protocol;
- (void)refresh;
- (id)repository;
- (id)repositoryOffsetForSandboxAtPath:(id)arg1;
- (id)requestCheckoutFromPath:(id)arg1 toPath:(id)arg2 revision:(id)arg3;
- (id)requestCreateRepositoryForPath:(id)arg1;
- (id)requestExportFromPath:(id)arg1 toPath:(id)arg2 revision:(id)arg3;
- (id)requestImportFromPath:(id)arg1 toPath:(id)arg2 withMessage:(id)arg3;
- (id)requestInfoForPath:(id)arg1 revision:(id)arg2;
- (id)requestListForPath:(id)arg1 revision:(id)arg2;
- (id)requestLogForPath:(id)arg1 getAll:(BOOL)arg2 revision:(id)arg3 secondRevision:(id)arg4;
- (id)requestLogin;
- (id)requestLogout;
- (id)requestPropertiesForPath:(id)arg1 revision:(id)arg2;
- (Class)sandboxClass;
- (id)sandboxNibName;
- (void)setConnectionStatus:(int)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
@property(copy) NSString *system; // @synthesize system=_system;
@property BOOL testedConnection; // @synthesize testedConnection=_testedConnection;
@property BOOL testingConnection; // @synthesize testingConnection=_testingConnection;
@property(copy) NSString *user; // @synthesize user=_user;
- (id)settingsEditorNibName;
- (id)summary;
- (void)testConnection;
- (void)unlockOperation;
- (void)updateDirectoriesForPaths:(id)arg1;
- (void)updateDirectoryEntry:(id)arg1;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;

@end

