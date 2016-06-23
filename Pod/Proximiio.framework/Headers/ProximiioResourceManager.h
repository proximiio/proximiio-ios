//
//  ProximiioResourceManager.h
//  ProximiioApp
//
//  Created by Matej Držík on 08/06/16.
//  Copyright © 2016 Quanto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProximiioAPI.h"
#import "ProximiioInput.h"
#import "ProximiioDepartment.h"
#import "ProximiioPlace.h"
#import "ProximiioFloor.h"

@interface ProximiioResourceManager : NSObject

- (NSArray *)allApplications;
- (NSArray *)allPlaces;
- (NSArray *)allFloors;
- (NSArray *)allDepartments;
- (NSArray *)allGeofences;
- (NSArray *)allInputs;

+ (id)sharedManager;
- (void)fetchWithCallback:(void (^)(ProximiioAPIResult result))callback;

- (ProximiioInput *)inputWithUUID:(NSUUID *)uuid major:(int)major minor:(int)minor;
- (ProximiioInput *)inputWithNamespace:(NSString *)ns instance:(NSString *)instance;
- (ProximiioFloor *)floorWithUUID:(NSString *)uuid;
- (ProximiioPlace *)placeWithUUID:(NSString *)uuid;
- (ProximiioDepartment *)departmentWithUUID:(NSString *)uuid;

@property (readonly, nonatomic, strong) NSMutableDictionary *applications;
@property (readonly, nonatomic, strong) NSMutableDictionary *places;
@property (readonly, nonatomic, strong) NSMutableDictionary *floors;
@property (readonly, nonatomic, strong) NSMutableDictionary *departments;
@property (readonly, nonatomic, strong) NSMutableDictionary *geofences;
@property (readonly, nonatomic, strong) NSMutableDictionary *inputs;

@end

@protocol ProximiioResourceManagerDelegate <NSObject>

- (void)didUpdateApplications:(NSDictionary *)applications;
- (void)didUpdatePlaces:(NSDictionary *)places;
- (void)didUpdateFloors:(NSDictionary *)floors;
- (void)didUpdateDepartments:(NSDictionary *)departments;
- (void)didUpdateGeofences:(NSDictionary *)geofences;
- (void)didUpdateInputs:(NSDictionary *)inputs;

@end
