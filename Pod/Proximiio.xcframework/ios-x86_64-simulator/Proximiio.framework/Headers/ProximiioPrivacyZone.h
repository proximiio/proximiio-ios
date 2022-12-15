//
//  ProximiioPrivacyZone.h
//  Proximiio
//
//  Created by Matej Drzik on 01/11/2018.
//  Copyright © 2018 proximi.io. All rights reserved.
//

#import "ProximiioResource.h"
#import "ProximiioLocation.h"
#import "ProximiioPlace.h"
#import "ProximiioDepartment.h"

@interface ProximiioPrivacyZone : ProximiioResource

+ (ProximiioPrivacyZone *)privacyZoneFromJSON:(NSDictionary *)json;

- (BOOL)isPolygon;

- (ProximiioDepartment *) department;
- (ProximiioFloor *)floor;
- (ProximiioPlace *)place;

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) ProximiioLocation *area;
@property (nonatomic, strong) NSString *address;
@property double radius;
@property (nonatomic, strong) NSArray *polygon;
@property (nonatomic, strong) NSString *departmentId;
@property (nonatomic, strong) NSString *placeId;
@property (nonatomic, strong) NSString *floorId;
@property (nonatomic, strong) NSDictionary *metadata;

@end
