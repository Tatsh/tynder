//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectID, NSString;

@interface TNDRNotification : NSObject
{
    int _type;
    NSManagedObjectID *_managedObjectID;
    NSString *_title;
    NSString *_message;
    NSString *_matchID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectID *managedObjectID; // @synthesize managedObjectID=_managedObjectID;
@property(retain, nonatomic) NSString *matchID; // @synthesize matchID=_matchID;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;

@end
