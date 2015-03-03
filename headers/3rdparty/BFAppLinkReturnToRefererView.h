//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BFAppLink, UIButton, UIColor, UILabel, UITapGestureRecognizer;

@interface BFAppLinkReturnToRefererView : UIView
{
    BOOL _closed;
    id <BFAppLinkReturnToRefererViewDelegate> _delegate;
    UIColor *_textColor;
    BFAppLink *_refererAppLink;
    int _includeStatusBarInSize;
    UILabel *_labelView;
    UIButton *_closeButton;
    UITapGestureRecognizer *_insideTapGestureRecognizer;
    UIView *_viewToMoveWithNavController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)closeButtonTapped:(id)arg1;
@property(nonatomic) BOOL closed; // @synthesize closed=_closed;
- (void)commonInit;
@property(nonatomic) __weak id <BFAppLinkReturnToRefererViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)drawCloseButtonImageWithColor:(id)arg1;
- (BOOL)hasRefererData;
@property(nonatomic) int includeStatusBarInSize; // @synthesize includeStatusBarInSize=_includeStatusBarInSize;
- (void)initViews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *insideTapGestureRecognizer; // @synthesize insideTapGestureRecognizer=_insideTapGestureRecognizer;
@property(retain, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;
- (void)layoutSubviews;
- (id)localizedLabelForReferer:(id)arg1;
- (void)onTapInside:(id)arg1;
@property(retain, nonatomic) BFAppLink *refererAppLink; // @synthesize refererAppLink=_refererAppLink;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIView *viewToMoveWithNavController; // @synthesize viewToMoveWithNavController=_viewToMoveWithNavController;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (float)statusBarHeight;
- (void)updateColors;
- (void)updateLabelText;

@end
