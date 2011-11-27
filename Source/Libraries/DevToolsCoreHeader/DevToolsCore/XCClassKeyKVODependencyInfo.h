/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface XCClassKeyKVODependencyInfo : NSObject
{
    NSMutableDictionary *_contextToKeyData;
    NSString *_identifier;
    BOOL _kvoDebugLogging;
}

- (void)addObserversForObject:(id)arg1;
@property(readonly) NSMutableDictionary *contextToKeyData; // @synthesize contextToKeyData=_contextToKeyData;
- (void)dealloc;
- (BOOL)handleObservationForObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1;
@property BOOL kvoDebugLogging; // @synthesize kvoDebugLogging=_kvoDebugLogging;
- (void)removeObserversFromObject:(id)arg1;
- (void)setContextToKeyData:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKey:(id)arg1 dependentOnKeyPaths:(id)arg2;

@end
