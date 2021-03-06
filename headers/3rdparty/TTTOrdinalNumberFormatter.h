//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNumberFormatter.h"

@class NSString;

@interface TTTOrdinalNumberFormatter : NSNumberFormatter
{
    NSString *_ordinalIndicator;
    unsigned int _grammaticalGender;
    unsigned int _grammaticalNumber;
}

- (void).cxx_destruct;
- (id)caOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)deOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)enOrdinalIndicatorStringFromNumber:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)esOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)frOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)gaOrdinalIndicatorStringFromNumber:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
@property(nonatomic) unsigned int grammaticalGender; // @synthesize grammaticalGender=_grammaticalGender;
@property(nonatomic) unsigned int grammaticalNumber; // @synthesize grammaticalNumber=_grammaticalNumber;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)itOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)jaOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)localizedOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)nlOrdinalIndicatorStringFromNumber:(id)arg1;
@property(copy, nonatomic) NSString *ordinalIndicator; // @synthesize ordinalIndicator=_ordinalIndicator;
- (id)ptOrdinalIndicatorStringFromNumber:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)zhHansOrdinalIndicatorStringFromNumber:(id)arg1;

@end

