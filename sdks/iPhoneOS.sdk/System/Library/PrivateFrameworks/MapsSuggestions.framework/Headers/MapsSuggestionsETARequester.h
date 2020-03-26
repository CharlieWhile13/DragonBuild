//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class CLLocation, GEOAutomobileOptions, GEOComposedWaypoint, MNRouteUpdateFreshness, MNTimeballService, MapsSuggestionsETARequirements, MapsSuggestionsNetworkRequester, NSLock, NSMutableDictionary, NSString;
@protocol MapsSuggestionsPredictor, OS_dispatch_queue;

@interface MapsSuggestionsETARequester : NSObject <MapsSuggestionsObject>
{
    NSObject<OS_dispatch_queue> *_queue;
    CLLocation *_currentLocationUsed;
    GEOComposedWaypoint *_currentLocationWaypoint;
    NSMutableDictionary *_waypoints;
    NSLock *_waypointsLock;
    id <MapsSuggestionsPredictor> _transportModePredictor;
    int _forcedTransportMode;
    MapsSuggestionsETARequirements *_etaRequirements;
    MNTimeballService *_timeballService;
    MNRouteUpdateFreshness *_updateFreshness;
    int _mapType;
    MapsSuggestionsNetworkRequester *_requester;
    GEOAutomobileOptions *_automobileOptions;
}

@property int mapType; // @synthesize mapType=_mapType;
@property(retain) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property __weak MapsSuggestionsNetworkRequester *requester; // @synthesize requester=_requester;
// - (void).cxx_destruct;
- (BOOL)_timeball_requestETAsToEntries:(NSArray )arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)forceTransportType:(int)arg1;
- (BOOL)_old_requestETAsToEntries:(NSArray )arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)_requestETAsToEntries:(NSArray )arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)_determineTransportTypeFromOrigin:(id)arg1 toEntry:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)_transportTypesForDestinationEntries:(id)arg1;
- (BOOL)_requestWaypointsForEntries:(NSArray )arg1;
- (BOOL)_requestWaypointForCurrentLocation:(id)arg1;
- (BOOL)_keepExistingWaypointsForEntries:(NSArray )arg1;
@property(readonly, nonatomic) NSString *uniqueName;
- (BOOL)ETAsFromLocation:(id)arg1 toEntries:(NSArray )arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)initWithNetworkRequester:(id)arg1 transportModePredictor:(id)arg2 requirements:(id)arg3;

@end
