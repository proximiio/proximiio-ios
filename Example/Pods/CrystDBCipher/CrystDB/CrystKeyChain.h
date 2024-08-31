#import <Foundation/Foundation.h>
#import <Security/Security.h>

@interface CrystKeyChain : NSObject

+ (NSString *)getUDIDWithUniqueKey:(NSString *)uniqueKey;

+ (void)save:(NSString *)service data:(id)data;
+ (id)load:(NSString *)service;
+ (void)delete:(NSString *)service;

@end
