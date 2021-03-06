/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/PBXBuildPhase.h>

@class NSMutableArray, NSString;

@interface PBXShellScriptBuildPhase : PBXBuildPhase
{
    NSString *_shellPath;
    NSString *_shellScript;
    BOOL _showEnvVarsInLog;
    NSMutableArray *_inputPaths;
    NSMutableArray *_outputPaths;
}

+ (id)allowedExtensions;
+ (id)archivableAttributes;
+ (id)defaultName;
+ (id)defaultShellPath;
+ (id)identifier;
- (BOOL)acceptsReference:(id)arg1 checkFileType:(BOOL)arg2;
- (id)appleScriptInputPaths;
- (id)appleScriptOutputPaths;
- (BOOL)canRename;
- (void)dealloc;
- (Class)dependencyGraphSnapshotClass;
- (id)initFromTemplateDictionary:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)inputPaths;
- (void)insertInAppleScriptInputPaths:(id)arg1;
- (void)insertInAppleScriptInputPaths:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInAppleScriptOutputPaths:(id)arg1;
- (void)insertInAppleScriptOutputPaths:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)moveInputPath:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)moveOutputPath:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)outputPaths;
- (id)readFromPListUnarchiver:(id)arg1;
- (void)removeFromAppleScriptInputPathsAtIndex:(unsigned long long)arg1;
- (void)removeFromAppleScriptOutputPathsAtIndex:(unsigned long long)arg1;
- (void)replaceInAppleScriptInputPaths:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceInAppleScriptOutputPaths:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setInputPaths:(id)arg1;
- (void)setOutputPaths:(id)arg1;
- (void)setShellPath:(id)arg1;
- (void)setShellScript:(id)arg1;
- (void)setShowEnvVarsInLog:(BOOL)arg1;
- (id)shellPath;
- (id)shellScript;
- (BOOL)shouldArchiveShowEnvVarsInLog;
- (BOOL)showEnvVarsInLog;
- (id)valueInAppleScriptInputPathsAtIndex:(unsigned long long)arg1;
- (id)valueInAppleScriptOutputPathsAtIndex:(unsigned long long)arg1;

@end

