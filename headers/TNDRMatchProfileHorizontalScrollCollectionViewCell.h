//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MSLabel, NSString, UIImageView;

@interface TNDRMatchProfileHorizontalScrollCollectionViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    NSString *_title;
    MSLabel *_contentLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setup;

@end
