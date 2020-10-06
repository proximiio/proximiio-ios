//
//  TurfIndexedCoordinate.h
//  Proximiio
//
//  Created by dev on 10/18/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

#import <Proximiio/ProximiioLocation.h>

@interface TurfIndexedCoordinate : NSObject
- (id)initWithCoordinate:(CLLocationCoordinate2D) coordinate index:(int)index distance:(CLLocationDistance)distance;
+ (TurfIndexedCoordinate *)nearestCoordinateTo:(ProximiioLocation *)location atLevel:(int)level inPaths:(NSArray *)paths andThreshold:(double)threshold;

@property (nonatomic) CLLocationCoordinate2D coordinate;
@property int index;
@property double location;
@property (nonatomic) CLLocationDistance distance;
@end
