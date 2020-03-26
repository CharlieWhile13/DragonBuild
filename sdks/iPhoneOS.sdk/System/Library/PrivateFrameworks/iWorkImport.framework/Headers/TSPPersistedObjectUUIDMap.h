//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TSPPersistedObjectUUIDMap : NSObject <NSCopying>
{
    struct unordered_map<NSUUID *, TSP::ObjectLocation, TSP::NSUUIDHash, TSP::NSUUIDEqualTo, std::__1::allocator<std::__1::pair<NSUUID *const, TSP::ObjectLocation>>> _map;
}

- (void)enumerateEntriesUsingBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (void)didUpdateObjectIdentifierDuringRead:(long long)arg1 forUUID:(id)arg2 componentIdentifier:(long long)arg3 originalObjectIdentifier:(long long)arg4 delegate:(id)arg5;
- (void)didUpdateUUIDDuringRead:(id)arg1 forComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3 originalUUID:(id)arg4 isDuplicatedUUID:(BOOL)arg5 delegate:(id)arg6;
- (struct ObjectLocation)objectLocationForUUID:(id)arg1;
- (BOOL)setObjectLocation:(struct ObjectLocation)arg1 forUUID:(id)arg2 objectReferenceMapOrNil:(id)arg3 delegate:(id)arg4;
- (id)descriptionForComponentIdentifier:(long long)arg1 objectIdentifier:(long long)arg2 delegate:(id)arg3;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPersistedObjectUUIDMap:(id)arg1;
- (id)initWithComponentsDictionary:(id)arg1 isLoadingDocument:(BOOL)arg2 objectReferenceMapOrNil:(id)arg3 delegate:(id)arg4;

@end
