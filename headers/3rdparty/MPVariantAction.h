//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class MPObjectSelector, NSArray, NSHashTable, NSString;

@interface MPVariantAction : NSObject <NSCoding>
{
    BOOL _cacheOriginal;
    BOOL _swizzle;
    NSString *_name;
    MPObjectSelector *_path;
    SEL _selector;
    NSArray *_args;
    NSArray *_original;
    Class _swizzleClass;
    SEL _swizzleSelector;
    NSHashTable *_appliedTo;
}

+ (id)actionWithJSONObject:(id)arg1;
+ (id)executeSelector:(SEL)arg1 withArgs:(id)arg2 onObjects:(id)arg3;
+ (id)executeSelector:(SEL)arg1 withArgs:(id)arg2 onPath:(id)arg3 fromRoot:(id)arg4 toLeaf:(id)arg5;
+ (void)load;
- (void).cxx_destruct;
@property(copy, nonatomic) NSHashTable *appliedTo; // @synthesize appliedTo=_appliedTo;
@property(retain, nonatomic) NSArray *args; // @synthesize args=_args;
@property(nonatomic) BOOL cacheOriginal; // @synthesize cacheOriginal=_cacheOriginal;
- (void)cacheOriginalImage:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)execute;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 path:(id)arg2 selector:(SEL)arg3 args:(id)arg4 cacheOriginal:(BOOL)arg5 original:(id)arg6 swizzle:(BOOL)arg7 swizzleClass:(Class)arg8 swizzleSelector:(SEL)arg9;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAction:(id)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *original; // @synthesize original=_original;
@property(retain, nonatomic) MPObjectSelector *path; // @synthesize path=_path;
- (void)restoreCachedImage;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) BOOL swizzle; // @synthesize swizzle=_swizzle;
@property(nonatomic) Class swizzleClass; // @synthesize swizzleClass=_swizzleClass;
@property(nonatomic) SEL swizzleSelector; // @synthesize swizzleSelector=_swizzleSelector;
- (void)stop;

@end

