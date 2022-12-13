//
//  ProximiioFloor.h
//  ProximiioApp
//
//  Created by Proximi.io Developer Team on 09/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import "ProximiioResource.h"
#import "ProximiioPlace.h"

@interface ProximiioFloor : ProximiioResource

+ (ProximiioFloor *)floorFromJSON:(NSDictionary *)json;

- (ProximiioPlace *)place;

@property (nonatomic, strong) NSString *placeId;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSArray *anchors;
@property (nonatomic, strong) NSArray *cornerArray;
@property (nonatomic, strong) NSString *floorId;
@property (nonatomic, strong) NSString *floorPlanImageURL;
@property (nonatomic, strong) NSNumber *floorNumber;
@property (nonatomic, strong) NSNumber *level;
@property BOOL floorPlanFlipped;
@property float floorPlanWidth;
@property float floorPlanHeight;
@property float floorPlanHeading;
@property float floorPlanSideWidth;
@property float floorPlanSideHeight;
@property (nonatomic, strong) NSDictionary *metadata;

// @property (nonatomic, strong) ProximiioLocation *floorPlanPivot;


@end
