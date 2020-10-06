//
//  TurfMeasure.h
//  Proximiio
//
//  Created by dev on 10/20/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import <Proximiio/ProximiioLocation.h>

@interface TurfMeasure : NSObject
+ (CLLocationCoordinate2D) coordinate:(CLLocationCoordinate2D)coordinate distanceInMeter:(double)distanceKm bearing:(double)bearing;
+ (double) direction:(CLLocation *)start and:(CLLocation *)end;
+ (double) distance:(CLLocation *)start and:(CLLocation *)end;
@end
