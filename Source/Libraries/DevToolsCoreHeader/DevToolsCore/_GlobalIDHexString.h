/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface _GlobalIDHexString : NSString
{
    NSString *_theHexString;
    NSString *_archiveComment;
}

- (void)_appendPListDescriptionToUTF8Data:(id)arg1 withIndentLevel:(unsigned long long)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)hash;
- (id)initWithHexString:(id)arg1 archiveComment:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)length;
- (id)replacementObjectForCoder:(id)arg1;

@end

