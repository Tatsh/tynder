//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPersistentStoreCoordinator.h"

@interface NSPersistentStoreCoordinator (MagicalRecord)
+ (id)MR_autoMigrationOptions;
+ (id)MR_coordinatorWithAutoMigratingSqliteStoreNamed:(id)arg1;
+ (id)MR_coordinatorWithInMemoryStore;
+ (id)MR_coordinatorWithPersistentStore:(id)arg1;
+ (id)MR_coordinatorWithSqliteStoreNamed:(id)arg1;
+ (id)MR_coordinatorWithSqliteStoreNamed:(id)arg1 withOptions:(id)arg2;
+ (id)MR_coordinatorWithiCloudContainerID:(id)arg1 contentNameKey:(id)arg2 localStoreNamed:(id)arg3 cloudStorePathComponent:(id)arg4;
+ (id)MR_coordinatorWithiCloudContainerID:(id)arg1 contentNameKey:(id)arg2 localStoreNamed:(id)arg3 cloudStorePathComponent:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)MR_defaultStoreCoordinator;
+ (id)MR_newPersistentStoreCoordinator;
+ (void)MR_setDefaultStoreCoordinator:(id)arg1;
- (id)MR_addAutoMigratingSqliteStoreNamed:(id)arg1;
- (id)MR_addInMemoryStore;
- (id)MR_addSqliteStoreNamed:(id)arg1 withOptions:(id)arg2;
- (void)MR_addiCloudContainerID:(id)arg1 contentNameKey:(id)arg2 localStoreNamed:(id)arg3 cloudStorePathComponent:(id)arg4;
- (void)MR_addiCloudContainerID:(id)arg1 contentNameKey:(id)arg2 localStoreNamed:(id)arg3 cloudStorePathComponent:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)MR_createPathToStoreFileIfNeccessary:(id)arg1;
@end
