//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSMutableDictionary, UIColor, UIImage;

@interface StyledPageControl : UIControl
{
    BOOL _hidesForSinglePage;
    UIColor *_coreNormalColor;
    UIColor *_coreSelectedColor;
    UIColor *_strokeNormalColor;
    UIColor *_strokeSelectedColor;
    int _currentPage;
    int _numberOfPages;
    int _pageControlStyle;
    int _strokeWidth;
    int _diameter;
    int _gapWidth;
    UIImage *_thumbImage;
    UIImage *_selectedThumbImage;
    NSMutableDictionary *_thumbImageForIndex;
    NSMutableDictionary *_selectedThumbImageForIndex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *coreNormalColor; // @synthesize coreNormalColor=_coreNormalColor;
@property(retain, nonatomic) UIColor *coreSelectedColor; // @synthesize coreSelectedColor=_coreSelectedColor;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) int diameter; // @synthesize diameter=_diameter;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) int gapWidth; // @synthesize gapWidth=_gapWidth;
@property(nonatomic) BOOL hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) int numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void)onTapped:(id)arg1;
@property(nonatomic) int pageControlStyle; // @synthesize pageControlStyle=_pageControlStyle;
@property(retain, nonatomic) UIImage *selectedThumbImage; // @synthesize selectedThumbImage=_selectedThumbImage;
@property(retain, nonatomic) NSMutableDictionary *selectedThumbImageForIndex; // @synthesize selectedThumbImageForIndex=_selectedThumbImageForIndex;
- (id)selectedThumbImageForIndex:(int)arg1;
- (void)setSelectedThumbImage:(id)arg1 forIndex:(int)arg2;
@property(retain, nonatomic) UIColor *strokeNormalColor; // @synthesize strokeNormalColor=_strokeNormalColor;
@property(retain, nonatomic) UIColor *strokeSelectedColor; // @synthesize strokeSelectedColor=_strokeSelectedColor;
@property(nonatomic) int strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
- (void)setThumbImage:(id)arg1 forIndex:(int)arg2;
@property(retain, nonatomic) NSMutableDictionary *thumbImageForIndex; // @synthesize thumbImageForIndex=_thumbImageForIndex;
- (void)setup;
- (id)thumbImageForIndex:(int)arg1;

@end

