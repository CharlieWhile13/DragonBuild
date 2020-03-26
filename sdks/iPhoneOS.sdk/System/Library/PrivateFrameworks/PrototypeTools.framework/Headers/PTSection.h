//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/PTRowObserver-Protocol.h>
#import <PrototypeTools/PTSettingsKeyPathObserver-Protocol.h>

@class NSArray, NSHashTable, NSMutableArray, NSString, PTSettings;

@interface PTSection : NSObject <PTSettingsKeyPathObserver, PTRowObserver>
{
    NSArray *_rows;
    NSHashTable *_observers;
    NSMutableArray *_allRows;
    NSMutableArray *_enabledRows;
    NSString *_title;
    PTSettings *_settings;
    NSString *_submoduleKeyPath;
    NSArray *_appearanceConditions;
    id /* CDUnknownBlockType */ _footerTextGetter;
    id /* CDUnknownBlockType */ _unregisterBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ unregisterBlock; // @synthesize unregisterBlock=_unregisterBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ footerTextGetter; // @synthesize footerTextGetter=_footerTextGetter;
@property(retain, nonatomic) NSArray *appearanceConditions; // @synthesize appearanceConditions=_appearanceConditions;
@property(retain, nonatomic) NSString *submoduleKeyPath; // @synthesize submoduleKeyPath=_submoduleKeyPath;
@property(retain, nonatomic) PTSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (void)_sendReload;
- (void)_sendInserts:(id)arg1 deletes:(id)arg2;
- (BOOL)_shouldEnableRow:(id)arg1;
- (void)_reloadEnabledRows;
- (void)_updateEnabledRows;
- (void)rowDidReload:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)reloadSection;
- (void)enumerateEnabledRowsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateAllRowsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (NSUInteger)indexOfRow:(id)arg1;
- (id)rowAtIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfRows;
- (void)dealloc;
- (id)initWithRows:(id)arg1;

@end
