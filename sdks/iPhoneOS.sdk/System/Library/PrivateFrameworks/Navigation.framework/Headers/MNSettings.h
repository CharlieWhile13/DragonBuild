//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface MNSettings : NSObject <NSSecureCoding>
{
    NSUInteger _voiceVolume;
    NSUInteger _distanceUnits;
    BOOL _pauseSpokenAudio;
    BOOL _muteSpeechOverride;
    BOOL _speechEnabled;
    NSUInteger _maxAlternateRoutesCount;
    BOOL _drivingVoiceGuidance;
    BOOL _walkingVoiceGuidance;
    BOOL _beepBeforeInstruction;
    NSString *_voiceLanguage;
    double _etaRequestInterval;
    double _initialRequestDelay;
    double _backgroundTimeWindow;
    long long _fakeTrafficIncidentAlert;
    double _initialTraceSpeedMultiplier;
    BOOL _shouldLoadReroutesFromTrace;
    BOOL _shouldLoadETAUpdatesFromTrace;
    BOOL _isTracePlaybackCameraTestMode;
    BOOL _shouldRecordTrace;
    double _simulationSpeed;
    double _simulationGPSError;
    BOOL _shouldUseGuidanceEventManager;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL shouldUseGuidanceEventManager; // @synthesize shouldUseGuidanceEventManager=_shouldUseGuidanceEventManager;
@property(readonly, nonatomic) double simulationGPSError; // @synthesize simulationGPSError=_simulationGPSError;
@property(readonly, nonatomic) double simulationSpeed; // @synthesize simulationSpeed=_simulationSpeed;
@property(readonly, nonatomic) BOOL shouldRecordTrace; // @synthesize shouldRecordTrace=_shouldRecordTrace;
@property(readonly, nonatomic) BOOL isTracePlaybackCameraTestMode; // @synthesize isTracePlaybackCameraTestMode=_isTracePlaybackCameraTestMode;
@property(readonly, nonatomic) BOOL shouldLoadETAUpdatesFromTrace; // @synthesize shouldLoadETAUpdatesFromTrace=_shouldLoadETAUpdatesFromTrace;
@property(readonly, nonatomic) BOOL shouldLoadReroutesFromTrace; // @synthesize shouldLoadReroutesFromTrace=_shouldLoadReroutesFromTrace;
@property(readonly, nonatomic) double initialTraceSpeedMultiplier; // @synthesize initialTraceSpeedMultiplier=_initialTraceSpeedMultiplier;
@property(readonly, nonatomic) long long fakeTrafficIncidentAlert; // @synthesize fakeTrafficIncidentAlert=_fakeTrafficIncidentAlert;
@property(readonly, nonatomic) double backgroundTimeWindow; // @synthesize backgroundTimeWindow=_backgroundTimeWindow;
@property(readonly, nonatomic) double initialRequestDelay; // @synthesize initialRequestDelay=_initialRequestDelay;
@property(readonly, nonatomic) double etaRequestInterval; // @synthesize etaRequestInterval=_etaRequestInterval;
@property(readonly, nonatomic) BOOL beepBeforeInstruction; // @synthesize beepBeforeInstruction=_beepBeforeInstruction;
@property(readonly, nonatomic) BOOL walkingVoiceGuidance; // @synthesize walkingVoiceGuidance=_walkingVoiceGuidance;
@property(readonly, nonatomic) BOOL drivingVoiceGuidance; // @synthesize drivingVoiceGuidance=_drivingVoiceGuidance;
@property(readonly, nonatomic) NSUInteger maxAlternateRoutesCount; // @synthesize maxAlternateRoutesCount=_maxAlternateRoutesCount;
@property(readonly, nonatomic) BOOL speechEnabled; // @synthesize speechEnabled=_speechEnabled;
@property(readonly, nonatomic) BOOL muteSpeechOverride; // @synthesize muteSpeechOverride=_muteSpeechOverride;
@property(readonly, nonatomic) BOOL pauseSpokenAudio; // @synthesize pauseSpokenAudio=_pauseSpokenAudio;
@property(readonly, nonatomic) NSUInteger distanceUnits; // @synthesize distanceUnits=_distanceUnits;
@property(readonly, nonatomic) NSUInteger voiceVolume; // @synthesize voiceVolume=_voiceVolume;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *voiceLanguage;
- (id)init;

@end
