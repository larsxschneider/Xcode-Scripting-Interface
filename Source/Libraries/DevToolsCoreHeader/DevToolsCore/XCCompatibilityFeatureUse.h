/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class XCCompatibilityFeature, XCObjectGraphPath;

@interface XCCompatibilityFeatureUse : NSObject
{
    XCObjectGraphPath *_path;
    XCCompatibilityFeature *_feature;
}

- (void)dealloc;
- (id)description;
- (id)feature;
- (id)initWithFeature:(id)arg1 path:(id)arg2;
- (id)path;

@end

