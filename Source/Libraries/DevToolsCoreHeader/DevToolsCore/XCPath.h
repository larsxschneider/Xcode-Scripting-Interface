/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface XCPath : NSObject
{
    unsigned short _length;
    unsigned char _bytes[0];
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)pathWithBasePath:(id)arg1 pathComponents:(id)arg2;
+ (id)pathWithFileSystemRepresentation:(const char *)arg1;
+ (id)pathWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)pathWithPath:(id)arg1 relativeToPath:(id)arg2;
+ (id)pathWithPathComponents:(id)arg1;
+ (id)pathWithPrefixPath:(id)arg1 basePath:(id)arg2 pathComponents:(id)arg3;
+ (id)pathWithPrefixPath:(id)arg1 basePath:(id)arg2 pathComponents:(id *)arg3 count:(unsigned long long)arg4;
+ (id)pathWithString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isAbsolutePath;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLastPathComponentEqualToFileSystemRepresentation:(const char *)arg1;
- (BOOL)isLastPathComponentEqualToFileSystemRepresentation:(const char *)arg1 caseInsensitive:(BOOL)arg2;
- (BOOL)isPathSuffixEqualToFileSystemRepresentation:(const char *)arg1;
- (BOOL)isPathSuffixEqualToFileSystemRepresentation:(const char *)arg1 caseInsensitive:(BOOL)arg2;
- (id)lastPathComponent;
- (unsigned long long)length;
- (id)pathByRemovingLastPathComponent;
- (id)pathByRemovingPathSuffix;
- (id)pathSuffix;
- (id)stringRepresentation;
- (const char *)unretainedFileSystemRepresentation;

@end

