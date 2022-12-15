//
//  TurfRadianCoordinate2D.h
//  Proximiio
//
//  Created by dev on 10/18/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface TurfRadianCoordinate2D : NSObject

- (id)initWithLatitude:(double)latitude longitude:(double)longitude;
- (id)initWithCoordinate:(CLLocationCoordinate2D)coordinate;

- (double)directionTo:(TurfRadianCoordinate2D *)coordinate;
- (double)distanceTo:(TurfRadianCoordinate2D *)coordinate;
- (TurfRadianCoordinate2D *)coordinateAtDistance:(double)distance facingDirection:(double)direction;
- (CLLocationCoordinate2D)coordinate;

@property double latitude;
@property double longitude;
@end
