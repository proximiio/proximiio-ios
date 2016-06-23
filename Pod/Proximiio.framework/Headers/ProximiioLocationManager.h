//
//  ProximiioLocationManager.h
//  ProximiioApp
//
//  Created by Matej Držík on 06/06/16.
//  Copyright © 2016 Quanto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProximiioApplication.h"
#import "ProximiioLocation.h"
#import "ProximiioLocationSource.h"
#import "ProximiioNativeLocation.h"
#import "ProximiioIndoorAtlas.h"
#import "ProximiioBeaconReceiver.h"
#import "ProximiioGeofenceManager.h"
#import "ProximiioBeaconRegenerator.h"
#import "ProximiioEddystoneReceiver.h"

@interface ProximiioLocationManager : NSObject <ProximiioLocationSourceDelegate, ProximiioIBeaconReceiverDelegate, ProximiioEddystoneReceiverDelegate>

-(void)startUpdating;
-(void)stopUpdating;
-(void)cleanUp;

+(id)sharedManager;
-(void)configureWithApplication:( ProximiioApplication *)application;

@property (readonly) BOOL isUpdating;
@property float processingInterval;

@property (weak) id delegate;
@property (nonatomic, strong) ProximiioApplication *application;
@property (nonatomic, strong) NSArray *locationSources;
@property (nonatomic, strong) NSMutableArray *locationBuffer;
@property (nonatomic, strong) NSTimer *processingTimer;
@property (nonatomic, strong) ProximiioLocation *lastLocation;

@property (nonatomic, strong) ProximiioGeofenceManager *geofenceManager;
@property (nonatomic, strong) ProximiioNativeLocation *nativeLocation;
@property (nonatomic, strong) ProximiioIndoorAtlas *indoorAtlas;
@property (nonatomic, strong) ProximiioBeaconReceiver *iBeaconReceiver;
@property (nonatomic, strong) ProximiioEddystoneReceiver *eddystoneReceiver;

@end

@protocol ProximiioLocationManagerDelegate

-(void)didUpdateLocation:(ProximiioLocation *)location;

@end