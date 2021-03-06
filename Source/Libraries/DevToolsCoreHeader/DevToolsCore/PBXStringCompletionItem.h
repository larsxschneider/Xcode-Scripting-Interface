/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PBXCompletionItem-Protocol.h"

@class NSImage, NSString;

@interface PBXStringCompletionItem : NSObject <PBXCompletionItem>
{
    NSString *_name;
    NSString *_localizedName;
    long long _priority;
    NSImage *_icon;
}

- (id)completionText;
- (void)dealloc;
- (id)description;
- (id)descriptionText;
- (id)displayText;
- (id)displayType;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedName;
- (id)name;
- (long long)priority;
- (void)setIcon:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setPriority:(long long)arg1;

@end

