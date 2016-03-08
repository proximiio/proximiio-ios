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
 @brief Determines if the input triggers a floor change
 */
@property (nonatomic, readonly) BOOL                    triggersFloorChange;
/*!
 @brief Floor to be changed to, in case this input triggers a floor change.
 */
@property (nonatomic, readonly) NSString*               floorID;
/*!
 @brief Determines if the input triggers a place/venue change
 */
@property (nonatomic, readonly) BOOL                    triggersPlaceChange;
/*!
 @brief Place (venue) to be changed to, in case this input triggers a place change.
 */
@property (nonatomic, readonly) NSString*               placeID;
/*!
 @brief Associated beacon filter.
 */
@property (nonatomic, readonly) ProximiioBeaconFilter   *beaconFilter;


- (NSString*)inputTypeString;

@end
