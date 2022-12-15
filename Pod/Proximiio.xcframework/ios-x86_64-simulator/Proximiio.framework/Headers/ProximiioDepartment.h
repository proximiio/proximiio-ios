//
//  ProximiioDepartment.h
//  ProximiioApp
//
//  Created by Proximi.io Developer Team on 09/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import "ProximiioResource.h"
#import "ProximiioPlace.h"
#import "ProximiioFloor.h"

@interface ProximiioDepartment: ProximiioResource

+ (ProximiioDepartment *)departmentFromJSON:(NSDictionary *)json;

- (ProximiioPlace *)place;
- (ProximiioFloor *)floor;

@property (nonatomic, strong) NSString *placeId;
@property (nonatomic, strong) NSString *floorId;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSArray *tags;
@property (nonatomic, strong) NSDictionary *metadata;

@end
