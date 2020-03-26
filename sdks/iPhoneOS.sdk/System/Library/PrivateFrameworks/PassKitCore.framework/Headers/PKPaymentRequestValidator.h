//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentValidating-Protocol.h>

@class PKPaymentRequest;

@interface PKPaymentRequestValidator : NSObject <PKPaymentValidating>
{
    PKPaymentRequest *_request;
}

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;
// - (void).cxx_destruct;
- (BOOL)isValidWithAPIType:(NSUInteger)arg1 withError:(id )arg2;
- (BOOL)isValidWithError:(id )arg1;
- (BOOL)_checkTotal:(id)arg1 withAPIType:(NSUInteger)arg2 error:(id )arg3;
- (id)initWithPaymentRequest:(id)arg1;

@end
