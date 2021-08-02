//
//  ProximiioResourceManager.h
//  ProximiioApp
//
//  Created by Proximi.io Developer Team on 08/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Proximiio/ProximiioAPIResult.h>
#import <Proximiio/ProximiioInput.h>
#import <Proximiio/ProximiioDepartment.h>
#import <Proximiio/ProximiioPlace.h>
#import <Proximiio/ProximiioFloor.h>
#import <Proximiio/ProximiioApplication.h>

@interface ProximiioResourceManager : NSObject

- (NSArray *)allApplications;
- (NSArray *)allPlaces;
- (NSArray *)allFloors;
- (NSArray *)allDepartments;
- (NSArray *)allGeofences;
- (NSArray *)allPrivacyZones;
- (NSArray *)allInputs;

+ (ProximiioResourceManager*)sharedManager;

- (void)audit:(void (^)(ProximiioAPIResult result))callback;

- (ProximiioApplication *)applicationWithUUID:(NSString *)uuid;
- (ProximiioInput *)inputWithUUID:(NSUUID *)uuid major:(int)major minor:(int)minor;
- (ProximiioInput *)inputWithNamespace:(NSString *)ns instance:(NSString *)instance;
- (ProximiioFloor *)floorWithUUID:(NSString *)uuid;
- (ProximiioPlace *)placeWithUUID:(NSString *)uuid;
- (ProximiioDepartment *)departmentWithUUID:(NSString *)uuid;

- (NSString *)keyForUUID:(NSUUID *)uuid major:(int)major minor:(int)minor;
- (NSString *)keyForNamespace:(NSString *)ns instance:(NSString *)instance;

- (void)inputDeleteLocallyById:(NSString *) uuid;

- (void)wipeLocalCache;

@property (readonly, nonatomic, strong) NSMutableDictionary *applications;
@property (readonly, nonatomic, strong) NSMutableDictionary *places;
@property (readonly, nonatomic, strong) NSMutableDictionary *floors;
@property (readonly, nonatomic, strong) NSMutableDictionary *departments;
@property (readonly, nonatomic, strong) NSMutableDictionary *geofences;
@property (readonly, nonatomic, strong) NSMutableDictionary *privacyZones;
@property (readonly, nonatomic, strong) NSMutableDictionary *inputs;

@end

@protocol ProximiioResourceManagerDelegate <NSObject>

- (void)didUpdateApplications:(NSDictionary *)applications;
- (void)didUpdatePlaces:(NSDictionary *)places;
- (void)didUpdateFloors:(NSDictionary *)floors;
- (void)didUpdateDepartments:(NSDictionary *)departments;
- (void)didUpdateGeofences:(NSDictionary *)geofences;
- (void)didUpdateInputs:(NSDictionary *)inputs;
- (void)didUpdatePrivacyZones:(NSDictionary *)privacyZones;

@end
