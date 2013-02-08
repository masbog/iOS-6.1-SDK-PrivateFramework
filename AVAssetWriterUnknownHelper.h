/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AVFoundation/AVAssetWriterHelper.h>

@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper
{
    short _alternateGroupID;
}

- (void)cancelWriting;
- (void)startWriting;
- (void)addInputGroup:(id)arg1;
- (BOOL)canAddInputGroup:(id)arg1;
- (BOOL)_canAddInputGroup:(id)arg1 exceptionReason:(id *)arg2;
- (void)addInput:(id)arg1;
- (BOOL)canAddInput:(id)arg1;
- (BOOL)_canAddInput:(id)arg1 exceptionReason:(id *)arg2;
- (void)setMovieTimeScale:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (void)setMovieFragmentInterval:(CDStruct_1b6d18a9)arg1;
- (int)status;
- (id)initWithURL:(id)arg1 fileType:(id)arg2;
- (id)initWithConfigurationState:(id)arg1;

@end

