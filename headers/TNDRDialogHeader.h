//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TTTAttributedLabel;

@interface TNDRDialogHeader : UIView
{
    TTTAttributedLabel *_titleTextLabel;
    TTTAttributedLabel *_detailTextLabel;
    UIView *_centerImageView;
    UIView *_bannerImageView;
    UIView *_imageContainerView;
    UIView *_textContainerView;
    UIView *_textBackgroundView;
    float _textContentSpacing;
    UIView *_separatorLine;
    struct UIEdgeInsets _textContainerViewInsets;
}

+ (id)_layoutLabelForSizeCalculationForText:(id)arg1;
+ (id)_layoutTextViewForSizeCalculationForText:(id)arg1;
+ (id)headerWithFrame:(struct CGRect)arg1 titleText:(id)arg2 detailText:(id)arg3;
+ (id)headerWithFrame:(struct CGRect)arg1 titleText:(id)arg2 detailText:(id)arg3 textContainerInsets:(struct UIEdgeInsets)arg4 textContentSpacing:(float)arg5 centerImage:(id)arg6;
+ (id)headerWithFrame:(struct CGRect)arg1 titleText:(id)arg2 detailText:(id)arg3 textContainerInsets:(struct UIEdgeInsets)arg4 textContentSpacing:(float)arg5 centerView:(id)arg6 opaque:(BOOL)arg7;
+ (float)heightForViewWithText:(id)arg1 width:(float)arg2;
+ (float)heightForViewWithTitleString:(id)arg1 detailString:(id)arg2 width:(float)arg3;
+ (float)heightForViewWithTitleText:(id)arg1 detailText:(id)arg2 width:(float)arg3;
+ (struct CGSize)sizeOfHeaderBannerImage;
- (void).cxx_destruct;
- (void)_autolayoutSubviews;
- (void)_setupSubviews;
@property(retain, nonatomic) UIView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) UIView *centerImageView; // @synthesize centerImageView=_centerImageView;
@property(retain, nonatomic) TTTAttributedLabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(nonatomic) BOOL hideSeparatorLine;
@property(retain, nonatomic) UIView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
- (id)initWithFrame:(struct CGRect)arg1 titleText:(id)arg2 detailText:(id)arg3 textContainerInsets:(struct UIEdgeInsets)arg4 textContentSpacing:(float)arg5 bannerView:(id)arg6 bannerCenterView:(id)arg7 opaque:(BOOL)arg8;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIView *textBackgroundView; // @synthesize textBackgroundView=_textBackgroundView;
@property(retain, nonatomic) UIView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(nonatomic) struct UIEdgeInsets textContainerViewInsets; // @synthesize textContainerViewInsets=_textContainerViewInsets;
@property(nonatomic) float textContentSpacing; // @synthesize textContentSpacing=_textContentSpacing;
@property(retain, nonatomic) TTTAttributedLabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;

@end

