//
//  ProximiioLine.h
//  Proximiio
//
//  Created by dev on 11/27/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@class ProximiioPointOnLine;

@interface ProximiioLine : NSObject
@property (nonatomic, assign) CLLocationCoordinate2D start;
@property (nonatomic, assign) CLLocationCoordinate2D end;

-(id)initWithStart: (CLLocationCoordinate2D)start end:(CLLocationCoordinate2D)end;
+(CLLocation*) intersection:(ProximiioLine*)line with:(ProximiioLine *)other;
+(ProximiioPointOnLine *) pointOnLine:(CLLocationCoordinate2D)point coordinates:(NSArray *)coordinates;
@end
