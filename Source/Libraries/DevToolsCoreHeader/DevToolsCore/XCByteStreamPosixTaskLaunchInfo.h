/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCPosixTaskLaunchInfo.h>

@interface XCByteStreamPosixTaskLaunchInfo : XCPosixTaskLaunchInfo
{
    id <PBXTSByteStreamConsuming> _streamConsumer;
}

+ (Class)defaultTaskClass;
- (id)byteStreamConsumer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)setByteStreamConsumer:(id)arg1;

@end

