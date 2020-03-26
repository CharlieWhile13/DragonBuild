//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyStatisticCurrentAutocorrections.h>

@class NSDictionary, NSMutableDictionary;

@interface TITypologyStatisticRankCandidatesAccepted : TITypologyStatisticCurrentAutocorrections
{
    NSMutableDictionary *_histogram;
    long long _lengthOfSelectedCandidates;
    long long _lengthOfSelectedPredictions;
}

@property(readonly, nonatomic) long long lengthOfSelectedPredictions; // @synthesize lengthOfSelectedPredictions=_lengthOfSelectedPredictions;
@property(readonly, nonatomic) long long lengthOfSelectedCandidates; // @synthesize lengthOfSelectedCandidates=_lengthOfSelectedCandidates;
@property(readonly, nonatomic) NSDictionary *histogram; // @synthesize histogram=_histogram;
// - (void).cxx_destruct;
- (void)visitRecordKeyboardInput:(id)arg1;
- (void)rankAndCountSelectedCandidate:(id)arg1;
- (void)countSelectedCandidate:(id)arg1 withRank:(NSUInteger)arg2;
- (void)countSelectedPrediction:(id)arg1 withRank:(NSUInteger)arg2;
- (BOOL)isCandidatePrediction:(id)arg1;
- (void)countSelectedInputStringToRejectAutocorrection;
- (void)countSelectedInputString;
- (void)countSelectedAutocorrection:(id)arg1;
- (void)addLengthOfSelectedPrediction:(id)arg1;
- (void)addLengthOfSelectedCandidate:(id)arg1;
- (NSUInteger)rankOfCandidate:(id)arg1;
- (id)structuredReport;
- (id)init;

@end
