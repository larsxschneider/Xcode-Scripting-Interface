/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCDiffTextDataSource.h>

@interface XCDiffCharacterDataSource : XCDiffTextDataSource
{
}

+ (id)diffCharacterDataSourceWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
+ (void)initialize;
- (struct _XCDiffToken)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;

@end
