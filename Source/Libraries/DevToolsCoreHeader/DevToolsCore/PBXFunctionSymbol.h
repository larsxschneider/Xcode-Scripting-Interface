/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/PBXSymbol.h>

#import "PBXSignatureSymbol-Protocol.h"

@class NSArray, NSString;

@interface PBXFunctionSymbol : PBXSymbol <PBXSignatureSymbol>
{
    NSString *_cachedInvocation;
    NSString *_cachedUniqueName;
    NSArray *_cachedParameters;
}

+ (BOOL)canRepresentSymbolType:(int)arg1;
- (id)codeCompletionInvocationString;
- (void)dealloc;
- (id)declarationString;
- (id)displayNameIncludingClassInfo:(BOOL)arg1;
- (id)helpMarkerSymbolType;
- (id)invocationString;
- (id)invocationStringIncludeTarget:(BOOL)arg1;
- (id)parameters;
- (id)uniqueName;

@end

