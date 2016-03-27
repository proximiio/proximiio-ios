//
//  ProximiioFloor.h
//  Proximiio
//
//  Created by Marian Frische on 08.06.15.
//  Copyright (c) 2015 NavtureApps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProximiioNetworkObject.h"

/*!
 @interface ProximiioFloor
 @brief ProximiioFloor interface.
 */
@interface ProximiioFloor : ProximiioNetworkObject



/*!
 @brief The floor ID of this floor. (IndoorAtlas)
 */
@property (nonatomic, readonly) NSString *floorID;

/*!
 @brief The floor plan ID of this floor. (IndoorAtlas)
 */
@property (nonatomic, readonly) NSString *floorPlanID;

/*!
 @brief The floor plan image URL of this floor.
 */
@property (nonatomic, readonly) NSString *floorPlanImageURL;

/*!
 @brief The floor number/level of this floor.
 */
@property (nonatomic, readonly) NSNumber *floorNumber;

/*!
 @brief The corners of this floor plan (coordinates) of this floor.
 */
@property (nonatomic, readonly) NSArray  *cornerArray;


@end
