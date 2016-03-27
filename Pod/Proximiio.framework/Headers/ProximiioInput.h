//
//  ProximiioInput.h
//  Proximiio
//
//  Created by Marian Frische on 22.04.15.
//  Copyright (c) 2015 NavtureApps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "ProximiioNetworkObject.h"
#import "ProximiioBeaconFilter.h"


typedef enum : NSUInteger {
    kProximiioInputiBeacon,
    kProximiioInputEddystone,
    kProximiioInputCustom
} ProximiioInputType;


/*!
 @interface ProximiioInput
 @brief ProximiioInput base interface.
 */
@interface ProximiioInput : ProximiioNetworkObject


/*!
 @brief The location of this input.
 */
@property (nonatomic, readonly) ProximiioInputType      inputType;
/*
 @brief The location of this input.
 */
@property (nonatomic, readonly) CLLocation              *location;
/*!
 @brief The ID of the department this input belongs to.
 */
@property (nonatomic, readonly) NSString                *departmentUID;
/*!
 @brief Associated beacon filter.
 */
@property (nonatomic, readonly) ProximiioBeaconFilter   *beaconFilter;


- (NSString*)inputTypeString;

@end
