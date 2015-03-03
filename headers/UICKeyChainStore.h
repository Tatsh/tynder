//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL;

@interface UICKeyChainStore : NSObject
{
    BOOL _synchronizable;
    int _itemClass;
    NSString *_service;
    NSString *_accessGroup;
    NSURL *_server;
    int _protocolType;
    int _authenticationType;
    int _accessibility;
    int _authenticationPolicy;
    NSString *_authenticationPrompt;
}

+ (id)allItemsWithItemClass:(int)arg1;
+ (id)allKeysWithItemClass:(int)arg1;
+ (id)argumentError:(id)arg1;
+ (id)conversionError:(id)arg1;
+ (id)dataForKey:(id)arg1;
+ (id)dataForKey:(id)arg1 error:(id *)arg2;
+ (id)dataForKey:(id)arg1 service:(id)arg2;
+ (id)dataForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (id)dataForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3 error:(id *)arg4;
+ (id)dataForKey:(id)arg1 service:(id)arg2 error:(id *)arg3;
+ (id)defaultService;
+ (id)generatePassword;
+ (id)keyChainStore;
+ (id)keyChainStoreWithServer:(id)arg1 protocolType:(int)arg2;
+ (id)keyChainStoreWithServer:(id)arg1 protocolType:(int)arg2 authenticationType:(int)arg3;
+ (id)keyChainStoreWithService:(id)arg1;
+ (id)keyChainStoreWithService:(id)arg1 accessGroup:(id)arg2;
+ (id)prettify:(void *)arg1 items:(id)arg2;
+ (BOOL)removeAllItems;
+ (BOOL)removeAllItemsForService:(id)arg1;
+ (BOOL)removeAllItemsForService:(id)arg1 accessGroup:(id)arg2;
+ (BOOL)removeAllItemsForService:(id)arg1 accessGroup:(id)arg2 error:(id *)arg3;
+ (BOOL)removeAllItemsForService:(id)arg1 error:(id *)arg2;
+ (BOOL)removeAllItemsWithError:(id *)arg1;
+ (BOOL)removeItemForKey:(id)arg1;
+ (BOOL)removeItemForKey:(id)arg1 error:(id *)arg2;
+ (BOOL)removeItemForKey:(id)arg1 service:(id)arg2;
+ (BOOL)removeItemForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (BOOL)removeItemForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3 error:(id *)arg4;
+ (BOOL)removeItemForKey:(id)arg1 service:(id)arg2 error:(id *)arg3;
+ (void)requestSharedWebCredentialForDomain:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)requestSharedWebCredentialWithCompletion:(CDUnknownBlockType)arg1;
+ (id)securityError:(long)arg1;
+ (BOOL)setData:(id)arg1 forKey:(id)arg2;
+ (BOOL)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
+ (BOOL)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3;
+ (BOOL)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4;
+ (BOOL)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 error:(id *)arg5;
+ (BOOL)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 error:(id *)arg4;
+ (void)setDefaultService:(id)arg1;
+ (BOOL)setString:(id)arg1 forKey:(id)arg2;
+ (BOOL)setString:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
+ (BOOL)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3;
+ (BOOL)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4;
+ (BOOL)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 error:(id *)arg5;
+ (BOOL)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 error:(id *)arg4;
+ (id)stringForKey:(id)arg1;
+ (id)stringForKey:(id)arg1 error:(id *)arg2;
+ (id)stringForKey:(id)arg1 service:(id)arg2;
+ (id)stringForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (id)stringForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3 error:(id *)arg4;
+ (id)stringForKey:(id)arg1 service:(id)arg2 error:(id *)arg3;
+ (id)unexpectedError:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(nonatomic) int accessibility; // @synthesize accessibility=_accessibility;
- (void *)accessibilityObject;
@property(readonly, nonatomic) NSArray *allItems;
@property(readonly, nonatomic) NSArray *allKeys;
- (id)attributesWithKey:(id)arg1 value:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) int authenticationPolicy; // @synthesize authenticationPolicy=_authenticationPolicy;
@property(retain, nonatomic) NSString *authenticationPrompt; // @synthesize authenticationPrompt=_authenticationPrompt;
@property(readonly, nonatomic) int authenticationType; // @synthesize authenticationType=_authenticationType;
- (void *)authenticationTypeObject;
- (void)commonInit;
- (BOOL)contains:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dataForKey:(id)arg1 error:(id *)arg2;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithServer:(id)arg1 protocolType:(int)arg2;
- (id)initWithServer:(id)arg1 protocolType:(int)arg2 authenticationType:(int)arg3;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 accessGroup:(id)arg2;
@property(readonly, nonatomic) int itemClass; // @synthesize itemClass=_itemClass;
- (void *)itemClassObject;
- (id)items;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, nonatomic) int protocolType; // @synthesize protocolType=_protocolType;
- (void *)protocolTypeObject;
- (id)query;
- (BOOL)removeAllItems;
- (BOOL)removeAllItemsWithError:(id *)arg1;
- (BOOL)removeItemForKey:(id)arg1;
- (BOOL)removeItemForKey:(id)arg1 error:(id *)arg2;
- (void)removeSharedPasswordForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSURL *server; // @synthesize server=_server;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
- (void)setAccessibility:(int)arg1 authenticationPolicy:(int)arg2;
- (BOOL)setData:(id)arg1 forKey:(id)arg2;
- (BOOL)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (BOOL)setData:(id)arg1 forKey:(id)arg2 label:(id)arg3 comment:(id)arg4;
- (BOOL)setData:(id)arg1 forKey:(id)arg2 label:(id)arg3 comment:(id)arg4 error:(id *)arg5;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setSharedPassword:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)setString:(id)arg1 forKey:(id)arg2;
- (BOOL)setString:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (BOOL)setString:(id)arg1 forKey:(id)arg2 label:(id)arg3 comment:(id)arg4;
- (BOOL)setString:(id)arg1 forKey:(id)arg2 label:(id)arg3 comment:(id)arg4 error:(id *)arg5;
@property(nonatomic) BOOL synchronizable; // @synthesize synchronizable=_synchronizable;
- (void)sharedPasswordForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sharedPasswordWithCompletion:(CDUnknownBlockType)arg1;
- (id)stringForKey:(id)arg1;
- (id)stringForKey:(id)arg1 error:(id *)arg2;
- (void)synchronize;
- (BOOL)synchronizeWithError:(id *)arg1;

@end
