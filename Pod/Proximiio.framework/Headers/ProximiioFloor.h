//
//  ProximiioFloor.h
//  ProximiioApp
//
//  Created by Matej Držík on 09/06/16.
//  Copyright © 2016 Quanto. All rights reserved.
//

#import "ProximiioResource.h"
#import "ProximiioPlace.h"

@interface ProximiioFloor : ProximiioResource

+ (ProximiioFloor *)floorFromJSON:(NSDictionary *)json;

@property (nonatomic, strong) ProximiioPlace *place;
@property (nonatomic, strong) NSString *placeId;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSArray *anchors;
@property (nonatomic, strong) NSString *indoorAtlasFloorId;
@property (nonatomic, strong) NSString *indoorAtlasFloorPlanId;

@end
