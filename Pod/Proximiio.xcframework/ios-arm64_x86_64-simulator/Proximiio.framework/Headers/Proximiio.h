//
//  Proximiio.h
//
//
//  Created by Proximi.io Developer Team 23/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <Proximiio/ProximiioAmenity.h>
#import <Proximiio/ProximiioAmenityCategory.h>
#import <Proximiio/ProximiioAPI.h>
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
#import <Proximiio/ProximiioLocationManager.h>
#import <Proximiio/ProximiioGeoJSON.h>
#import <Proximiio/ProximiioPointOnLine.h>
#import <Proximiio/ProximiioLine.h>
#import <Proximiio/ProximiioMapStyle.h>
#import <Proximiio/ProximiioJWT.h>
#import <Proximiio/ProximiioCampus.h>
#import <Proximiio/Turf.h>
#import <Proximiio/TurfMeasure.h>
#import <Proximiio/TurfRadianCoordinate2D.h>
#import <Proximiio/ProximiioReachability.h>
#import <Proximiio/TurfIndexedCoordinate.h>
#import <Proximiio/CLLocation+GreatCircleExtensions.h>
#import <Proximiio/ProximiioMetricsManager.h>
#import <Proximiio/ProximiioFeatureManager.h>
#import <Proximiio/ProximiioCampusManager.h>
#import <Proximiio/Trigonometry.h>
#import <Proximiio/IndexedAverage.h>
#import <Proximiio/ProximiioTrilateration.h>
#import <Proximiio/ProximiioKalmanFilter.h>
#import <Proximiio/ProximiioFirebaseManager.h>
#import <Proximiio/ProximiioIBeacon+Setter.h>
#import <Proximiio/ProximiioMotionManager.h>
#import <Proximiio/ProximiioPrivacyZoneManager.h>
#import <Proximiio/ProximiioEvent.h>
#import <Proximiio/AccelerometerFilter.h>
#import <Proximiio/NSNullExtension.h>
#import <Proximiio/matrix.h>
#import <Proximiio/ProximiioLocationManagerDelegate.h>
#import <Proximiio/ProximiioEddystoneBeacon+Setter.h>
#import <Proximiio/kalman.h>
#import <Proximiio/ProximiioEventBuffer.h>
#import <Proximiio/GreatCircle.h>
#import <Proximiio/ProximiioAmenityManager.h>
#import <Proximiio/TurfPolyline.h>
#import <Proximiio/ProximiioFormatter.h>
#import <Proximiio/ProximiioAmenityCategoryManager.h>


//! Project version number for Proximiio.
FOUNDATION_EXPORT double ProximiioVersionNumber;

//! Project version string for Proximiio.
FOUNDATION_EXPORT const unsigned char ProximiioVersionString[];

@interface Proximiio : NSObject

+ (Proximiio*)sharedInstance;

- (void)authWithToken:(NSString *)token callback:(void (^)(ProximiioState result))callback;

- (id)initWithDelegate:(id)delegate token:(NSString *)token;

- (void)requestPermissions:(BOOL)always;
- (void)extendBackgroundTime;

- (void)startUpdating;
- (void)stopUpdating;

- (void)sync:(void (^)(BOOL completed))callback;

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

- (NSArray<ProximiioPlace *>*)places;
- (NSArray<ProximiioFloor *>*)floors;
- (NSArray<ProximiioDepartment *>*)departments;
- (NSArray<ProximiioGeofence *>*)geofences;
- (NSArray<ProximiioApplication *>*)applications;
- (NSArray<ProximiioPrivacyZone *>*)privacyZones;
- (NSArray<ProximiioInput *>*)inputs;

-(ProximiioPlace *)getPlace:(NSString *)uuid;
-(ProximiioFloor *)getFloor:(NSString *)uuid;
-(ProximiioDepartment *)getDepartment:(NSString *)uuid;
-(ProximiioGeofence *)getGeofence:(NSString *)uuid;
-(ProximiioApplication *)getApplication:(NSString *)uuid;
-(ProximiioPrivacyZone *)getPrivacyZone:(NSString *)uuid;
-(ProximiioInput *)getInput:(NSString *)uuid;

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

- (void)deleteApplication:(NSString *)uuid withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));
- (void)deletePlace:(NSString *)uuid withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));
- (void)deleteFloor:(NSString *)uuid withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));
- (void)deleteDepartment:(NSString *)uuid withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));
- (void)deleteGeofence:(NSString *)uuid withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));
- (void)deletePrivacyZone:(NSString *)uuid withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));
- (void)deleteInput:(NSString *)uuid withCallback:(void (^)(BOOL success, NSError* error))callback __attribute__((deprecated("Management methods will be removed in future")));

@end

// MARK: - Delegates
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
