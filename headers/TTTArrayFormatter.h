//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

@class NSString;

@interface TTTArrayFormatter : NSFormatter
{
    BOOL _usesAbbreviatedConjunction;
    BOOL _usesSerialDelimiter;
    int _arrayStyle;
    NSString *_delimiter;
    NSString *_separator;
    NSString *_conjunction;
    NSString *_abbreviatedConjunction;
}

+ (id)localizedStringFromArray:(id)arg1 arrayStyle:(int)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *abbreviatedConjunction; // @synthesize abbreviatedConjunction=_abbreviatedConjunction;
- (id)arrayFromString:(id)arg1;
@property(nonatomic) int arrayStyle; // @synthesize arrayStyle=_arrayStyle;
@property(copy, nonatomic) NSString *conjunction; // @synthesize conjunction=_conjunction;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *delimiter; // @synthesize delimiter=_delimiter;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *separator; // @synthesize separator=_separator;
@property(nonatomic) BOOL usesAbbreviatedConjunction; // @synthesize usesAbbreviatedConjunction=_usesAbbreviatedConjunction;
@property(nonatomic) BOOL usesSerialDelimiter; // @synthesize usesSerialDelimiter=_usesSerialDelimiter;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromArray:(id)arg1;
- (id)stringFromArray:(id)arg1 rangesOfComponents:(id *)arg2;

@end
