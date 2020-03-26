//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SATTSSpeechSynthesisFailure : SABaseClientBoundCommand
{
}

+ (id)speechSynthesisFailureWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechSynthesisFailure;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *reasonDescription;
@property(copy, nonatomic) NSString *reason;
@property(nonatomic) long long errorCode;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
