//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCActionInstant.h"

#import "NSCopying.h"

@interface CCActionCallBlock : CCActionInstant <NSCopying>
{
    CDUnknownBlockType _block;
}

+ (id)actionWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)execute;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)update:(double)arg1;

@end
