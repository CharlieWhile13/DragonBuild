//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKPaletteHostingWindowScene-Protocol.h>

@class NSLayoutConstraint, PKPaletteHostView, UIView, UIWindowScene;
@protocol PKPaletteViewDelegate;

@interface PKPaletteViewInteraction : NSObject <UIEditingOverlayInteractionWithView, PKPaletteHostingWindowScene, UIInteraction>
{
    PKPaletteHostView *_paletteHostView;
    UIWindowScene *_windowScene;
    UIView *_view;
    NSLayoutConstraint *_paletteHostViewWidthConstraint;
    NSLayoutConstraint *_paletteHostViewHeightConstraint;
    NSLayoutConstraint *_paletteHostViewTopConstraint;
    NSLayoutConstraint *_paletteHostViewLeftConstraint;
    CGRect _sceneBounds;
    CGRect _textEffectsWindowFrame;
}

+ (BOOL)isHostedWindow:(id)arg1;
+ (id)paletteViewInteractionForWindow:(id)arg1 windowScene:(id)arg2;
+ (id)paletteViewInteractionForCanvas:(id)arg1;
@property(nonatomic) CGRect textEffectsWindowFrame; // @synthesize textEffectsWindowFrame=_textEffectsWindowFrame;
@property(retain, nonatomic) NSLayoutConstraint *paletteHostViewLeftConstraint; // @synthesize paletteHostViewLeftConstraint=_paletteHostViewLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteHostViewTopConstraint; // @synthesize paletteHostViewTopConstraint=_paletteHostViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteHostViewHeightConstraint; // @synthesize paletteHostViewHeightConstraint=_paletteHostViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteHostViewWidthConstraint; // @synthesize paletteHostViewWidthConstraint=_paletteHostViewWidthConstraint;
@property(nonatomic) CGRect sceneBounds; // @synthesize sceneBounds=_sceneBounds;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
@property(retain, nonatomic) PKPaletteHostView *paletteHostView; // @synthesize paletteHostView=_paletteHostView;
// - (void).cxx_destruct;
- (CGRect)paletteHostingWindowSceneBounds;
- (id)hostingWindow;
- (void)_updatePaletteTraitCollection:(id)arg1;
- (id)_traitCollectionForHostingWindow;
- (void)_updatePaletteViewConstraints;
- (void)_updateSceneBounds;
- (void)editingOverlayContainerDidChangeToSceneBounds:(CGRect)arg1;
- (id)_viewControllerForPalette;
- (void)_updateForRotation:(id)arg1;
- (void)_updateForWillRotate:(id)arg1;
- (void)_sceneDidActivateNotification:(id)arg1;
- (void)hidePaletteViewAnimated:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)showPaletteViewAnimated:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic, getter=isPaletteVisible) BOOL paletteVisible;
@property(nonatomic) __weak id <PKPaletteViewDelegate> delegate;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (id)initWithWindowSize:(CGSize)arg1;

@end
