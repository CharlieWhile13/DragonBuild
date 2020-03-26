//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXForYouSettings : PXSettings
{
    BOOL _showForYouSettingsAtTopLevel;
    BOOL _showMemories;
    BOOL _showSharedAlbumActivity;
    BOOL _showCMMSuggestions;
    BOOL _showCMMInvitations;
    BOOL _showEditSuggestions;
    BOOL _showRecentInterestSuggestions;
    BOOL _showQuestions;
    BOOL _showFooter;
    BOOL _showSampleSuggestionGadgets;
    BOOL _showVerticalSampleGadgets;
    BOOL _showHorizontalGadget;
    BOOL _allowVideoPlayback;
    BOOL _allowLoopPlayback;
    BOOL _allowGIFPlayback;
    BOOL _useMockData;
    BOOL _forceDisplayReportJunk;
    BOOL _navigateToActivityPost;
    BOOL _forcePortraitBias;
    BOOL _useSquareSharedAlbumActivity;
    BOOL _disableSharedAlbumTopMargin;
    BOOL _alwaysShowSuggestionRenderingOverlay;
    BOOL _showFeaturedPhotosBadges;
    BOOL _delayEditRenders;
    BOOL _useCachedEditRenders;
    NSUInteger _maxSimultaneousVideoCount;
    double _minimumVisibilityForVideoPlayback;
    long long _sortingAlgorithm;
    NSUInteger _maxMemoriesToFetch;
}

+ (id)keyPathsAffectingGadgetVisibility;
+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) NSUInteger maxMemoriesToFetch; // @synthesize maxMemoriesToFetch=_maxMemoriesToFetch;
@property(nonatomic) long long sortingAlgorithm; // @synthesize sortingAlgorithm=_sortingAlgorithm;
@property(nonatomic) BOOL useCachedEditRenders; // @synthesize useCachedEditRenders=_useCachedEditRenders;
@property(nonatomic) BOOL delayEditRenders; // @synthesize delayEditRenders=_delayEditRenders;
@property(nonatomic) BOOL showFeaturedPhotosBadges; // @synthesize showFeaturedPhotosBadges=_showFeaturedPhotosBadges;
@property(nonatomic) BOOL alwaysShowSuggestionRenderingOverlay; // @synthesize alwaysShowSuggestionRenderingOverlay=_alwaysShowSuggestionRenderingOverlay;
@property(nonatomic) BOOL disableSharedAlbumTopMargin; // @synthesize disableSharedAlbumTopMargin=_disableSharedAlbumTopMargin;
@property(nonatomic) BOOL useSquareSharedAlbumActivity; // @synthesize useSquareSharedAlbumActivity=_useSquareSharedAlbumActivity;
@property(nonatomic) BOOL forcePortraitBias; // @synthesize forcePortraitBias=_forcePortraitBias;
@property(nonatomic) BOOL navigateToActivityPost; // @synthesize navigateToActivityPost=_navigateToActivityPost;
@property(nonatomic) BOOL forceDisplayReportJunk; // @synthesize forceDisplayReportJunk=_forceDisplayReportJunk;
@property(nonatomic) BOOL useMockData; // @synthesize useMockData=_useMockData;
@property(nonatomic) double minimumVisibilityForVideoPlayback; // @synthesize minimumVisibilityForVideoPlayback=_minimumVisibilityForVideoPlayback;
@property(nonatomic) NSUInteger maxSimultaneousVideoCount; // @synthesize maxSimultaneousVideoCount=_maxSimultaneousVideoCount;
@property(nonatomic) BOOL allowGIFPlayback; // @synthesize allowGIFPlayback=_allowGIFPlayback;
@property(nonatomic) BOOL allowLoopPlayback; // @synthesize allowLoopPlayback=_allowLoopPlayback;
@property(nonatomic) BOOL allowVideoPlayback; // @synthesize allowVideoPlayback=_allowVideoPlayback;
@property(nonatomic) BOOL showHorizontalGadget; // @synthesize showHorizontalGadget=_showHorizontalGadget;
@property(nonatomic) BOOL showVerticalSampleGadgets; // @synthesize showVerticalSampleGadgets=_showVerticalSampleGadgets;
@property(nonatomic) BOOL showSampleSuggestionGadgets; // @synthesize showSampleSuggestionGadgets=_showSampleSuggestionGadgets;
@property(nonatomic) BOOL showFooter; // @synthesize showFooter=_showFooter;
@property(nonatomic) BOOL showQuestions; // @synthesize showQuestions=_showQuestions;
@property(nonatomic) BOOL showRecentInterestSuggestions; // @synthesize showRecentInterestSuggestions=_showRecentInterestSuggestions;
@property(nonatomic) BOOL showEditSuggestions; // @synthesize showEditSuggestions=_showEditSuggestions;
@property(nonatomic) BOOL showCMMInvitations; // @synthesize showCMMInvitations=_showCMMInvitations;
@property(nonatomic) BOOL showCMMSuggestions; // @synthesize showCMMSuggestions=_showCMMSuggestions;
@property(nonatomic) BOOL showSharedAlbumActivity; // @synthesize showSharedAlbumActivity=_showSharedAlbumActivity;
@property(nonatomic) BOOL showMemories; // @synthesize showMemories=_showMemories;
@property(nonatomic) BOOL showForYouSettingsAtTopLevel; // @synthesize showForYouSettingsAtTopLevel=_showForYouSettingsAtTopLevel;
- (void)setDefaultValues;
- (id)parentSettings;

@end
