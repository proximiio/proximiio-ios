//
//  Turf.h
//  Proximiio
//
//  Created by dev on 10/18/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

#import "TurfLineSegment.h"
#import "ProximiioPointOnLine.h"
#import "ProximiioLine.h"
#import "Constant.h"

@interface Turf : NSObject
+ (CLLocationCoordinate2D) intersectionOfLine: (TurfLineSegment *)line1 withLine:(TurfLineSegment *)line2;

+ (double) bearing: (CLLocationCoordinate2D)pointA pointB:(CLLocationCoordinate2D)pointB;
+ (double) distance: (CLLocationCoordinate2D)pointA pointB:(CLLocationCoordinate2D)pointB;

@end
