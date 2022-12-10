
//
//  ProximiioIBeacon+Setter.h
//  ProximiioSDK
//
//  Created by Marian Frische on 27.09.14.
//  Copyright (c) 2014 Navture Apps. All rights reserved.
//

#import <Proximiio/ProximiioIBeacon.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface ProximiioIBeacon (Setter)

@property (nonatomic, readwrite) NSUUID *uuid;
@property (nonatomic, readwrite) int major;
@property (nonatomic, readwrite) int minor;
@property (nonatomic, readwrite) int rssi;

- (ProximiioIBeacon*)initWithCLBeacon:(CLBeacon*)beacon;
- (ProximiioIBeacon*)initWithUUID:(NSString*)uuid major:(int)major minor:(int)minor;

- (void)setAssociatedCLBeacon:(CLBeacon*)beacon;

- (void)setProximity:(CLProximity)proximity;
- (void)setDistance:(double)distance;

- (void)updateFromBeacon;

- (BOOL)compliesToCLBeacon:(CLBeacon*)beacon;

@end
