/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AVFoundation/AVVideoCompositionLayerInstruction.h>

@class AVMutableVideoCompositionLayerInstructionInternal;

@interface AVMutableVideoCompositionLayerInstruction : AVVideoCompositionLayerInstruction
{
    AVMutableVideoCompositionLayerInstructionInternal *_mutableLayerInstruction;
}

+ (id)videoCompositionLayerInstruction;
+ (id)videoCompositionLayerInstructionWithAssetTrack:(id)arg1;
- (void)setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)setOpacity:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setTransformRampFromStartTransform:(struct CGAffineTransform)arg1 toEndTransform:(struct CGAffineTransform)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)setTransform:(struct CGAffineTransform)arg1 atTime:(CDStruct_1b6d18a9)arg2;
@property(nonatomic) int trackID;

@end

