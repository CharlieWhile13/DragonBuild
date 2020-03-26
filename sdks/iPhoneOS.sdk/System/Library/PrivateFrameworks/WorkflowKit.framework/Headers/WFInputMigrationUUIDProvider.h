//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFUUIDProvider-Protocol.h>

@class WFAction;

@interface WFInputMigrationUUIDProvider : NSObject <WFUUIDProvider>
{
    WFAction *_action;
    NSUInteger _position;
}

@property(readonly, nonatomic) NSUInteger position; // @synthesize position=_position;
@property(readonly, nonatomic) WFAction *action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (id)generateOutputUUIDForAction:(id)arg1;
- (id)initWithAction:(id)arg1 atPosition:(NSUInteger)arg2;

@end
