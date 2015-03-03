//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TNDRSettingsCell.h"

@class NSNumber, TNDRSlider, UIImageView, UILabel;

@interface TNDRSliderCell : TNDRSettingsCell
{
    BOOL _isEmpty;
    BOOL _maxIsRange;
    id <TNDRSliderCellDelegate> _delegate;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_minimumSpan;
    NSNumber *_startValue;
    NSNumber *_endValue;
    NSNumber *_maxRangeValue;
    TNDRSlider *_slider;
    UILabel *_titleLabel;
    UILabel *_currentValueLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *currentValueLabel; // @synthesize currentValueLabel=_currentValueLabel;
@property(nonatomic) __weak id <TNDRSliderCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSNumber *endValue; // @synthesize endValue=_endValue;
- (void)handleSliderValueChanged:(id)arg1;
@property(readonly, nonatomic) float hiValue;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) BOOL isEmpty; // @synthesize isEmpty=_isEmpty;
- (void)layoutSubviews;
@property(readonly, nonatomic) float lowValue;
@property(nonatomic) BOOL maxIsRange; // @synthesize maxIsRange=_maxIsRange;
@property(retain, nonatomic) NSNumber *maxRangeValue; // @synthesize maxRangeValue=_maxRangeValue;
@property(retain, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) NSNumber *minimumSpan; // @synthesize minimumSpan=_minimumSpan;
@property(retain, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(retain, nonatomic) TNDRSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) NSNumber *startValue; // @synthesize startValue=_startValue;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setValueLabel:(id)arg1;
- (void)setup;

// Remaining properties
@property(retain, nonatomic) UIImageView *backgroundImageView;

@end
