//
//  ProximiioCoreLocation.h
//  Proximiio
//
//  Created by Matej Drzik on 25/04/2019.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "ProximiioLocationSource.h"
#import "ProximiioIBeacon.h"

NS_ASSUME_NONNULL_BEGIN

@interface ProximiioCoreLocation : ProximiioLocationSource <CLLocationManagerDelegate>

+ (ProximiioCoreLocation *)shared;

- (CLLocationAccuracy)desiredAccuracy;
- (void)addUUIDRegion:(NSUUID *)uuid;
- (void)setDesiredAccuracy:(CLLocationAccuracy)desiredAccuracy;
- (void)enableNative:(BOOL)enabled;
- (void)enableIBeacons:(BOOL)enabled;
- (void)enableRemoteMode:(BOOL)enabled;
- (void)requestPermissions:(BOOL)always;
- (BOOL)isAuthorized;
- (void)setAllowsBackgroundLocationUpdates:(BOOL)enabled;

@property CLAuthorizationStatus authorizationStatus;
@property (nonatomic, strong) NSMutableArray *beaconRegions;
@property (nonatomic, strong) NSMutableDictionary *existingBeacons;
@property (nonatomic, strong) NSTimer *updateTimer;
@property (nonatomic, strong) CLLocationManager *locationManager;
@property BOOL started;
@property BOOL nativeEnabled;
@property BOOL beaconsEnabled;
@property BOOL remoteModeEnabled;
@end

NS_ASSUME_NONNULL_END

@protocol ProximiioCoreLocationDelegate

- (void)didRequestBackgroundTime;
- (void)didChangeAuthorizationStatus:(CLAuthorizationStatus)status;
- (void)didUpdateLocation:(ProximiioLocation *_Nonnull)location;
- (void)didFoundIBeacon:(ProximiioIBeacon *_Nonnull)beacon;
- (void)didLostIBeacon:(ProximiioIBeacon *_Nonnull)beacon;
- (void)didUpdateBeacon:(ProximiioIBeacon *_Nonnull)beacon;
- (void)didFailWithError:(NSError*_Nonnull)error;

@end
