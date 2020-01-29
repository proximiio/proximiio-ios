//
//  ProximiioIndoorAtlas.h
//  ProximiioApp
//
//  Created by Proximi.io Developer Team on 07/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import "ProximiioLocationSource.h"
#import <IndoorAtlas/IALocationManager.h>

@interface ProximiioIndoorAtlas : ProximiioLocationSource <IALocationManagerDelegate>

- (void)proximiioLocationUpdated:(ProximiioLocation *)location;

@property (nonatomic) BOOL isMonitoring;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic, strong) NSTimer *updateTimer;
@property (nonatomic, strong) IALocationManager *locationManager;
@property (nonatomic, strong) NSArray *lastLocations;

@end
