//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationServiceProxy-Protocol.h>
#import <Navigation/MNNavigationSessionManagerDelegate-Protocol.h>
#import <Navigation/MNNavigationStateObserver-Protocol.h>

@protocol MNNavigationServiceClientInterface;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceLocalProxy : NSObject <MNNavigationStateObserver, MNNavigationSessionManagerDelegate, MNNavigationServiceProxy>
{
    id <MNNavigationServiceClientInterface> _delegate;
    NSUInteger _navigationServiceState;
    id /* CDUnknownBlockType */ _navigationServiceActiveBlock;
    id /* CDUnknownBlockType */ _navigationServiceActivePredictingBlock;
}

@property(nonatomic) __weak id <MNNavigationServiceClientInterface> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)navigationSessionManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;
- (void)navigationSessionManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;
- (void)navigationSessionManager:(id)arg1 triggerHaptics:(int)arg2;
- (void)navigationSessionManager:(id)arg1 didChangeVolume:(NSUInteger)arg2;
- (void)navigationSessionManager:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateAudioRouteSelection:(NSUInteger)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateCurrentAudioSettingForVoicePrompt:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateCurrentAudioSetting:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateAudioSettings:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
- (void)navigationSessionManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2;
- (void)navigationSessionManager:(id)arg1 hideJunctionViewForId:(id)arg2;
- (void)navigationSessionManager:(id)arg1 showJunctionView:(id)arg2;
- (void)navigationSessionManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)navigationSessionManager:(id)arg1 showLaneDirections:(id)arg2;
- (void)navigationSessionManager:(id)arg1 usePersistentDisplay:(BOOL)arg2;
- (void)navigationSessionManager:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationSessionManagerEndGuidanceUpdate:(id)arg1;
- (void)navigationSessionManagerBeginGuidanceUpdate:(id)arg1;
- (void)navigationSessionManagerHideSecondaryStep:(id)arg1;
- (void)navigationSessionManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationSessionManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(NSUInteger)arg2;
- (void)navigationSessionManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(NSUInteger)arg7 isSynthetic:(BOOL)arg8;
- (void)navigationSessionManager:(id)arg1 willAnnounce:(NSUInteger)arg2 inSeconds:(double)arg3;
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(NSUInteger)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(NSUInteger)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)navigationSessionManager:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(NSUInteger)arg4;
- (void)navigationSessionManager:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didFailRerouteWithError:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateRouteWithNewRideSelection:(id)arg2;
- (void)navigationSessionManagerDidCancelReroute:(id)arg1;
- (void)navigationSessionManager:(id)arg1 didRerouteWithRoute:(id)arg2 locationDetails:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationSessionManagerWillReroute:(id)arg1;
- (void)navigationSessionManager:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(NSUInteger)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateMotionType:(NSUInteger)arg2 confidence:(NSUInteger)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(NSUInteger)arg3 forRoute:(id)arg4;
- (void)navigationSessionManagerWillResumeFromPause:(id)arg1;
- (void)navigationSessionManagerWillPause:(id)arg1;
- (void)navigationSessionManagerDidTimeoutInArrivalRegion:(id)arg1;
- (void)navigationSessionManagerDidArrive:(id)arg1;
- (void)navigationSessionManagerDidEnterPreArrivalState:(id)arg1;
- (void)navigationSessionManager:(id)arg1 didUpdateStepIndex:(NSUInteger)arg2 legIndex:(NSUInteger)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSessionManager:(id)arg1 didFailWithError:(id)arg2;
- (void)navigationSessionManager:(id)arg1 willStartNavigationWithRoute:(id)arg2 navigationType:(int)arg3 request:(id)arg4 response:(id)arg5;
- (void)stateManagerPredictingDidArrive:(id)arg1;
- (void)stateManager:(id)arg1 didUpdatePossibleDestinations:(id)arg2;
- (NSUInteger)_serviceStateForStateType:(NSUInteger)arg1;
- (void)stateManager:(id)arg1 didChangeFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (void)stateManager:(id)arg1 willChangeFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)checkinForNavigationService:(id /* CDUnknownBlockType */)arg1;
- (void)updateGuidanceWithData:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)interfaceHashesWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)recordPedestrianTracePath:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)setTracePosition:(double)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTraceIsPlaying:(BOOL)arg1;
- (void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlert:(id)arg2;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)setRideIndex:(NSUInteger)arg1 forLegIndex:(NSUInteger)arg2;
- (void)setDisplayedStepIndex:(NSUInteger)arg1;
- (void)setIsConnectedToCarplay:(BOOL)arg1;
- (void)setGuidancePromptsEnabled:(BOOL)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
- (void)stopCurrentGuidancePrompt;
- (void)vibrateForPrompt:(NSUInteger)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
- (void)repeatCurrentTrafficAlertWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)repeatCurrentGuidanceWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)changeSettings:(id)arg1;
- (void)setFullGuidanceMode:(BOOL)arg1;
- (void)switchToRoute:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopPredictingDestinations;
- (void)startPredictingDestinationsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)stopNavigation;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(id /* CDUnknownBlockType */)arg2;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(NSUInteger)arg2;
- (void)reset;
- (void)start;
- (void)dealloc;
- (id)init;

@end
