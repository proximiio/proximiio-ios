//
//  ProximiioPlace.h
//  Proximiio
//
//  Created by Marian Frische on 29.05.15.
//  Copyright (c) 2015 NavtureApps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "ProximiioNetworkObject.h"

/*!
 @interface ProximiioPlace
 @brief ProximiioPlace interface.
 */
@interface ProximiioPlace : ProximiioNetworkObject


/*!
 @brief The address of this place.
 */
@property (nonatomic, readonly) NSString *address;
/*!
 @brief The location of this place.
 */
@property (nonatomic, readonly) CLLocation *location;
/*!
 @brief An array of tags that is assigned to this place.
 */
@property (nonatomic, readonly) NSArray *tags;
/*!
 @brief The IA venue id of this place.
 */
@property (nonatomic, readonly) NSString *IndoorAtlasVenueID;


@end
