//
//  ProximiioApplication.h
//  ProximiioApp
//
//  Created by Proximi.io Developer Team 06/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProximiioResource.h"

typedef NS_ENUM(NSUInteger, tAccelerometerMode) {
    kAccelerometerOff = 0,
    kAccelerometerForegroundOn,
    kAccelerometerAlwaysOn,
};

@interface ProximiioApplication : ProximiioResource

@property (nonatomic, strong) NSString *name;

@property BOOL remoteMode;
@property BOOL usesNativeLocation;
@property BOOL usesIndoorAtlas;
@property BOOL usesIBeacons;
@property BOOL usesEddyStones;
@property BOOL usesGeofencePositioning;
@property BOOL usesTrilateration;
@property BOOL usesNetworkInterval;
@property BOOL usesFleetManagement;
@property tAccelerometerMode accelerometerMode;
@property int networkInterval;
@property int nativeActivationThreshold;
@property int maxBeaconDistance;
@property NSString *indoorAtlasApiKey;
@property NSString *indoorAtlasApiSecret;
    

+ (ProximiioApplication *)applicationFromJSON:(NSDictionary *)json;

@end
    
