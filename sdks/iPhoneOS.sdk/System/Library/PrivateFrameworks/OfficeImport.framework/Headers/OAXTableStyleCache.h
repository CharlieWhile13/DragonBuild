//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, OCPPackagePart;

__attribute__((visibility("hidden")))
@interface OAXTableStyleCache : NSObject
{
    OCPPackagePart *mStylesPart;
    NSString *mDefaultStyleId;
    NSMutableDictionary *mCache;
}

// - (void).cxx_destruct;
- (struct _xmlNode )defaultStyleNode;
- (struct _xmlNode )styleNodeForId:(id)arg1;
- (void)setStyleNode:(struct _xmlNode )arg1 forId:(id)arg2;
- (void)setDefaultStyleId:(id)arg1;
- (id)defaultStyleId;
- (void)setStylesPart:(id)arg1;
- (id)init;

@end
