/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAssetReaderOutputInternal, AVWeakReference, NSDictionary, NSString;

@interface AVAssetReaderOutput : NSObject
{
    AVAssetReaderOutputInternal *_internal;
}

+ (void)initialize;
- (void)_figAssetReaderFailed;
- (void)_figAssetReaderDecodeError;
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)arg1;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (void)_cancelReading;
- (void)_markAsFinished;
- (BOOL)_isFinished;
- (BOOL)_enableTrackExtractionReturningError:(id *)arg1;
- (BOOL)_prepareForReadingReturningError:(id *)arg1;
@property(readonly, nonatomic, getter=_trimsSampleDurations) BOOL trimsSampleDurations;
@property(readonly, nonatomic, getter=_figAssetReaderExtractionOptions) NSDictionary *figAssetReaderExtractionOptions;
@property(nonatomic, getter=_extractionID, setter=_setExtractionID:) int extractionID;
@property(readonly, getter=_status) int status;
- (void)_attachToWeakReferenceToAssetReader:(id)arg1;
@property(readonly, nonatomic, getter=_weakReferenceToAssetReader) AVWeakReference *weakReferenceToAssetReader;
- (void)_setFigAssetReader:(struct OpaqueFigAssetReader *)arg1;
- (struct OpaqueFigAssetReader *)_figAssetReader;
- (id)_asset;
@property(nonatomic) BOOL alwaysCopiesSampleData;
@property(readonly, nonatomic) NSString *mediaType;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

