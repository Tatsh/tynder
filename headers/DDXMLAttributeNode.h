//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DDXMLNode.h"

@interface DDXMLAttributeNode : DDXMLNode
{
    struct _xmlNs *attrNsPtr;
}

+ (id)nodeWithAttrPrimitive:(struct _xmlAttr *)arg1 owner:(id)arg2;
+ (id)nodeWithPrimitive:(struct _xmlKind *)arg1 owner:(id)arg2;
- (id)URI;
- (struct _xmlStd *)_XPathPreProcess:(id)arg1;
- (void)dealloc;
- (void)detach;
- (id)initWithAttrPrimitive:(struct _xmlAttr *)arg1 owner:(id)arg2;
- (id)initWithPrimitive:(struct _xmlKind *)arg1 owner:(id)arg2;
- (id)name;
- (id)nextNode;
- (id)previousNode;
- (void)setStringValue:(id)arg1;
- (void)setURI:(id)arg1;
- (id)stringValue;

@end

