/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AVFoundation/AVTrackGroup.h>

@class NSArray;

@interface AVAssetTrackGroup : AVTrackGroup
{
    id _assetComparisonToken;
    NSArray *_trackIDs;
}

- (id)trackIDs;
- (id)_assetComparisonToken;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAsset:(id)arg1 trackIDs:(id)arg2;

@end

