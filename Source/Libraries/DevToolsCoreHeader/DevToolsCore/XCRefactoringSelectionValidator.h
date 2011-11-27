/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class XCTextSelectionSymbolInfo;

@interface XCRefactoringSelectionValidator : NSObject
{
    XCTextSelectionSymbolInfo *_selectionSymbolInfo;
    BOOL _isContextGathered;
    BOOL _canRefactor;
    BOOL _canRename;
    BOOL _canExtract;
    BOOL _canMoveUpInClassHierarchy;
    BOOL _canMoveDownInClassHierarchy;
    BOOL _canCreateSuperclass;
    BOOL _canEncapsulate;
    BOOL _canInlineFunction;
    BOOL _canModernizeLoop;
}

- (void)_determineCanCreateSuperclass;
- (void)_determineCanEncapsulate;
- (void)_determineCanExtract;
- (void)_determineCanInlineFunction;
- (void)_determineCanModernizeLoop;
- (void)_determineCanMoveDownInClassHierarchy;
- (void)_determineCanMoveUpInClassHierarchy;
- (void)_determineCanRename;
- (void)_gatherContext;
- (BOOL)canCreateSuperclass;
- (BOOL)canEncapsulate;
- (BOOL)canExtract;
- (BOOL)canInlineFunction;
- (BOOL)canModernizeLoop;
- (BOOL)canMoveDownInClassHierarchy;
- (BOOL)canMoveUpInClassHierarchy;
- (BOOL)canRefactor;
- (BOOL)canRename;
- (void)dealloc;
- (id)initWithSelectionSymbolInfo:(id)arg1;
- (id)selectionSymbolInfo;

@end
