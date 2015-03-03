//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (BlockObservation)
+ (id)bk_observedClassesHash;
- (void)bk_addObserverForKeyPath:(id)arg1 identifier:(id)arg2 options:(unsigned int)arg3 task:(CDUnknownBlockType)arg4;
- (id)bk_addObserverForKeyPath:(id)arg1 options:(unsigned int)arg2 task:(CDUnknownBlockType)arg3;
- (id)bk_addObserverForKeyPath:(id)arg1 task:(CDUnknownBlockType)arg2;
- (void)bk_addObserverForKeyPaths:(id)arg1 identifier:(id)arg2 options:(unsigned int)arg3 context:(int)arg4 task:(id)arg5;
- (void)bk_addObserverForKeyPaths:(id)arg1 identifier:(id)arg2 options:(unsigned int)arg3 task:(CDUnknownBlockType)arg4;
- (id)bk_addObserverForKeyPaths:(id)arg1 options:(unsigned int)arg2 task:(CDUnknownBlockType)arg3;
- (id)bk_addObserverForKeyPaths:(id)arg1 task:(CDUnknownBlockType)arg2;
- (id)bk_observerBlocks;
- (void)bk_removeAllBlockObservers;
- (void)bk_removeObserverForKeyPath:(id)arg1 identifier:(id)arg2;
- (void)bk_removeObserversWithIdentifier:(id)arg1;
- (void)bk_setObserverBlocks:(id)arg1;
@end
