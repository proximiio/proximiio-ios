//
//  ProximiioEvent.h
//  ProximiioApp
//
//  Created by Proximi.io Developer Team on 19/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import "ProximiioResource.h"
#import "ProximiioGeofence.h"
#import "ProximiioLocationSource.h"
#import "ProximiioLocation.h"
#import "ProximiioEventType.h"

@interface ProximiioEvent : ProximiioResource

+(void)emitWithGeofence:(ProximiioGeofence *)geofence type:(ProximiioEventType)type location:(ProximiioLocation *)location;

@end
