//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class PHAsset, PHImportAsset, PHImportRecord;

@protocol PHImportServiceImporterDelegate
- (long long)importAsset:(PHImportAsset *)arg1 asDuplicateOfLibraryAsset:(PHAsset *)arg2 applyToAll:(BOOL )arg3;
- (void)completedImportRecord:(PHImportRecord *)arg1;
@end
