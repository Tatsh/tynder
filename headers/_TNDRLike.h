//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSString, TNDRLikeID, TNDRUser;

@interface _TNDRLike : NSManagedObject
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(readonly, nonatomic) TNDRLikeID *objectID;

// Remaining properties
@property(retain, nonatomic) NSString *category; // @dynamic category;
@property(retain, nonatomic) NSString *facebookID; // @dynamic facebookID;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) TNDRUser *user; // @dynamic user;

@end

