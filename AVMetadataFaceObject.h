/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AVFoundation/AVMetadataObject.h>

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject
{
    AVMetadataFaceObjectInternal *_internal;
}

+ (id)derivedFaceObjectFromFaceObject:(id)arg1 withBounds:(struct CGRect)arg2 yaw:(float)arg3 roll:(float)arg4;
+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;
- (id)originalFaceObject;
@property(readonly) float yawAngle;
@property(readonly) BOOL hasYawAngle;
@property(readonly) float rollAngle;
@property(readonly) BOOL hasRollAngle;
@property(readonly) int faceID;
- (id)description;
- (void)dealloc;
- (id)initDerivedFaceObjectFromFaceObject:(id)arg1 withBounds:(struct CGRect)arg2 yaw:(float)arg3 roll:(float)arg4;
- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;

@end

