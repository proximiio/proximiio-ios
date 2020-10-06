//
//  ProximiioEvent.h
//  ProximiioApp
//
//  Created by Proximi.io Developer Team on 19/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import <Proximiio/ProximiioResource.h>
#import <Proximiio/ProximiioGeofence.h>
#import <Proximiio/ProximiioLocationSource.h>
#import <Proximiio/ProximiioLocation.h>
#import <Proximiio/ProximiioEventType.h>

@interface ProximiioEvent : ProximiioResource

+(void)emitWithGeofence:(ProximiioGeofence *)geofence type:(ProximiioEventType)type location:(ProximiioLocation *)location;

@end
