/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/SCMActivity.h>

@interface SCMError : SCMActivity
{
    int _type;
}

+ (id)errorWithType:(int)arg1 message:(id)arg2;
- (void)addXMLAttributes:(id)arg1;
- (id)createXMLElement;
- (void)dealloc;
- (id)description;
- (id)initWithType:(int)arg1 message:(id)arg2;
@property int type; // @synthesize type=_type;

@end

