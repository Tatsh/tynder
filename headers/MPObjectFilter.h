//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSPredicate, NSString;

@interface MPObjectFilter : NSObject
{
    BOOL _unique;
    BOOL _nameOnly;
    NSString *_name;
    NSPredicate *_predicate;
    NSNumber *_index;
}

- (void).cxx_destruct;
- (BOOL)appliesTo:(id)arg1;
- (BOOL)appliesToAny:(id)arg1;
- (id)apply:(id)arg1;
- (id)applyReverse:(id)arg1;
- (id)description;
- (id)getChildrenOfObject:(id)arg1 ofType:(Class)arg2;
- (id)getParentsOfObject:(id)arg1;
@property(retain, nonatomic) NSNumber *index; // @synthesize index=_index;
- (id)init;
- (BOOL)isView:(id)arg1 oneOfNSiblings:(int)arg2;
- (BOOL)isView:(id)arg1 siblingNumber:(int)arg2;
- (BOOL)isView:(id)arg1 siblingNumber:(int)arg2 of:(int)arg3;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL nameOnly; // @synthesize nameOnly=_nameOnly;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) BOOL unique; // @synthesize unique=_unique;

@end
