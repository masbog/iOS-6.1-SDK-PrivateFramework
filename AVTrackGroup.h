/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class AVTrackGroupInternal, NSArray;

@interface AVTrackGroup : NSObject <NSCopying>
{
    AVTrackGroupInternal *_trackGroup;
}

@property(readonly, nonatomic) NSArray *trackIDs;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

