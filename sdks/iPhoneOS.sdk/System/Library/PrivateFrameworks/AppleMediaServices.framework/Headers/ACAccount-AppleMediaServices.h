//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccount.h>

#import <AppleMediaServices/AMSHashable-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface ACAccount (AppleMediaServices) <AMSHashable>
+ (BOOL)_isAccountFlagWritable:(id)arg1;
+ (BOOL)_isAccountFlagValue:(id)arg1 validForAccountFlag:(id)arg2;
+ (id)_getSetCookiesForResponse:(id)arg1;
+ (id)_getSetGlobalCookiesForResponse:(id)arg1;
+ (id)_defaultValueForAccountFlag:(id)arg1;
- (BOOL)ams_valueForAccountFlag:(id)arg1;
- (void)ams_setValue:(BOOL)arg1 forAccountFlag:(id)arg2;
- (void)ams_setHomeUserID:(id)arg1;
- (void)ams_setHomeID:(id)arg1;
- (void)ams_removeHomeUserIdentifier:(id)arg1;
- (BOOL)ams_postAccountFlagsWithBagContract:(id)arg1;
- (id)ams_secureToken;
- (id)ams_homeUserID;
- (id)ams_homeID;
- (void)ams_addHomeUserIdentifier:(id)arg1;
- (void)_setAccountProperty:(id)arg1 forKey:(id)arg2 dataProtectionClass:(NSUInteger)arg3 expectedClass:(Class)arg4;
- (void)_setAccountProperty:(id)arg1 forKey:(id)arg2 expectedClass:(Class)arg3;
- (id)_hashedStorefront;
- (id)_hashedIdentifiers;
- (id)_hashedMultiUserIdentifiers;
- (id)_hashedActiveState;
- (id)_createCookieStorage;
- (BOOL)_updateCookiesWithCookiesToAdd:(id)arg1 cookiesToRemove:(id)arg2;
- (id)_cookiesMatchingProperties:(id)arg1;
- (id)_accountPropertyForKey:(id)arg1 dataProtectionClass:(NSUInteger)arg2 expectedClasses:(id)arg3 error:(id )arg4;
- (id)_accountPropertyForKey:(id)arg1 expectedClass:(Class)arg2;
@property(readonly, nonatomic) NSString *hashedDescription;
- (void)ams_removeCookiesMatchingProperties:(id)arg1;
- (void)ams_removeCookies:(id)arg1;
- (void)ams_removeAllCookies;
- (id)ams_cookiesForURL:(id)arg1;
- (BOOL)ams_addGlobalCookiesForResult:(id)arg1;
- (BOOL)ams_addGlobalCookiesForResponse:(id)arg1;
- (BOOL)ams_addCookiesForResult:(id)arg1;
- (BOOL)ams_addCookiesForResponse:(id)arg1;
- (BOOL)ams_addCookies:(id)arg1;
- (id)ams_storefrontForMediaType:(id)arg1;
- (void)ams_setStorefront:(id)arg1 forMediaType:(id)arg2;
- (void)ams_setPrivateListeningEnabled:(BOOL)arg1 forHomeUserIdentifier:(id)arg2;
- (void)ams_setActive:(BOOL)arg1 forMediaType:(id)arg2;
- (void)ams_setAccountFlagValue:(id)arg1 forAccountFlag:(id)arg2;
- (long long)ams_mergePrivacyAcknowledgement:(id)arg1;
- (BOOL)ams_isPrivateListeningEnabledForHomeUserIdentifier:(id)arg1;
- (BOOL)ams_isDuplicate:(id)arg1;
- (BOOL)ams_isActiveForMediaType:(id)arg1;
- (BOOL)ams_encryptAccountFlags;
- (id)ams_delta:(id)arg1;
- (id)ams_accountFlagValueForAccountFlag:(id)arg1;
@property(readonly, nonatomic) NSString *ams_storefront;
- (void)ams_setValidPayment:(BOOL)arg1;
- (void)ams_setStorefront:(id)arg1;
- (void)ams_setServerResponse:(id)arg1;
- (void)ams_setRegisterSuccessCriteria:(id)arg1;
- (void)ams_setRawPassword:(id)arg1;
- (void)ams_setPassword:(id)arg1;
@property(nonatomic, setter=ams_setMergedPrivacyAcknowledgement:) BOOL ams_mergedPrivacyAcknowledgement;
- (void)ams_setManagedAppleID:(BOOL)arg1;
- (void)ams_setLastName:(id)arg1;
- (void)ams_setInGoodStanding:(BOOL)arg1;
- (void)ams_setiCloudFamily:(BOOL)arg1;
- (void)ams_setHomeIdentifier:(id)arg1;
- (void)ams_setFirstName:(id)arg1;
- (void)ams_setDSID:(id)arg1;
- (void)ams_setCreditsString:(id)arg1;
- (void)ams_setBiometricsState:(long long)arg1;
- (void)ams_setAltDSID:(id)arg1;
- (void)ams_setAgreedToTerms:(BOOL)arg1;
- (void)ams_setAccountFlags:(id)arg1;
- (id)ams_lastAuthenticationServerResponse;
@property(readonly, nonatomic) NSUInteger ams_securityLevel;
- (BOOL)ams_requiresAuthKitUpdate;
- (id)ams_registerSuccessCriteria;
- (id)ams_rawPassword;
@property(readonly, nonatomic) NSDictionary *ams_privacyAcknowledgement;
- (id)ams_password;
@property(nonatomic, setter=ams_setPaidPasswordPromptSetting:) NSUInteger ams_paidPasswordPromptSetting;
@property(readonly, nonatomic) NSString *ams_lastName;
- (BOOL)ams_isValidPayment;
@property(readonly, nonatomic, getter=ams_isSandboxAccount) BOOL ams_sandboxAccount;
@property(readonly, nonatomic, getter=ams_isPrivateListeningEnabled) BOOL ams_privateListeningEnabled;
@property(readonly, nonatomic, getter=ams_isManagedAppleID) BOOL ams_managedAppleID;
@property(readonly, nonatomic, getter=ams_isLocalAccount) BOOL ams_localAccount;
@property(readonly, nonatomic, getter=ams_isiTunesAccount) BOOL ams_iTunesAccount;
- (BOOL)ams_isInGoodStanding;
@property(readonly, nonatomic, getter=ams_isIDMSAccount) BOOL ams_IDMSAccount;
- (BOOL)ams_isiCloudFamily;
@property(readonly, nonatomic, getter=ams_isiCloudAccount) BOOL ams_iCloudAccount;
@property(readonly, nonatomic, getter=ams_isHSA2) BOOL ams_HSA2;
@property(readonly, nonatomic, getter=ams_isDemoAccount) BOOL ams_demoAccount;
- (id)ams_homeUserIdentifiers;
- (id)ams_homeIdentifier;
@property(readonly, nonatomic) NSString *ams_fullName;
@property(nonatomic, setter=ams_setFreePasswordPromptSetting:) NSUInteger ams_freePasswordPromptSetting;
@property(readonly, nonatomic) NSString *ams_firstName;
@property(readonly, nonatomic) NSNumber *ams_DSID;
- (BOOL)ams_didAgreeToTerms;
@property(readonly, nonatomic) NSString *ams_creditsString;
@property(readonly, nonatomic) NSArray *ams_cookies;
- (long long)ams_biometricsState;
@property(readonly, nonatomic) NSString *ams_altDSID;
- (id)ams_allStorefronts;
- (id)ams_accountFlags;
@end
