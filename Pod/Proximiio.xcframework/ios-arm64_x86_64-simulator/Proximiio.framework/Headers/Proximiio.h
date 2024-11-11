//
//  Proximiio.h
//
//
//  Created by Proximi.io Developer Team 23/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ProximiioAPI.h"
#import "ProximiioLocation.h"
#import "ProximiioLocationSource.h"
#import "ProximiioState.h"
#import "ProximiioMode.h"
#import "ProximiioGeofence.h"
#import "ProximiioIBeacon.h"
#import "ProximiioEddystoneBeacon.h"
#import "ProximiioInput.h"
#import "ProximiioAPIResult.h"
#import "ProximiioResourceManager.h"
#import "ProximiioInputType.h"
#import "ProximiioBufferSize.h"
#import "ProximiioEventType.h"
#import "ProximiioPrivacyZone.h"
#import "ProximiioLocationManager.h"
#import "ProximiioGeoJSON.h"
#import "ProximiioPointOnLine.h"
#import "ProximiioLine.h"
#import "ProximiioMapStyle.h"
#import "ProximiioJWT.h"
#import "ProximiioCampus.h"
#import "Turf.h"
#import "TurfMeasure.h"
#import "TurfRadianCoordinate2D.h"
#import "ProximiioReachability.h"
#import "TurfIndexedCoordinate.h"
#import "CLLocation+GreatCircleExtensions.h"
#import "ProximiioMetricsManager.h"
#import "ProximiioFeatureManager.h"
#import "ProximiioCampusManager.h"
#import "Trigonometry.h"
#import "IndexedAverage.h"
#import "ProximiioTrilateration.h"
#import "ProximiioKalmanFilter.h"
#import "ProximiioFirebaseManager.h"
#import "ProximiioIBeacon+Setter.h"
#import "ProximiioMotionManager.h"
#import "ProximiioPrivacyZoneManager.h"
#import "ProximiioEvent.h"
#import "AccelerometerFilter.h"
#import "NSNullExtension.h"
#import "matrix.h"
#import "ProximiioLocationManagerDelegate.h"
#import "ProximiioEddystoneBeacon+Setter.h"
#import "kalman.h"
#import "ProximiioEventBuffer.h"
#import "GreatCircle.h"
#import "ProximiioAmenityManager.h"
#import "TurfPolyline.h"
#import "ProximiioFormatter.h"
#import "ProximiioAmenityCategoryManager.h"
#import "ProximiioAmenity.h"
#import "ProximiioAmenityCategory.h"


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

- (void)setLocalDataMode:(BOOL)mode package:(NSDictionary *)package;
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
