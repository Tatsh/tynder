//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSNumber, NSString, TNDRLocationID, TNDRPopularLocation;

@interface _TNDRLocation : NSManagedObject
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property short dayLightSavingsTimeOffsetValue;
@property double latitudeValue;
@property double longitudeValue;
@property(readonly, nonatomic) TNDRLocationID *objectID;
@property int populationValue;
- (short)primitiveDayLightSavingsTimeOffsetValue;
- (double)primitiveLatitudeValue;
- (double)primitiveLongitudeValue;
- (int)primitivePopulationValue;
- (short)primitiveTimeOffsetValue;
- (void)setPrimitiveDayLightSavingsTimeOffsetValue:(short)arg1;
- (void)setPrimitiveLatitudeValue:(double)arg1;
- (void)setPrimitiveLongitudeValue:(double)arg1;
- (void)setPrimitivePopulationValue:(int)arg1;
- (void)setPrimitiveTimeOffsetValue:(short)arg1;
@property short timeOffsetValue;

// Remaining properties
@property(retain, nonatomic) NSString *admArea1Name; // @dynamic admArea1Name;
@property(retain, nonatomic) NSString *admArea1ShortName; // @dynamic admArea1ShortName;
@property(retain, nonatomic) NSString *admArea2Name; // @dynamic admArea2Name;
@property(retain, nonatomic) NSString *admArea2ShortName; // @dynamic admArea2ShortName;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(retain, nonatomic) NSString *countryName; // @dynamic countryName;
@property(retain, nonatomic) NSString *countryShortName; // @dynamic countryShortName;
@property(retain, nonatomic) NSNumber *dayLightSavingsTimeOffset; // @dynamic dayLightSavingsTimeOffset;
@property(retain, nonatomic) NSDate *lastVisit; // @dynamic lastVisit;
@property(retain, nonatomic) NSNumber *latitude; // @dynamic latitude;
@property(retain, nonatomic) NSString *localityName; // @dynamic localityName;
@property(retain, nonatomic) NSString *localityShortName; // @dynamic localityShortName;
@property(retain, nonatomic) NSNumber *longitude; // @dynamic longitude;
@property(retain, nonatomic) TNDRPopularLocation *popularLocation; // @dynamic popularLocation;
@property(retain, nonatomic) NSNumber *population; // @dynamic population;
@property(retain, nonatomic) NSString *predeterminedDescription; // @dynamic predeterminedDescription;
@property(retain, nonatomic) NSString *predeterminedTitle; // @dynamic predeterminedTitle;
@property(retain, nonatomic) NSString *state; // @dynamic state;
@property(retain, nonatomic) NSString *street; // @dynamic street;
@property(retain, nonatomic) NSNumber *timeOffset; // @dynamic timeOffset;
@property(retain, nonatomic) NSString *zip; // @dynamic zip;

@end
