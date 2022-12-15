//
//  ProximiioGeofenceManager.h
//  ProximiioApp
//
//  Created by Proximi.io Developer Team on 09/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProximiioGeofence.h"
#import "ProximiioLocation.h"

@interface ProximiioGeofenceManager : NSObject

-(NSArray *)geofencesForLocation:(ProximiioLocation *)location;
-(void)updateWithLocation:(ProximiioLocation *)location;
-(void)exitAllGeofencesWith:(ProximiioLocation *)location;
+(id)sharedManager;
- (void)sendEnterGeofence:(ProximiioGeofence *)geofence location:(ProximiioLocation *)location;
- (void)sendExitGeofence:(ProximiioGeofence *)geofence location:(ProximiioLocation *)location;

@property (weak) id delegate;
@property (nonatomic, strong, readonly) NSArray *lastGeofences;
@property (nonatomic, strong, readonly) NSMutableArray *activeGeofences;


@end

@protocol ProximiioGeofenceManagerDelegate
- (void)didEnterGeofence:(ProximiioGeofence *)geofence;
- (void)didLeaveGeofence:(ProximiioGeofence *)geofence;
@end
