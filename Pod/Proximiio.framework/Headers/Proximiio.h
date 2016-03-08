//
//  Proximiio.h
//  Proximiio
//
//  Created by Marian Frische on 19.01.16.
//  Copyright (c) 2016 proximi.io. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>


//! Project version number for Proximiio.
FOUNDATION_EXPORT double ProximiioVersionNumber;

//! Project version string for Proximiio.
FOUNDATION_EXPORT const unsigned char ProximiioVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Proximiio/PublicHeader.h>
#import <CoreLocation/CoreLocation.h>
#import "ProximiioPlace.h"
#import "ProximiioFloor.h"
#import "ProximiioGeofence.h"
#import "ProximiioInput.h"
#import "ProximiioBeacon.h"
#import "ProximiioEddystoneBeacon.h"
#import "ProximiioDepartment.h"
#import "ProximiioApplication.h"

@protocol ProximiioDelegate <NSObject>

- (void)proximiioEnteredGeofence:(ProximiioGeofence*)geofence;

- (void)proximiioExitedGeofence:(ProximiioGeofence*)geofence;


- (void)proximiioPositionUpdated:(CLLocation*)location;


- (void)proximiioFoundiBeacon:(ProximiioBeacon*)beacon isRegistered:(BOOL)registered;

- (void)proximiioUpdatediBeacon:(ProximiioBeacon*)beacon isRegistered:(BOOL)registered;

- (void)proximiioLostiBeacon:(ProximiioBeacon*)beacon isRegistered:(BOOL)registered;

- (void)proximiioFoundEddystoneBeacon:(ProximiioEddystoneBeacon*)beacon isRegistered:(BOOL)registered;

- (void)proximiioUpdatedEddystoneBeacon:(ProximiioEddystoneBeacon*)beacon isRegistered:(BOOL)registered;

- (void)proximiioLostEddystoneBeacon:(ProximiioEddystoneBeacon*)beacon isRegistered:(BOOL)registered;


- (void)proximiioUpdatedApplications;

- (void)proximiioUpdatedPlaces;

- (void)proximiioUpdatedFloors;

- (void)proximiioUpdatedDepartments;

- (void)proximiioUpdatedInputs;

- (void)proximiioUpdatedGeofences;



- (BOOL)proximiioHandlePushMessage:(NSString*)title;

- (void)proximiioHandleOutput:(NSObject*)payload;

@end


@interface Proximiio : NSObject

@property (nonatomic, weak) id<ProximiioDelegate> delegate;

@property (nonatomic, readonly) NSArray *applications;
@property (nonatomic, readonly) NSArray *places;
@property (nonatomic, readonly) NSArray *floors;
@property (nonatomic, readonly) NSArray *departments;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) NSArray *geofences;

@property (nonatomic, readonly) ProximiioApplication *activeApplication;


+ (id) sharedInstance;


- (void) authWithEmail:(NSString*)email andPassword:(NSString*)password authCallback:(void (^)(BOOL success, int statusCode))authCallback;
- (void) registerWithEmail:(NSString*)email password:(NSString*)password firstName:(NSString*)firstName lastName:(NSString*)lastName company:(NSString*)company background:(NSString*)background country:(NSString*)country authCallback:(void (^)(BOOL success, int statusCode))authCallback;
- (void) setAuthToken:(NSString*)authToken andApplication:(NSString*)application;
- (void) selectApplication:(NSString*)application;


- (BOOL) addPlace:(NSString*)name location:(CLLocationCoordinate2D)location address:(NSString*)address indoorAtlasVenueID:(NSString*)venueID tags:(NSArray*)tags withCallback:(void (^)(BOOL success, NSError* error))callback;
- (BOOL) addFloor:(NSString*)name floorID:(NSString*)floorID floorPlanID:(NSString*)floorPlanID place:(ProximiioPlace*)place withCallback:(void (^)(BOOL success, NSError* error))callback;
- (BOOL) addDepartment:(NSString*)name floor:(ProximiioFloor*)floor tags:(NSArray*)tags withCallback:(void (^)(BOOL success, NSError* error))callback;
- (BOOL) addGeofence:(NSString*)name department:(ProximiioDepartment*)department location:(CLLocationCoordinate2D)location radius:(double)radius address:(NSString*)address withCallback:(void (^)(BOOL success, NSError* error))callback;
- (BOOL) addiBeaconInput:(NSString*)name department:(ProximiioDepartment*)department location:(CLLocationCoordinate2D)location uuid:(NSString*)uuid major:(int)major minor:(int)minor triggersFloorChange:(BOOL)triggersFloorChange triggersPlaceChange:(BOOL)triggersPlaceChange floorID:(NSString*)floorID placeID:(NSString*)placeID withCallback:(void (^)(BOOL success, NSError* error))callback;
- (BOOL) addEddystoneInput:(NSString*)name department:(ProximiioDepartment*)department location:(CLLocationCoordinate2D)location namespaceID:(NSString*)namespaceID instanceID:(NSString*)instanceID triggersFloorChange:(BOOL)triggersFloorChange triggersPlaceChange:(BOOL)triggersPlaceChange floorID:(NSString*)floorID placeID:(NSString*)placeID withCallback:(void (^)(BOOL success, NSError* error))callback;
- (BOOL) addCustomInput:(NSString*)name department:(ProximiioDepartment*)department location:(CLLocationCoordinate2D)location triggersFloorChange:(BOOL)triggersFloorChange triggersPlaceChange:(BOOL)triggersPlaceChange floorID:(NSString*)floorID placeID:(NSString*)placeID withCallback:(void (^)(BOOL success, NSError* error))callback;


- (BOOL) updatePlace:(NSString*)ID name:(NSString*)name location:(CLLocationCoordinate2D)location address:(NSString*)address indoorAtlasVenueID:(NSString*)venueID tags:(NSArray*)tags withCallback:(void (^)(BOOL success, NSError* error))callback;
- (BOOL) updateFloor:(NSString*)ID name:(NSString*)name floorID:(NSString*)floorID floorPlanID:(NSString*)floorPlanID place:(ProximiioPlace*)place withCallback:(void (^)(BOOL success, NSError* error))callback;
- (BOOL) updateDepartment:(NSString*)ID name:(NSString*)name floor:(ProximiioFloor*)floor tags:(NSArray*)tags withCallback:(void (^)(BOOL success, NSError* error))callback;
- (BOOL) updateGeofence:(NSString*)ID name:(NSString*)name department:(ProximiioDepartment*)department location:(CLLocationCoordinate2D)location radius:(double)radius address:(NSString*)address withCallback:(void (^)(BOOL success, NSError* error))callback;
- (BOOL) updateiBeaconInput:(NSString*)ID name:(NSString*)name department:(ProximiioDepartment*)department location:(CLLocationCoordinate2D)location uuid:(NSString*)uuid major:(int)major minor:(int)minor triggersFloorChange:(BOOL)triggersFloorChange triggersPlaceChange:(BOOL)triggersPlaceChange floorID:(NSString*)floorID placeID:(NSString*)placeID withCallback:(void (^)(BOOL success, NSError* error))callback;
- (BOOL) updateEddystoneInput:(NSString*)ID name:(NSString*)name department:(ProximiioDepartment*)department location:(CLLocationCoordinate2D)location namespaceID:(NSString*)namespaceID instanceID:(NSString*)instanceID triggersFloorChange:(BOOL)triggersFloorChange triggersPlaceChange:(BOOL)triggersPlaceChange floorID:(NSString*)floorID placeID:(NSString*)placeID withCallback:(void (^)(BOOL success, NSError* error))callback;
- (BOOL) updateCustomInput:(NSString*)ID name:(NSString*)name department:(ProximiioDepartment*)department location:(CLLocationCoordinate2D)location triggersFloorChange:(BOOL)triggersFloorChange triggersPlaceChange:(BOOL)triggersPlaceChange floorID:(NSString*)floorID placeID:(NSString*)placeID withCallback:(void (^)(BOOL success, NSError* error))callback;


- (void) deletePlace:(NSString*)ID      withCallback:(void (^)(BOOL success, NSError* error))callback;
- (void) deleteFloor:(NSString*)ID      withCallback:(void (^)(BOOL success, NSError* error))callback;
- (void) deleteDepartment:(NSString*)ID withCallback:(void (^)(BOOL success, NSError* error))callback;
- (void) deleteGeofence:(NSString*)ID   withCallback:(void (^)(BOOL success, NSError* error))callback;
- (void) deleteInput:(NSString*)ID      withCallback:(void (^)(BOOL success, NSError* error))callback;


- (void) addCustomiBeaconUUID:(NSString*)uuid;

@end