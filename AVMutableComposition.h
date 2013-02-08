/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AVFoundation/AVComposition.h>

@class AVMutableCompositionInternal, NSArray;

@interface AVMutableComposition : AVComposition
{
    AVMutableCompositionInternal *_mutablePriv;
}

+ (id)composition;
- (void)_notifyAllTracksThatSegmentsDidChange;
- (id)mutableTrackCompatibleWithTrack:(id)arg1;
- (void)removeTrack:(id)arg1;
- (id)addMutableTrackWithMediaType:(id)arg1 preferredTrackID:(int)arg2;
- (void)scaleTimeRange:(CDStruct_e83c9415)arg1 toDuration:(CDStruct_1b6d18a9)arg2;
- (void)removeTimeRange:(CDStruct_e83c9415)arg1;
- (void)insertEmptyTimeRange:(CDStruct_e83c9415)arg1;
- (BOOL)insertTimeRange:(CDStruct_e83c9415)arg1 ofAsset:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 error:(id *)arg4;
@property(nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) NSArray *tracks;
- (id)_newTrackForIndex:(long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithComposition:(id)arg1;

@end

