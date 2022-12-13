//
//  ProximiioPointOnLine.h
//  Proximiio
//
//  Created by dev on 11/27/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import "ProximiioLine.h"

@interface ProximiioPointOnLine : NSObject
@property (nonatomic, assign) int index;
@property (nonatomic, assign) double distanceFromLine;
@property (nonatomic, assign) CLLocationCoordinate2D point;

-(id) initWithDistanceFromLine: (double)distance point:(CLLocationCoordinate2D)point index:(int)index;
@end
