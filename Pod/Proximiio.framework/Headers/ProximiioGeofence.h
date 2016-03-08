//
//  ProximiioGeofence.h
//  Proximiio
//
//  Created by Marian Frische on 28.04.15.
//  Copyright (c) 2015 NavtureApps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "ProximiioNetworkObject.h"

/*!
 @interface ProximiioGeofence
 @brief ProximiioGeofence interface.
 */
@interface ProximiioGeofence : ProximiioNetworkObject

/*!
 @brief Location of the geofence.
 */
@property (nonatomic, readonly) CLLocation   *location;
/*!
 @brief Address of the geofence.
 */
@property (nonatomic, readonly) NSString     *address;
/*!
 @brief BOOL status if this geofence is currently being entered.
 */
@property (nonatomic, readonly) BOOL         entered;

/*!
 @brief Stating whether the user is currently within the geofence.
 @warning This value is only true when Geofences are currently enabled. Otherwise it might be out of date.
 */
- (BOOL) isInsideGeofence:(CLLocation*)location shouldBeIn:(BOOL)shouldBe;

@end
