//
//  TurfLineSegment.h
//  Proximiio
//
//  Created by dev on 10/18/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface TurfLineSegment : NSObject

-(id)initWithStart: (CLLocationCoordinate2D)start andEnd:(CLLocationCoordinate2D)end;

@property CLLocationCoordinate2D start;
@property CLLocationCoordinate2D end;
@end
