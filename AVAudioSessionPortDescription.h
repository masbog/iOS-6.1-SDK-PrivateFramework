/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface AVAudioSessionPortDescription : NSObject
{
    void *_impl;
}

+ (id)privateCreatePortDescriptionsArrayWithCFArray:(struct __CFArray *)arg1;
+ (id)privateCreateWithCFDictionaryRef:(struct __CFDictionary *)arg1;
- (struct PortDescriptionImpl *)privateGetImplementation;
- (id)description;
@property(readonly) NSString *UID;
@property(readonly) NSArray *channels;
@property(readonly) NSString *portName;
@property(readonly) NSString *portType;
- (void)dealloc;
- (id)init;

@end

