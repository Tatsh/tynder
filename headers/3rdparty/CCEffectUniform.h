//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSValue;

@interface CCEffectUniform : NSObject
{
    NSString *_name;
    NSString *_type;
    NSValue *_value;
}

+ (id)uniform:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *declaration;
- (id)initWithType:(id)arg1 name:(id)arg2 value:(id)arg3;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSValue *value; // @synthesize value=_value;

@end
