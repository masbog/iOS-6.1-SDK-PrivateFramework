/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAsset, AVAudioMix, AVPlayerConnection, AVPlayerItem, AVPropertyStorage, AVVideoComposition, AVWeakReference, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface AVPlayerItemInternal : NSObject
{
    AVWeakReference *weakReference;
    AVPlayerItem *previousItem;
    AVPlayerItem *nextItem;
    struct OpaqueFigPlaybackItem *figPlaybackItem;
    struct OpaqueFigCPEProtector *figCPEProtector;
    struct OpaqueCMTimebase *figTimebase;
    AVWeakReference *playerReference;
    AVPlayerConnection *playerConnection;
    BOOL isCurrentPlayerItem;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    AVPropertyStorage *propertyStorage;
    int status;
    NSError *error;
    NSURL *URL;
    AVAsset *asset;
    AVAsset *assetWithFigPlaybackItem;
    NSArray *trackIDsForAssetWithFigPlaybackItem;
    NSObject<OS_dispatch_queue> *syncLayersQ;
    NSMutableArray *syncLayers;
    NSArray *timedMetadata;
    CDStruct_1b6d18a9 initialTime;
    CDStruct_1b6d18a9 initialToleranceBefore;
    CDStruct_1b6d18a9 initialToleranceAfter;
    CDStruct_1b6d18a9 initialForwardPlaybackEndTime;
    CDStruct_1b6d18a9 initialReversePlaybackEndTime;
    NSDate *initialDate;
    NSDate *initialEstimatedDate;
    BOOL initialLimitReadAhead;
    int initialPlaybackLikelyToKeepUpTrigger;
    BOOL initialAlwaysMonitorsPlayability;
    BOOL initialWillNeverSeekBackwardsHint;
    BOOL initialContinuesPlayingDuringPrerollForSeek;
    BOOL initialContinuesPlayingDuringPrerollForRateChange;
    double initialBufferingTargetMinimum;
    double initialBufferingTargetMaximum;
    struct __CFString *initialFigTimePitchAlgorithm;
    AVAudioMix *audioMix;
    AVVideoComposition *videoComposition;
    BOOL seekingWaitsForVideoCompositionRendering;
    NSArray *textStyleRules;
    NSDictionary *gaplessInfo;
    NSDictionary *audibleDRMInfo;
    NSDictionary *rampInOutInfo;
    float soundCheckVolumeNormalization;
    float volumeAdjustment;
    NSMutableArray *handlersToCallWhenReadyForEnqueueing;
    NSMutableDictionary *mediaOptionsSelectedByClient;
    NSMutableDictionary *tracksSelectedByClientViaAlternateTrackGroupSPI;
    BOOL haveInitialSamples;
    BOOL haveCPEProtector;
    BOOL didSetAssetToAssetWithFigPlaybackItem;
    BOOL didBecomeReadyForInspectionOfMediaSelectionOptions;
    BOOL didBecomeReadyForInspectionOfTracks;
    BOOL didBecomeReadyForInspectionOfPresentationSize;
    BOOL didInformObserversAboutAvailabilityOfTracks;
    BOOL didFireKVOForAssetForNonStreamingItem;
    BOOL didApplyInitialAudioMix;
    BOOL wasInitializedWithURL;
    BOOL needTimedMetadataNotification;
    BOOL nonForcedSubtitleDisplayEnabled;
    BOOL externalSubtitlesEnabled;
    BOOL externalProtectionRequested;
    int eqPreset;
    struct OpaqueFigSimpleMutex *seekIDMutex;
    int nextSeekIDToGenerate;
    int pendingSeekID;
    id seekCompletionHandler;
    NSString *dataYouTubeID;
    NSMutableArray *itemOutputs;
    NSMutableArray *itemVideoOutputs;
}

@end

