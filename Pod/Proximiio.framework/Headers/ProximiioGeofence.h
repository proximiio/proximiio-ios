//
//  ProximiioGeofence.h
//  ProximiioApp
//
//  Created by Proximi.io Developer Team on 09/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import <Proximiio/ProximiioResource.h>
#import <Proximiio/ProximiioLocation.h>
#import <Proximiio/ProximiioPlace.h>
#import <Proximiio/ProximiioDepartment.h>

@interface ProximiioGeofence : ProximiioResource

+ (ProximiioGeofence *)geofenceFromJSON:(NSDictionary *)json;

- (BOOL)isPolygon;
- (CLCircularRegion *) circularRegion;

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) ProximiioLocation *area;
@property (nonatomic, strong) NSString *address;
@property double radius;
@property (nonatomic, strong) NSArray *polygon;
@property (nonatomic, strong) ProximiioDepartment *department;
@property (nonatomic, strong) NSString *departmentId;
@property (nonatomic, strong) ProximiioPlace *place;
@property (nonatomic, strong) NSString *placeId;
@property (nonatomic, strong) ProximiioFloor *floor;
@property (nonatomic, strong) NSString *floorId;
@property (nonatomic, strong) NSDictionary *metadata;

@end
