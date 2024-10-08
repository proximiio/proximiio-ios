//
//  ProximiioAPI.h
//  ProximiioApp
//
//  Created by Proximi.io Developer Team on 06/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProximiioAPIResult.h"
#import "ProximiioBatch.h"
#import "ProximiioSession.h"

#define RESULT_OK 1
#define RESULT_FAILED 2
#define API_ROOT @"https://api.proximi.fi"
#define API_VERSION @"v5"

@interface ProximiioAPI : NSObject

+(ProximiioAPI *)sharedManager;

-(void)getOne:(NSString *)resource
           id:(NSString *)uuid
   parameters:(NSDictionary *)parameters
     callback:(void (^)(ProximiioAPIResult result, NSDictionary *response))callback;

-(void)get:(NSString *)resource
parameters:(NSDictionary *)parameters
  callback:(void (^)(ProximiioAPIResult result, NSDictionary *response))callback;

-(void)getPaginated:(NSString *)resource
         parameters:(NSDictionary *)parameters
           callback:(void (^)(ProximiioAPIResult result, NSArray *response))callback;

-(void)get:(NSString *)resource
 paginated:(BOOL) paginated
parameters:(NSDictionary *)parameters
  callback:(void (^)(ProximiioAPIResult result, id response))callback;

-(void)post:(NSString *)resource
 parameters:(id)parameters
   callback:(void (^)(ProximiioAPIResult result, NSDictionary *response))callback;

-(void)postSync:(NSString *)resource
     parameters:(id)parameters
       callback:(void (^)(ProximiioAPIResult result, NSDictionary *response))callback;

-(void)put:(NSString *)resource
        id:(NSString *)uuid
parameters:(NSDictionary *)parameters
  callback:(void (^)(ProximiioAPIResult result, NSDictionary *response))callback;

-(void)upsert:(NSString *)resource
   parameters:(NSDictionary *)parameters
     callback:(void (^)(ProximiioAPIResult result, NSDictionary *response))callback;

-(void)destroy:(NSString *)resource
            id:(NSString *)uuid
    parameters:(NSDictionary *)parameters
      callback:(void (^)(ProximiioAPIResult result, NSDictionary *response))callback;

-(void)removeEventWithIdentifier:(NSString *)identifier session:(ProximiioSession *)session;

-(void)setNetworkInterval:(int)interval;
-(void)setToken:(NSString *)token;
-(void)setApi:(NSString *)api;
-(void)setApiFailover:(NSMutableArray *)failover;
-(void)setApiVersion:(NSString *)version;
-(NSString *)currentApi;


@property (readonly) NSString *token;
@property (readonly) NSString *api;
@property (readonly) NSString *apiVersion;
@property (readonly) NSMutableArray *failover;
@property (nonatomic, strong) NSMutableArray *customUUID;
@property (nonatomic, strong) ProximiioBatch *positionsBatch;
@property (nonatomic, strong) ProximiioBatch *eventsBatch;
@property (nonatomic, assign) int retry;
@end
