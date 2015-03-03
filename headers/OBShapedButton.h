//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImage;

@interface OBShapedButton : UIButton
{
    BOOL _previousTouchHitTestResponse;
    UIImage *_buttonImage;
    UIImage *_buttonBackground;
    struct CGPoint _previousTouchPoint;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(retain, nonatomic) UIImage *buttonBackground; // @synthesize buttonBackground=_buttonBackground;
@property(retain, nonatomic) UIImage *buttonImage; // @synthesize buttonImage=_buttonImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isAlphaVisibleAtPoint:(struct CGPoint)arg1 forImage:(id)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) BOOL previousTouchHitTestResponse; // @synthesize previousTouchHitTestResponse=_previousTouchHitTestResponse;
@property(nonatomic) struct CGPoint previousTouchPoint; // @synthesize previousTouchPoint=_previousTouchPoint;
- (void)resetHitTestCache;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setup;
- (void)updateImageCacheForCurrentState;

@end
