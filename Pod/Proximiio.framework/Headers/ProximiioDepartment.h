//
//  ProximiioDepartment.h
//  Proximiio
//
//  Created by Marian Frische on 27.04.15.
//  Copyright (c) 2015 NavtureApps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProximiioNetworkObject.h"


/*!
 @interface ProximiioDepartment
 @brief ProximiioDepartment interface.
 */
@interface ProximiioDepartment : ProximiioNetworkObject


@property (nonatomic, readonly) NSString *placeID;
/*!
 @brief An array of tags that is assigned to this department.
 */
@property (nonatomic, readonly) NSArray  *tags;


@end
