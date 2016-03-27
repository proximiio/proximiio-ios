//
//  ProximiioEddystoneBeacon.h
//  Proximiio
//
//  Created by Marian Frische on 31.07.15.
//  Copyright (c) 2015 NavtureApps. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProximiioEddystoneBeacon : NSObject

@property (nonatomic, readonly) NSData *IDData;
@property (nonatomic, readonly) NSString *Namespace;
@property (nonatomic, readonly) NSString *InstanceID;
@property (nonatomic, readonly) NSNumber *RSSI;
@property (nonatomic, readonly) NSNumber *txPower;
@property (nonatomic, readonly) NSNumber *accuracy;

@property (nonatomic, readonly) NSNumber *batteryVoltage;
@property (nonatomic, readonly) NSNumber *temperature;
@property (nonatomic, readonly) NSNumber *uptime;
@property (nonatomic, readonly) NSNumber *PDU;

@property (nonatomic, readonly) NSString *URL;

- (BOOL)hasAllValuesSet;

@end
