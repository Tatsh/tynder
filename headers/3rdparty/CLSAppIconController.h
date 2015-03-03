//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLSIcon, NSDictionary;

@interface CLSAppIconController : NSObject
{
    CLSIcon *_cachedAppIcon;
}

+ (void)addIconNameWithModifier:(id)arg1 forIconWithName:(id)arg2 toSetOfIconNames:(id)arg3;
+ (id)iconNameSetWithAlternateNamesAddedToIconNameSet:(id)arg1;
+ (BOOL)isIconImageFileNameExtensionPresentInName:(id)arg1;
+ (struct CGSize)sizeForImage:(id)arg1;
@property(readonly, retain, nonatomic) NSDictionary *appInfoDictionary;
@property(readonly, retain, nonatomic) CLSIcon *applicationIcon;
- (void)dealloc;
- (id)fetchApplicationIcon;
- (id)iconByFallingBackOnDefaultIconNamingConvention;
- (id)iconFromCFBundleIconFile;
- (id)iconFromCFBundleIconFiles;
- (id)iconFromIOS7StyleCFBundleIconsInFieldWithKey:(id)arg1;
- (id)iconRootPath;
- (id)largestIconInIconNames:(id)arg1 prerendered:(BOOL)arg2;

@end
