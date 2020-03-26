//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSAudioRecordContext;
@protocol OS_xpc_object;

@interface CSAudioStreamRequest : NSObject
{
    BOOL _requiresHistoricalBuffer;
    BOOL _useCustomizedRecordSettings;
    BOOL _lpcmIsFloat;
    BOOL _isSiri;
    unsigned int _lpcmBitDepth;
    unsigned int _numberOfChannels;
    unsigned int _encoderBitRate;
    CSAudioRecordContext *_recordContext;
    long long _audioFormat;
    double _sampleRate;
}

+ (id)requestForSpeexRecordSettingsWithContext:(id)arg1;
+ (id)requestForOpusRecordSettingsWithContext:(id)arg1;
+ (id)requestForLpcmRecordSettingsWithContext:(id)arg1;
+ (id)defaultRequestWithContext:(id)arg1;
@property(nonatomic) BOOL isSiri; // @synthesize isSiri=_isSiri;
@property(nonatomic) unsigned int encoderBitRate; // @synthesize encoderBitRate=_encoderBitRate;
@property(nonatomic) unsigned int numberOfChannels; // @synthesize numberOfChannels=_numberOfChannels;
@property(nonatomic) BOOL lpcmIsFloat; // @synthesize lpcmIsFloat=_lpcmIsFloat;
@property(nonatomic) unsigned int lpcmBitDepth; // @synthesize lpcmBitDepth=_lpcmBitDepth;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) long long audioFormat; // @synthesize audioFormat=_audioFormat;
@property(nonatomic) BOOL useCustomizedRecordSettings; // @synthesize useCustomizedRecordSettings=_useCustomizedRecordSettings;
@property(nonatomic) BOOL requiresHistoricalBuffer; // @synthesize requiresHistoricalBuffer=_requiresHistoricalBuffer;
@property(retain, nonatomic) CSAudioRecordContext *recordContext; // @synthesize recordContext=_recordContext;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
- (id)initWithXPCObject:(id)arg1;

@end
