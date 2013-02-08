/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSCondition.h"

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition
{
    NSMutableArray *_runLoopStateList;
}

- (void)_signalRunLoopWithState:(id)arg1;
- (void)broadcast;
- (void)signal;
- (BOOL)_waitInMode:(id)arg1 untilDate:(id)arg2;
- (BOOL)waitUntilDate:(id)arg1 inMode:(id)arg2;
- (void)waitInMode:(id)arg1;
- (BOOL)waitUntilDate:(id)arg1;
- (void)wait;
- (void)dealloc;
- (id)init;

@end

