//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@interface NSManagedObject (MagicalRecord)
+ (id)MR_ascendingSortDescriptors:(id)arg1;
+ (id)MR_createEntity;
+ (id)MR_createInContext:(id)arg1;
+ (unsigned int)MR_defaultBatchSize;
+ (BOOL)MR_deleteAllMatchingPredicate:(id)arg1;
+ (BOOL)MR_deleteAllMatchingPredicate:(id)arg1 inContext:(id)arg2;
+ (id)MR_descendingSortDescriptors:(id)arg1;
+ (id)MR_entityDescription;
+ (id)MR_entityDescriptionInContext:(id)arg1;
+ (id)MR_entityName;
+ (id)MR_executeFetchRequest:(id)arg1;
+ (id)MR_executeFetchRequest:(id)arg1 inContext:(id)arg2;
+ (id)MR_executeFetchRequestAndReturnFirstObject:(id)arg1;
+ (id)MR_executeFetchRequestAndReturnFirstObject:(id)arg1 inContext:(id)arg2;
+ (void)MR_performFetch:(id)arg1;
+ (id)MR_propertiesNamed:(id)arg1;
+ (void)MR_setDefaultBatchSize:(unsigned int)arg1;
+ (id)MR_sortAscending:(BOOL)arg1 attributes:(id)arg2;
+ (BOOL)MR_truncateAll;
+ (BOOL)MR_truncateAllInContext:(id)arg1;
- (BOOL)MR_deleteEntity;
- (BOOL)MR_deleteInContext:(id)arg1;
- (id)MR_inContext:(id)arg1;
- (id)MR_inThreadContext;
@end

