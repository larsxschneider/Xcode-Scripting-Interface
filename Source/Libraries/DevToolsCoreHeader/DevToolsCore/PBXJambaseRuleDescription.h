/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString, XCCommandLineToolSpecification;

@interface PBXJambaseRuleDescription : NSObject
{
    NSString *_jambaseRuleName;
    unsigned long long _inputFileRuleParamIndex;
    unsigned long long _outputFileRuleParamIndex;
    unsigned long long _compiledCodeFileRuleParamIndex;
    NSString *_progressStatusFormat;
    NSString *_distProgressStatusFormat;
    NSString *_messageStatusFormat;
    NSString *_distMessageStatusFormat;
    NSArray *_outputParseRuleArray;
    NSArray *_outputParseRules;
    BOOL _isQuiet;
    BOOL _useMessageFilenameAsTopLevel;
    BOOL _multipleInputFiles;
    XCCommandLineToolSpecification *_nativeCommandLineToolSpec;
    NSArray *_outputParserClassesOrRules;
}

+ (id)_loadJambaseRuleDescriptionsFromPListFileAtPath:(id)arg1;
+ (id)jambaseRuleDescriptionForRuleNamed:(id)arg1;
- (id)commandOutputParserClassesOrParseRules;
- (unsigned long long)compiledCodeFileRuleParamIndex;
- (void)dealloc;
- (id)description;
- (id)distributedMessageStatusFormat;
- (id)distributedProgressStatusFormat;
- (id)init;
- (id)initWithJambaseRuleName:(id)arg1 propertyListDictionary:(id)arg2;
- (unsigned long long)inputFileRuleParamIndex;
- (id)instantiatedCommandOutputParserWithLogSectionRecorder:(id)arg1;
- (BOOL)isQuiet;
- (id)messageStatusFormat;
- (BOOL)multipleInputFiles;
- (unsigned long long)outputFileRuleParamIndex;
- (id)outputParseRules;
- (id)progressStatusFormat;
- (BOOL)useMessageFilenameAsTopLevel;

@end

