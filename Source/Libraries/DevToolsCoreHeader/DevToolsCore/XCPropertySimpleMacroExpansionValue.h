/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCPropertyValue.h>

@interface XCPropertySimpleMacroExpansionValue : XCPropertyValue
{
    XCPropertyValue *_macroNameValue;
}

- (void)assertInternalConsistency;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)evaluateAsStringInContext:(id)arg1 withNestingState:(const void *)arg2;
- (id)initWithMacroNameValue:(id)arg1;
- (id)propertyValueDebugDescription;

@end

