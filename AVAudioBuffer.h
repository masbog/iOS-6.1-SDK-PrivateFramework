/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface AVAudioBuffer : NSObject
{
    void *_impl;
}

- (void)setPacketDescriptions:(const struct AudioStreamPacketDescription *)arg1 count:(int)arg2;
@property(readonly) struct AudioStreamPacketDescription *packetDescriptions;
@property(readonly) int packetDescriptionCount;
@property(readonly) int packetDescriptionCapacity;
@property(readonly) void *data;
@property int bytesDataSize;
@property(readonly) int bytesCapacity;
@property(readonly) int channels;
- (id)initWithAudioQueueBuffer:(struct MyAudioQueueBuffer *)arg1 channels:(int)arg2;
- (void)dealloc;
- (void)finalize;

@end

