/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AVPlayer, AVPlayerItem, AVWeakReference, NSError, NSObject<OS_dispatch_queue>;

@interface AVPlayerConnection : NSObject
{
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    BOOL _shouldAppendItem;
    int _status;
    NSError *_error;
    AVPlayerItem *_previousPlayerItem;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serializationQueue;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) int status;
- (void)removeItemFromPlayQueue;
- (BOOL)addItemToPlayQueue;
@property(readonly, nonatomic) AVPlayerItem *playerItem;
@property(readonly, nonatomic) AVPlayer *player;
- (id)description;
- (void)dealloc;
- (id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2 shouldAppendItem:(BOOL)arg3;

@end

