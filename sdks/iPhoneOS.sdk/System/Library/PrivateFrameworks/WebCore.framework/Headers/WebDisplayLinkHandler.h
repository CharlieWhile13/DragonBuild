//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface WebDisplayLinkHandler : NSObject
{
    struct DisplayRefreshMonitorIOS m_monitor;
    CADisplayLink *m_displayLink;
}

- (void)invalidate;
- (void)handleDisplayLink:(id)arg1;
- (void)dealloc;
- (id)initWithMonitor:(struct DisplayRefreshMonitorIOS )arg1;

@end
