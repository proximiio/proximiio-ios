//
//  Proximiio.h
//
//
//  Created by Proximi.io Developer Team 23/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Proximiio/ProximiioLocation.h>
#import <Proximiio/ProximiioLocationSource.h>
#import <Proximiio/ProximiioState.h>
#import <Proximiio/ProximiioMode.h>
#import <Proximiio/ProximiioGeofence.h>
#import <Proximiio/ProximiioIBeacon.h>
#import <Proximiio/ProximiioEddystoneBeacon.h>
#import <Proximiio/ProximiioInput.h>
#import <Proximiio/ProximiioAPIResult.h>
#import <Proximiio/ProximiioResourceManager.h>
#import <Proximiio/ProximiioInputType.h>
#import <Proximiio/ProximiioBufferSize.h>
#import <Proximiio/ProximiioEventType.h>
#import <Proximiio/ProximiioPrivacyZone.h>

//! Project version number for Proximiio.
FOUNDATION_EXPORT double ProximiioVersionNumber;

//! Project version string for Proximiio.
FOUNDATION_EXPORT const unsigned char ProximiioVersionString[];

@interface Proximiio : NSObject

+ (Proximiio*)sharedInstance;

- (void)authWithToken:(NSString *)token callback:(void (^)(ProximiioState result))callback;

- (id)initWithDelegate:(id)delegate token:(NSString *)token;

- (void)requestPermissions;
- (void)extendBackgroundTime;

- (void)startUpdating;
- (void)stopUpdating;

- (void)setBufferSize:(ProximiioBufferSize)bufferSize;

- (BOOL)authenticated;
- (void)resetAndRefresh;
- (void)setUpdateInterval:(double)updateInterval;
- (void)addCustomiBeaconUUID:(NSString*)uuid;
- (void)enable;
- (void)disable;
- (void)wipeLocalCache;

- (NSString*)token;
- (ProximiioApplication *)application;
- (NSString *)visitorId;
- (ProximiioLocation *)location;
- (NSArray *)geofencesForLocation:(ProximiioLocation *)location;
- (NSArray *)lastGeofences;
- (CBManagerState)btState;
- (ProximiioFloor*)currentFloor;

- (void)handlePush:(NSString *)title;
- (void)handleOutput:(NSObject *)payload;
- (void)handleFloorChange:(ProximiioFloor *)floor;

- (void)setDesiredAccuracy:(CLLocationAccuracy)desiredAccuracy;
- (CLLocationAccuracy)desiredAccuracy;
- (void)setAllowsBackgroundLocationUpdates:(BOOL)enabled;

@property (weak) id delegate;
@property (nonatomic, strong, readonly) NSString *visitorId;
@property (readonly) BOOL remoteMode;

-(NSArray *)places;
-(NSArray *)floors;
-(NSArray *)departments;
-(NSArray *)geofences;
-(NSArray *)applications;
-(NSArray *)privacyZones;
-(NSArray *)inputs;

// DEPRECATE
+ (NSString *)visitorId  __attribute__((deprecated("Class level visitorId has been deprecated, please use instance level visitorId instead")));
- (ProximiioLocation *)lastLocation __attribute__((deprecated("lastLocation has been deprecated, please use location instead")));

// DEPRECATE: management methods

- (void)selectApplication:(NSString *)uuid __attribute__((deprecated("Management methods will be removed in future")));

- (void)authWithEmail:(NSString *)email password:(NSString *)password callback:(void (^)(ProximiioState result))callback  __attribute__((deprecated("Management methods will be removed in future")));
- (id)initWithDelegate:(id)delegate email:(NSString *)email password:(NSString *)password __attribute__((deprecated("Management methods will be removed in future")));

- (void)registerWithEmail:(NSString *)email
                 password:(NSString *)password
                firstName:(NSString *)firstName
                 lastName:(NSString *)lastName
                  company:(NSString *)company
               background:(NSString *)background
                  country:(NSString *)country
                 callback:(void (^)(ProximiioState result))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)addPlace:(NSString *)name location:(CLLocationCoordinate2D)location
         address:(NSString *)address
indoorAtlasVenueID:(NSString *)indoorAtlasVenueId
            tags:(NSArray *)tags
    withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)addFloor:(NSString*)name
         floorID:(NSString*)floorID
     floorPlanID:(NSString*)floorPlanID
           place:(ProximiioPlace*)place
     floorNumber:(NSNumber*)floorNumber
         anchors:(NSArray*)anchors
    withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)addDepartment:(NSString*)name
                place:(ProximiioPlace*)place
                floor:(ProximiioFloor*)floor
                 tags:(NSArray*)tags
         withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)addGeofence:(NSString*)name
               type:(NSString*)type
               area:(ProximiioLocation*)area
            address:(NSString *)address
             radius:(double)radius
            polygon:(NSArray*)polygon
         department:(ProximiioDepartment*)department
              floor:(ProximiioFloor*)floor
              place:(ProximiioPlace*)place
       withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)addPrivacyZone:(NSString*)name
                  type:(NSString*)type
                  area:(ProximiioLocation*)area
               address:(NSString *)address
                radius:(double)radius
               polygon:(NSArray*)polygon
            department:(ProximiioDepartment*)department
                 floor:(ProximiioFloor*)floor
                 place:(ProximiioPlace*)place
          withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)addiBeaconInput:(NSString*)name
             department:(ProximiioDepartment*)department
               location:(CLLocationCoordinate2D)location
                 height:(int)height
                   uuid:(NSString*)uuid
                  major:(int)major
                  minor:(int)minor
           withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)addEddystoneInput:(NSString*)name
               department:(ProximiioDepartment*)department
                   height:(int)height
                 location:(CLLocationCoordinate2D)location
              namespaceID:(NSString*)namespaceID
               instanceID:(NSString*)instanceID
             withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)addCustomInput:(NSString*)name
            department:(ProximiioDepartment*)department
                height:(int)height
              location:(CLLocationCoordinate2D)location
          withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)addApplication:(NSString*)name
        nativeLocation:(BOOL)nativeLocation
        nativeAccuracy:(int)nativeAccuracy
              iBeacons:(BOOL)iBeacons
            eddystones:(BOOL)eddystones
           indoorAtlas:(BOOL)indoorAtlas
     indoorAtlasApiKey:(NSString*)iaApiKey
indoorAtlasApiKeySecret:(NSString*)iaApiKeySecret
            remoteMode:(BOOL)remoteMode
           useGeofence:(BOOL)useGeofence
      useTrilateration:(BOOL)useTrilateration
    useNetworkInterval:(BOOL)useNetworkInterval
       networkInterval:(int)networkInterval
   activationThreshold:(int)activationThreshold
          withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)updatePlace:(NSString *)uuid
               name:(NSString *)name
           location:(CLLocationCoordinate2D)location
            address:(NSString *)address
 indoorAtlasVenueID:(NSString *)indoorAtlasVenueId
               tags:(NSArray *)tags
       withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)updateFloor:(NSString*)ID
               name:(NSString*)name
        floorPlanID:(NSString*)floorPlanID
              place:(ProximiioPlace*)place
        floorNumber:(NSNumber*)floorNumber
            anchors:(NSArray*)anchors
       withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)updateDepartment:(NSString*)ID
                    name:(NSString*)name
                   place:(ProximiioPlace*)place
                   floor:(ProximiioFloor*)floor
                    tags:(NSArray*)tags
            withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)updateGeofence:(NSString*)ID
                  name:(NSString *)name
                  type:(NSString*)type
                  area:(ProximiioLocation*)area
               address:(NSString *)address
                radius:(double)radius
               polygon:(NSArray*)polygon
            department:(ProximiioDepartment*)department
                 floor:(ProximiioFloor*)floor
                 place:(ProximiioPlace*)place
          withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)updatePrivacyZone:(NSString*)ID
                     name:(NSString *)name
                     type:(NSString*)type
                     area:(ProximiioLocation*)area
                  address:(NSString *)address
                   radius:(double)radius
                  polygon:(NSArray*)polygon
               department:(ProximiioDepartment*)department
                    floor:(ProximiioFloor*)floor
                    place:(ProximiioPlace*)place
             withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)updateiBeaconInput:(NSString*)ID
                      name:(NSString*)name
                department:(ProximiioDepartment*)department
                  location:(CLLocationCoordinate2D)location
                    height:(int)height
                      uuid:(NSString*)uuid
                     major:(int)major
                     minor:(int)minor
       triggersFloorChange:(BOOL)triggersFloorChange
       triggersPlaceChange:(BOOL)triggersPlaceChange
                   floorID:(NSString*)floorID
                   placeID:(NSString*)placeID
              withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)updateEddystoneInput:(NSString*)ID
                        name:(NSString*)name
                  department:(ProximiioDepartment*)department
                    location:(CLLocationCoordinate2D)location
                      height:(int)height
                 namespaceID:(NSString*)namespaceID
                  instanceID:(NSString*)instanceID
         triggersFloorChange:(BOOL)triggersFloorChange
         triggersPlaceChange:(BOOL)triggersPlaceChange
                     floorID:(NSString*)floorID
                     placeID:(NSString*)placeID
                withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)updateCustomInput:(NSString*)ID
                     name:(NSString*)name
               department:(ProximiioDepartment*)department
                 location:(CLLocationCoordinate2D)location
                   height:(int)height
      triggersFloorChange:(BOOL)triggersFloorChange
      triggersPlaceChange:(BOOL)triggersPlaceChange
                  floorID:(NSString*)floorID
                  placeID:(NSString*)placeID
             withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (BOOL)updateApplication:(NSString*)ID
                     name:(NSString*)name
           nativeLocation:(BOOL)nativeLocation
           nativeAccuracy:(int)nativeAccuracy
                 iBeacons:(BOOL)iBeacons
               eddystones:(BOOL)eddystones
              indoorAtlas:(BOOL)indoorAtlas
        indoorAtlasApiKey:(NSString*)iaApiKey
  indoorAtlasApiKeySecret:(NSString*)iaApiKeySecret
               remoteMode:(BOOL)remoteMode
              useGeofence:(BOOL)useGeofence
         useTrilateration:(BOOL)useTrilateration
       useNetworkInterval:(BOOL)useNetworkInterval
          networkInterval:(int)networkInterval
      activationThreshold:(int)activationThreshold
             withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

- (void)deleteApplication:(NSString *)uuid withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));
- (void)deletePlace:(NSString *)uuid withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));
- (void)deleteFloor:(NSString *)uuid withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));
- (void)deleteDepartment:(NSString *)uuid withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));
- (void)deleteGeofence:(NSString *)uuid withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));
- (void)deletePrivacyZone:(NSString *)uuid withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));
- (void)deleteInput:(NSString *)uuid withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

@end

@protocol ProximiioDelegate

@optional

- (void)proximiioPositionUpdated:(ProximiioLocation *)location;
- (void)proximiioEnteredGeofence:(ProximiioGeofence *)geofence;
- (void)proximiioExitedGeofence:(ProximiioGeofence *)geofence;
- (void)proximiioEnteredPrivacyZone:(ProximiioPrivacyZone *)privacyZone;
- (void)proximiioExitedPrivacyZone:(ProximiioPrivacyZone *)privacyZone;
- (void)proximiioFloorChanged:(ProximiioFloor *)floor;
- (void)proximiioFoundiBeacon:(ProximiioIBeacon *)beacon;
- (void)proximiioUpdatediBeacon:(ProximiioIBeacon *)beacon;
- (void)proximiioLostiBeacon:(ProximiioIBeacon *)beacon;
- (void)proximiioFoundEddystoneBeacon:(ProximiioEddystoneBeacon *)beacon;
- (void)proximiioUpdatedEddystoneBeacon:(ProximiioEddystoneBeacon *)beacon;
- (void)proximiioLostEddystoneBeacon:(ProximiioEddystoneBeacon *)beacon;

- (BOOL)proximiioHandlePushMessage:(NSString*)title;
- (void)proximiioHandleOutput:(NSObject*)payload;
- (NSDictionary*)proximiioProvideMetadataForEventWithType:(ProximiioEventType)eventType geofence:(ProximiioGeofence*)geofence location:(ProximiioLocation *)location;

- (void)onProximiioReady;
- (void)onProximiioAuthorizationInvalid;
- (void)onProximiioAuthorizationFailure;
- (void)proximiioCentralManagerDidUpdateState;
- (void)proximiioUpdatedApplications;
- (void)proximiioUpdatedDepartments;
- (void)proximiioUpdatedFloors;
- (void)proximiioUpdatedInputs;
- (void)proximiioUpdatedPlaces;
- (void)proximiioUpdatedGeofences;
- (void)proximiioUpdatedPrivacyZones;
@end
