//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKAudioControllerDelegate-Protocol.h>

@class CKAudioController, CKMessagePartChatItem, NSString;
@protocol CKFullScreenEffectDelegate;

@interface CKFullScreenEffect : NSObject <CKAudioControllerDelegate>
{
    CKAudioController *_audioController;
    float _currentVolume;
    BOOL messageOrientation;
    BOOL _triggeredByResponseKit;
    NSString *_identifier;
    CKMessagePartChatItem *_triggeringChatItem;
    id <CKFullScreenEffectDelegate> _delegate;
}

+ (id)stickerFilter;
+ (id)tapBackFilter;
+ (id)bigEmojiFilter;
+ (id)_monochromeDimmingFilterWithType:(int)arg1;
@property(nonatomic) __weak id <CKFullScreenEffectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKMessagePartChatItem *triggeringChatItem; // @synthesize triggeringChatItem=_triggeringChatItem;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) BOOL triggeredByResponseKit; // @synthesize triggeredByResponseKit=_triggeredByResponseKit;
@property(nonatomic) BOOL messageOrientation; // @synthesize messageOrientation;
// - (void).cxx_destruct;
- (BOOL)effectIsDark;
- (BOOL)_supportsSoundEffects;
- (void)_audioSessionOptionsWillChange:(id)arg1;
- (void)_didPrepareSoundEffect;
- (void)audioController:(id)arg1 didPrepareMediaObjectToPlay:(id)arg2 successfully:(BOOL)arg3;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)stopSoundEffect;
- (void)playSoundEffect;
- (void)prepareSoundEffect;
- (void)_ensureAudioPlayer;
- (void)clearMessageFiltersFromCells:(id)arg1;
- (void)applyMessageFiltersToTriggeringCell:(id)arg1;
- (void)animateFiltersForCell:(id)arg1;
- (void)applyMessageFiltersToCells:(id)arg1;
- (int)_filterTypeForCell:(id)arg1 caresAboutOrientation:(BOOL )arg2 orientation:(char )arg3;
- (void)dealloc;
- (BOOL)soundEffectHasHapticTrack;
- (id)soundEffectFileURL;
- (id)messageFilters;
- (id)backgroundColor;
- (double)duration;
- (BOOL)isForegroundEffect;
- (BOOL)shouldDrawOverNavigationBar;
- (Class)effectViewClass;
- (NSUInteger)layerCount;

@end
