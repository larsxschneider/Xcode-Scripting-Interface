/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCOutputStream.h>

@interface XCFileOutputStream : XCOutputStream
{
    int _fileDescriptor;
    BOOL _closeFDWhenStreamIsClosed;
}

+ (id)nullFileOutputStream;
+ (id)stderrFileOutputStream;
+ (id)stdoutFileOutputStream;
- (void)_primitiveClose;
- (void)close;
- (void)dealloc;
- (void)finalize;
- (void)flush;
- (id)init;
- (id)initWithFileDescriptor:(int)arg1 closeFileDescriptorWhenStreamIsClosed:(BOOL)arg2;
- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;

@end
