/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCRefactoringFileLocation.h>

@interface XCRefactoringTextFileLocation : XCRefactoringFileLocation
{
    struct _XCRefactoringLineInfo _lineInfo;
}

- (long long)compareFileLocationNoPath:(id)arg1;
- (id)description;
- (id)initWithFilePath:(id)arg1 lineInfo:(struct _XCRefactoringLineInfo)arg2;
- (BOOL)isEqualToFileLocation:(id)arg1;
- (struct _XCRefactoringLineInfo)lineInfo;

@end
