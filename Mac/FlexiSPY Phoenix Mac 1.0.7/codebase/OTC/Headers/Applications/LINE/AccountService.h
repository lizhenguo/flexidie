/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface AccountService : NSObject {// XXUnknownSuperclass {
}
+(void)confirmEmailWithVerifier:(id)verifier pincode:(id)pincode completionBlock:(id)block errorBlock:(id)block4;

+(void)registEmailConfirmationCompletionBlock:(id)block errorBlock:(id)block2;

+(void)registEmailWithAccountId:(id)accountId accountPassword:(id)password ignore:(BOOL)ignore completionBlock:(id)block errorBlock:(id)block5;

+(void)requestResendEmailConfirmation:(id)confirmation completionBlock:(id)block errorBlock:(id)block3;

+(void)requestEmailConfirmationWithEmailConfirmation:(id)emailConfirmation completionBlock:(id)block errorBlock:(id)block3;

+(void)loginWithQRAuthKey:(id)qrauthKey pinCode:(id)code completionBlock:(id)block errorBlock:(id)block4;
+(void)logoutSessionWithTokenKey:(id)tokenKey completionBlock:(id)block errorBlock:(id)block3;
+(void)getSessionList:(id)list errorBlock:(id)block;
+(void)requestIdentityUnbindWithProvider:(int)provider identifier:(id)identifier completionBlock:(id)block errorBlock:(id)block4;
+(void)requestAccountPasswordResetWithProvider:(int)provider identifier:(id)identifier completionBlock:(id)block errorBlock:(id)block4;
+(void)clearIdentityCredentialWithCompletionBlock:(id)completionBlock errorBlock:(id)block;
+(void)setAccountWithProvider:(int)provider accountID:(id)anId password:(id)password completionBlock:(id)block errorBlock:(id)block5;
+(void)setIdentityCredentialWithAccountProvider:(int)accountProvider accountId:(id)anId accountPassword:(id)password completionBlock:(id)block errorBlock:(id)block5;
+(void)isAccountIdAvailableWithAccountProvider:(int)accountProvider accountId:(id)anId completionBlock:(id)block errorBlock:(id)block4;
+(void)getRSAidentityCredentialProvider:(int)provider accountID:(id)anId password:(id)password completionBlock:(id)block errorBlock:(id)block5;
@end
