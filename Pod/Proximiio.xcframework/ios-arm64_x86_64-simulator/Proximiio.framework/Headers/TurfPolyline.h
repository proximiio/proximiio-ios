//
//  TurfPolyline.h
//  Proximiio
//
//  Created by dev on 10/18/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

#import <Proximiio/ProximiioGeoJSON.h>
#import <Proximiio/TurfIndexedCoordinate.h>
#import <Proximiio/TurfRadianCoordinate2D.h>

@interface TurfPolyline : NSObject

- (id)initWithFeature:(ProximiioGeoJSON *)feature;
- (id)initWithPointA:(CLLocationCoordinate2D)pointA pointB:(CLLocationCoordinate2D)pointB;
- (id)initWithPointA:(CLLocationCoordinate2D)pointA pointB:(CLLocationCoordinate2D)pointB level:(int)level;

- (CLLocationCoordinate2D)coordinateWithStart:(CLLocationCoordinate2D) coordinate distance:(double)distance bearing:(double)bearing;
- (CLLocationCoordinate2D)coordinateFromStart:(CLLocationDistance)distance;
- (TurfIndexedCoordinate *)closestCoordinateTo:(CLLocationCoordinate2D)_coordinate;

+ (TurfPolyline *)empty;
+ (CLLocationCoordinate2D)arrayToCLLocationCoordinate2D:(NSArray *)array;

@property (nonatomic, strong) NSArray *coordinates;
@property (nonatomic, strong) NSDictionary *properties;
@property (nonatomic, strong) ProximiioGeoJSON *feature;
@property (nonatomic) int level;

@end
