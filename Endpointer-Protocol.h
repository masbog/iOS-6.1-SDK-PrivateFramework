/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol Endpointer <NSObject>
@property double endWaitTime;
@property double interspeechWaitTime;
@property double startWaitTime;
@property int endpointMode;
- (void)reset;
- (int)getStatus:(struct AudioQueueBuffer *)arg1;
- (BOOL)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned long)arg2;
@end

