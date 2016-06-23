//
//  Proximiio.h
//
//
//  Created by Matej Držík on 23/06/16.
//  Copyright © 2016 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProximiioLocation.h"
#import "ProximiioLocationSource.h"
#import "ProximiioState.h"
#import "ProximiioMode.h"
#import "ProximiioGeofence.h"
#import "ProximiioIBeacon.h"
#import "ProximiioEddystoneBeacon.h"

//! Project version number for Proximiio.
FOUNDATION_EXPORT double ProximiioVersionNumber;

//! Project version string for Proximiio.
FOUNDATION_EXPORT const unsigned char ProximiioVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Proximiio/PublicHeader.h>



@interface Proximiio : NSObject

- (id)initWithDelegate:(id)delegate token:(NSString *)token;
- (id)initWithDelegate:(id)delegate email:(NSString *)email password:(NSString *)password;

- (void)authWithToken:(NSString *)token callback:(void (^)(ProximiioState result))callback;
- (void)authWithEmail:(NSString *)email password:(NSString *)password callback:(void (^)(ProximiioState result))callback;

@property (weak) id delegate;
@property (nonatomic) id instance;

@end

@protocol ProximiioDelegate

@optional

- (void)proximiioPositionUpdated:(ProximiioLocation *)location;

- (void)proximiioEnteredGeofence:(ProximiioGeofence *)geofence;
- (void)proximiioExitedGeofence:(ProximiioGeofence *)geofence;
- (void)proximiioFloorChanged:(ProximiioFloor *)floor;
- (void)proximiioFoundiBeacon:(ProximiioIBeacon *)beacon;
- (void)proximiioUpdatediBeacon:(ProximiioIBeacon *)beacon;
- (void)proximiioLostiBeacon:(ProximiioIBeacon *)beacon;
- (void)proximiioFoundEddystoneBeacon:(ProximiioEddystoneBeacon *)beacon;
- (void)proximiioUpdatedEddystoneBeacon:(ProximiioEddystoneBeacon *)beacon;
- (void)proximiioLostEddystoneBeacon:(ProximiioEddystoneBeacon *)beacon;

- (BOOL)proximiioHandlePushMessage:(NSString*)title;
- (void)proximiioHandleOutput:(NSObject*)payload;

- (void)onProximiioReady;
- (void)onProximiioAuthorizationInvalid;
- (void)onProximiioAuthorizationFailure;

@end