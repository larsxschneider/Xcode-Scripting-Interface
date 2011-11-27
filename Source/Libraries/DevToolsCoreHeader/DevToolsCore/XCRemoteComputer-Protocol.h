/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class NSMutableDictionary, NSString, XCPlatformSpecification;

@protocol XCRemoteComputer <NSObject>
+ (BOOL)handleDroppedFile:(id)arg1;
+ (void)loadOrganizerCategories;
+ (BOOL)shouldHandleDroppedFile:(id)arg1;
@property(readonly) NSString *cachePath;
- (BOOL)canExecute;
@property(readonly) BOOL canRenameDevice;
- (id)currentRemoteExecutable;
@property(readonly) NSMutableDictionary *data;
- (int)debuggerArchitectureMode;
- (id)debuggerAttachList;
@property(readonly) NSString *deviceArchitecture;
@property(readonly) BOOL deviceAvailable;
@property(readonly) BOOL deviceHasUI;
@property(readonly) NSString *deviceIdentifier;
@property(readonly) BOOL deviceIsBusy;
@property BOOL deviceIsIgnored;
@property(readonly) BOOL deviceIsTransient;
@property(readonly) NSString *deviceName;
@property(readonly) NSString *deviceSoftwareVersion;
- (void)didExecute:(id)arg1;
- (void)invalidate;
@property(readonly) XCPlatformSpecification *platform;
@property(readonly) NSString *platformIdentifier;
- (BOOL)preflightExecutable:(id)arg1;
- (void)renameDevice:(id)arg1;
- (id)setCurrentExecutable:(id)arg1;
- (BOOL)shouldApplicationTerminate;
- (BOOL)useAsyncWillExecute;
- (void)willBeForgotten;
- (BOOL)willExecute:(id)arg1 debug:(BOOL)arg2 onPort:(long long *)arg3 performInstall:(BOOL)arg4;
- (void)willExecuteAsync:(id)arg1 shouldInstall:(BOOL)arg2;
- (void)willExecuteCompleted;
- (void)willExecuteFailed;

@optional
+ (_Bool)archiveApplicationAtURL:(id)arg1 error:(id *)arg2;
@end

