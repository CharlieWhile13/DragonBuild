//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Celestial/FigCaptureSinkConfiguration.h>

@class NSArray;

@interface FigCaptureVideoPreviewSinkConfiguration : FigCaptureSinkConfiguration
{
    BOOL _depthDataDeliveryEnabled;
    BOOL _filterRenderingEnabled;
    NSArray *_filters;
    float _simulatedAperture;
    float _portraitLightingEffectStrength;
    BOOL _primaryCaptureRectModificationEnabled;
    double _primaryCaptureRectAspectRatio;
    CGPoint _primaryCaptureRectCenter;
    long long _primaryCaptureRectUniqueID;
}

@property(nonatomic) long long primaryCaptureRectUniqueID; // @synthesize primaryCaptureRectUniqueID=_primaryCaptureRectUniqueID;
@property(nonatomic) CGPoint primaryCaptureRectCenter; // @synthesize primaryCaptureRectCenter=_primaryCaptureRectCenter;
@property(nonatomic) double primaryCaptureRectAspectRatio; // @synthesize primaryCaptureRectAspectRatio=_primaryCaptureRectAspectRatio;
@property(nonatomic) BOOL primaryCaptureRectModificationEnabled; // @synthesize primaryCaptureRectModificationEnabled=_primaryCaptureRectModificationEnabled;
@property(nonatomic) float portraitLightingEffectStrength; // @synthesize portraitLightingEffectStrength=_portraitLightingEffectStrength;
@property(nonatomic) float simulatedAperture; // @synthesize simulatedAperture=_simulatedAperture;
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(nonatomic) BOOL filterRenderingEnabled; // @synthesize filterRenderingEnabled=_filterRenderingEnabled;
@property(nonatomic) BOOL depthDataDeliveryEnabled; // @synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled;
- (int)sinkType;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)init;

@end
