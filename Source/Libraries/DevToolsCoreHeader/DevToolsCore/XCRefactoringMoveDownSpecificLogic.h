/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCRefactoringTransformationSpecificLogic.h>

@class NSArray;

@interface XCRefactoringMoveDownSpecificLogic : XCRefactoringTransformationSpecificLogic
{
    NSArray *_nibProblems;
}

- (void)_releaseObjectsForNewPreview;
- (void)dealloc;
- (BOOL)getClass:(Class *)arg1 declaration:(id *)arg2 fromASTNode:(id)arg3 mainThreadArguments:(id)arg4 error:(id *)arg5;
- (id)localizedSnapshotTitle:(id)arg1;
- (BOOL)mainThreadArgumentsAreAvailable:(id)arg1 error:(id *)arg2;
- (BOOL)modifyProblems:(id)arg1 parseThreadArguments:(id)arg2 error:(id *)arg3;
- (id)preliminaryRelatedNames:(id)arg1;
- (id)setUpInfo:(id)arg1;
- (id)transformParamDict:(id)arg1;
- (BOOL)userInputIsAvailable:(id)arg1 error:(id *)arg2;

@end

