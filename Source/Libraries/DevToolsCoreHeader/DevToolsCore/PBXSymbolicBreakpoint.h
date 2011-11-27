/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/PBXBreakpoint.h>

@class NSString;

@interface PBXSymbolicBreakpoint : PBXBreakpoint
{
    NSString *_symbolName;
    NSString *_fixedFile;
}

+ (id)archivableAttributes;
+ (id)breakpointForSymbolName:(id)arg1;
+ (id)breakpointForSymbolName:(id)arg1 withTextBookmark:(id)arg2;
- (long long)compareToBreakpoint:(id)arg1;
- (void)dealloc;
- (id)displayString;
@property(retain) NSString *fixedFile; // @synthesize fixedFile=_fixedFile;
- (id)gidCommentForArchive;
- (id)init;
- (id)initWithSymbolName:(id)arg1;
- (id)initWithSymbolName:(id)arg1 textBookmark:(id)arg2;
- (id)locationDisplay;
- (void)setLocation:(id)arg1;
- (void)setSymbolName:(id)arg1;
- (id)symbolName;

@end

