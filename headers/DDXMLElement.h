//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DDXMLNode.h"

@interface DDXMLElement : DDXMLNode
{
}

+ (id)elementWithName:(id)arg1 xmlns:(id)arg2;
+ (id)nodeWithElementPrimitive:(struct _xmlNode *)arg1 owner:(id)arg2;
+ (id)nodeWithPrimitive:(struct _xmlKind *)arg1 owner:(id)arg2;
- (void)_addNamespace:(id)arg1;
- (id)_elementsForName:(id)arg1 localName:(id)arg2 prefix:(id)arg3 uri:(id)arg4;
- (BOOL)_hasAttributeWithName:(id)arg1;
- (id)_recursiveResolveNamespaceForPrefix:(id)arg1 atNode:(struct _xmlNode *)arg2;
- (id)_recursiveResolvePrefixForURI:(id)arg1 atNode:(struct _xmlNode *)arg2;
- (void)_removeAttributeForName:(id)arg1;
- (void)_removeNamespaceForPrefix:(id)arg1;
- (void)addAttribute:(id)arg1;
- (void)addAttributeWithName:(id)arg1 stringValue:(id)arg2;
- (void)addChild:(id)arg1;
- (void)addNamespace:(id)arg1;
- (id)attributeForName:(id)arg1;
- (id)attributes;
- (id)attributesAsDictionary;
- (id)compactXMLString;
- (id)elementForName:(id)arg1;
- (id)elementForName:(id)arg1 xmlns:(id)arg2;
- (id)elementsForLocalName:(id)arg1 URI:(id)arg2;
- (id)elementsForName:(id)arg1;
- (id)initWithElementPrimitive:(struct _xmlNode *)arg1 owner:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 URI:(id)arg2;
- (id)initWithName:(id)arg1 stringValue:(id)arg2;
- (id)initWithPrimitive:(struct _xmlKind *)arg1 owner:(id)arg2;
- (id)initWithXMLString:(id)arg1 error:(id *)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned int)arg2;
- (id)namespaceForPrefix:(id)arg1;
- (id)namespaces;
- (id)prettyXMLString;
- (void)removeAttributeForName:(id)arg1;
- (void)removeChildAtIndex:(unsigned int)arg1;
- (void)removeNamespaceForPrefix:(id)arg1;
- (id)resolveNamespaceForName:(id)arg1;
- (id)resolvePrefixForNamespaceURI:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setNamespaces:(id)arg1;
- (void)setXmlns:(id)arg1;
- (id)xmlns;

@end

