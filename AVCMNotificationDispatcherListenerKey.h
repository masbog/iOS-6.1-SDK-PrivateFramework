/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class AVWeakReference, NSString;

@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying>
{
    AVWeakReference *_weakReferenceToListener;
    void *_callback;
    NSString *_name;
    const void *_object;
}

+ (id)listenerKeyWithWeakReferenceToListener:(id)arg1 callback:(void *)arg2 name:(id)arg3 object:(const void *)arg4;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithWeakReferenceToListener:(id)arg1 callback:(void *)arg2 name:(id)arg3 object:(const void *)arg4;

@end

