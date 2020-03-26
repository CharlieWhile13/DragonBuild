//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBFolderObserver-Protocol.h>
#import <SpringBoardHome/SBIconDelegate-Protocol.h>

@class NSDictionary, NSHashTable, NSMutableDictionary, NSOrderedSet, NSSet, NSString, SBIcon, SBRootFolder;
@protocol SBHIconModelDelegate, SBIconModelStore;

@interface SBHIconModel : NSObject <SBFolderObserver, SBIconDelegate>
{
    NSMutableDictionary *_leafIconsByIdentifier;
    NSMutableDictionary *_leafIdentifiersForMasqueradeIdentifier;
    NSHashTable *_folders;
    NSSet *_hiddenIconTags;
    NSSet *_visibleIconTags;
    BOOL _tagsHaveBeenSet;
    NSMutableDictionary *_alternateListLayouts;
    BOOL _ignoresIconsNotInIconState;
    BOOL _sortsIconsAlphabetically;
    BOOL _layingOut;
    BOOL _restoring;
    BOOL _allowsDownloadingIcons;
    id <SBIconModelStore> _store;
    id <SBHIconModelDelegate> _delegate;
    SBRootFolder *_rootFolder;
    NSDictionary *_desiredIconState;
    NSSet *_archivedLeafIdentifiers;
    NSOrderedSet *_desiredIconStateFlattened;
    SBIcon *_rootFolderIcon;
}

+ (id)migratedIdentifierForLeafIdentifier:(id)arg1;
@property(retain, nonatomic) SBIcon *rootFolderIcon; // @synthesize rootFolderIcon=_rootFolderIcon;
@property(copy, nonatomic) NSOrderedSet *desiredIconStateFlattened; // @synthesize desiredIconStateFlattened=_desiredIconStateFlattened;
@property(copy, nonatomic) NSSet *archivedLeafIdentifiers; // @synthesize archivedLeafIdentifiers=_archivedLeafIdentifiers;
@property(nonatomic) BOOL allowsDownloadingIcons; // @synthesize allowsDownloadingIcons=_allowsDownloadingIcons;
@property(nonatomic, getter=isRestoring) BOOL restoring; // @synthesize restoring=_restoring;
@property(nonatomic, getter=isLayingOut) BOOL layingOut; // @synthesize layingOut=_layingOut;
@property(copy, nonatomic) NSDictionary *desiredIconState; // @synthesize desiredIconState=_desiredIconState;
@property(nonatomic) BOOL sortsIconsAlphabetically; // @synthesize sortsIconsAlphabetically=_sortsIconsAlphabetically;
@property(nonatomic) BOOL ignoresIconsNotInIconState; // @synthesize ignoresIconsNotInIconState=_ignoresIconsNotInIconState;
@property(readonly, copy, nonatomic) NSSet *visibleIconTags; // @synthesize visibleIconTags=_visibleIconTags;
@property(readonly, copy, nonatomic) NSSet *hiddenIconTags; // @synthesize hiddenIconTags=_hiddenIconTags;
@property(readonly, nonatomic) SBRootFolder *rootFolder; // @synthesize rootFolder=_rootFolder;
@property(nonatomic) __weak id <SBHIconModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SBIconModelStore> store; // @synthesize store=_store;
// - (void).cxx_destruct;
- (void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (void)enumerateDownloadingIconsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)downloadingIconForBundleIdentifier:(id)arg1;
- (id)addDownloadingIconForBundleID:(id)arg1 withIdentifier:(id)arg2;
- (id)addDownloadingIconWithDataSource:(id)arg1;
- (BOOL)_canAddDownloadingIconForBundleID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *unlocalizedDefaultFolderName;
@property(readonly, copy, nonatomic) NSString *localizedDefaultFolderName;
- (id)localizedFolderNameForDefaultDisplayName:(id)arg1;
- (void)didUnarchiveMetadata:(id)arg1;
- (id)iconModelMetadata;
- (void)layoutIfNeeded;
- (void)willLayout;
- (void)layout;
@property(readonly, copy, nonatomic) NSSet *visibleIconIdentifiers;
- (BOOL)isIconVisible:(id)arg1;
- (void)adjustIconsToShow:(id)arg1 iconsToHide:(id)arg2 afterChangeToVisibleIconTags:(id)arg3 hiddenIconTags:(id)arg4;
- (void)setVisibilityOfIconsWithVisibleTags:(id)arg1 hiddenTags:(id)arg2;
- (void)_rootFolder:(id)arg1 moveIconsToFirstPage:(id)arg2 placeBumpedIconsSomewhereNice:(id)arg3;
- (void)checkModelConsistencyInRootFolder:(id)arg1;
- (void)checkModelConsistency;
- (id)modernizeRootArchive:(id)arg1;
- (void)importDesiredIconState:(id)arg1;
- (void)saveIconStateIfNeeded;
- (void)_saveIconState;
- (void)saveDesiredIconState;
- (BOOL)deleteIconStateWithOptions:(NSUInteger)arg1;
- (BOOL)deleteIconState;
- (id)_unarchiveRootFolder;
- (BOOL)shouldAvoidPlacingIconOnFirstPage:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *firstPageLeafIdentifiers;
@property(readonly, copy, nonatomic) NSDictionary *defaultIconState;
- (id)_iconState;
- (id)iconState;
- (void)clearDesiredIconStateIfPossible;
- (void)clearDesiredIconStateWithOptions:(NSUInteger)arg1;
- (void)clearDesiredIconState;
@property(readonly, copy, nonatomic) NSSet *missingDesiredIconIdentifiers;
@property(readonly, nonatomic) BOOL hasDesiredIconState;
- (id)desiredFolderCreationActionsForInsertingNewIcon:(id)arg1;
- (id)desiredIndexPathForIconWithIdentifier:(id)arg1;
- (id)_adjustedIndexPathInRootFolder:(id)arg1 withinIconState:(id)arg2 forIconWithIdentifier:(id)arg3;
- (id)_adjustedPlatformIndexPathInRootFolder:(id)arg1 forIcon:(id)arg2;
- (id)_adjustedDesiredIndexPathInRootFolder:(id)arg1 forIconWithIdentifier:(id)arg2;
- (id)indexPathInRootFolder:(id)arg1 forNewIcon:(id)arg2 isDesignatedLocation:(BOOL )arg3 replaceExistingIconAtIndexPath:(id )arg4;
- (id)indexPathForNewIcon:(id)arg1 isDesignatedLocation:(BOOL )arg2 replaceExistingIconAtIndexPath:(id )arg3;
- (id)indexPathForIconInPlatformState:(id)arg1;
- (id)prioritizedMasqueradeIconForIdentifier:(id)arg1;
- (void)enumerateMasqueradeLeafIdentifiersUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)leafIdentifiersForMasqueradeIdentifier:(id)arg1;
- (BOOL)isMasqueradedLeafIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *currentLeafIdentifiers;
@property(readonly, copy, nonatomic) NSSet *leafIconIdentifiers;
- (id)iconsOfClass:(Class)arg1;
- (void)addIconsOfClass:(Class)arg1 toSet:(id)arg2;
- (id)leafIconsForIdentifiers:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *leafIcons;
- (void)enumerateLeafIconsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)leafIconForIdentifier:(id)arg1;
- (NSUInteger)maxColumnCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (NSUInteger)maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) BOOL supportsDock;
@property(readonly, nonatomic) NSUInteger maxIconCountForDock;
- (NSUInteger)maxIconCountForListInFolderClass:(Class)arg1;
@property(readonly, nonatomic) NSUInteger maxListCountForFolders;
- (BOOL)isTrackingIcon:(id)arg1;
- (void)removeAllIcons;
- (void)removeIconForIdentifier:(id)arg1;
- (void)removeIcon:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)loadAllIcons;
- (void)reloadIcons;
- (id)init;
- (id)initWithStore:(id)arg1;
- (void)setForecastedLeavesAndMasqueradesOnIconModel:(id)arg1 includingMissingIcons:(id)arg2;
- (void)setLeafIdentifiersForMasqueradeIdentifier:(id)arg1;
- (void)setLeafIconsByIdentifier:(id)arg1;

@end
