/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AVCaptureInputInternal, NSArray;

@interface AVCaptureInput : NSObject
{
    AVCaptureInputInternal *_inputInternal;
}

- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)didStartForSession:(id)arg1;
- (void)willStartForSession:(id)arg1;
- (id)notReadyError;
- (void)setSession:(id)arg1;
- (id)session;
@property(readonly, nonatomic) NSArray *ports;
- (void)dealloc;
- (id)init;

@end

