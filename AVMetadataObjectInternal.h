/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AVCaptureInput, NSString;

@interface AVMetadataObjectInternal : NSObject
{
    CDStruct_1b6d18a9 time;
    CDStruct_1b6d18a9 duration;
    struct CGRect bounds;
    NSString *type;
    AVCaptureInput *input;
}

@property(retain) AVCaptureInput *input; // @synthesize input;
@property(retain) NSString *type; // @synthesize type;
@property struct CGRect bounds; // @synthesize bounds;
@property CDStruct_1b6d18a9 duration; // @synthesize duration;
@property CDStruct_1b6d18a9 time; // @synthesize time;
- (void)dealloc;
- (id)init;

@end

