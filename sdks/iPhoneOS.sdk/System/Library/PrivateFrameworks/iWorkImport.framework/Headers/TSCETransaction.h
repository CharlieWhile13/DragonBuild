//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCETransaction : NSObject
{
    struct TSCEReferenceSet _cellRefsToCheck;
    UUIDData_5fbc143e _skipRepairBadRefsOwnerUID;
}

- (id).cxx_construct;
- (BOOL)isSkippingRepairBadRefsForOwnerUID:(const UUIDData_5fbc143e )arg1;
- (void)skipRepairBadRefsForOwnerUID:(const UUIDData_5fbc143e )arg1;
- (id)description;
- (const struct TSCEReferenceSet )cellRefsToCheck;
- (void)addCellRefToCheck:(const struct TSCECellRef )arg1;
- (void)dealloc;
- (id)initWithCalcEngine:(id)arg1;

@end
