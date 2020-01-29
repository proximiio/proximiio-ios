//
//  ProximiioLocationManager.h
//  ProximiioApp
//
//  Created by Proximi.io Developer Team on 06/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProximiioApplication.h"
#import "ProximiioLocation.h"
#import "ProximiioLocationSource.h"
#import "ProximiioIndoorAtlas.h"
#import "ProximiioGeofenceManager.h"
#import "ProximiioEddystoneReceiver.h"
#import "ProximiioFloor.h"
#import "ProximiioCoreLocation.h"
#import "ProximiioMotionManagerDelegate.h"
#import "ProximiioLocationProcessor.h"

@interface ProximiioLocationManager : NSObject <ProximiioLocationSourceDelegate, ProximiioCoreLocationDelegate, ProximiioEddystoneReceiverDelegate, ProximiioMotionManagerDelegate>

-(void)startUpdating;
-(void)stopUpdating;
-(void)cleanUp;
-(void)reset;
-(void)enable;
-(void)disable;
+(id)sharedManager;
-(void)configureWithApplication:( ProximiioApplication *)application;
-(void)setInterval:(double)interval;
-(void)setAllowsBackgroundLocationUpdates:(BOOL)enabled;
-(void)addProcessor:(id <ProximiioLocationProcessor>)processor avoidDuplicates:(BOOL) avoidDuplicates;

-(CBManagerState)btState;

@property (readonly) BOOL isUpdating;
@property float processingInterval;
@property float maxLocationAge;

@property (weak) id delegate;
@property (nonatomic, strong) ProximiioApplication *application;
@property (nonatomic, strong) NSArray *locationSources;
@property (nonatomic, strong) NSMutableArray *locationBuffer;
@property (nonatomic, strong) NSMutableArray *processors;
@property (nonatomic, strong) NSTimer *processingTimer;
@property (nonatomic, strong) ProximiioLocation *lastLocation;
@property (nonatomic, strong) NSTimer *customLocationTimer;
@property (nonatomic, strong) ProximiioGeofenceManager *geofenceManager;
@property (nonatomic, strong) ProximiioCoreLocation *coreLocationManager;
@property (nonatomic, strong) ProximiioIndoorAtlas *indoorAtlas;
@property (nonatomic, strong) ProximiioEddystoneReceiver *eddystoneReceiver;
@property (nonatomic, strong) ProximiioFloor *currentFloor;

@end
