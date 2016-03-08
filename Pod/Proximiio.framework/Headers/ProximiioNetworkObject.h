//
//  ProximiioNetworkObject.h
//  Proximiio
//
//  Created by Marian Frische on 06.02.16.
//  Copyright © 2016 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>


typedef enum : NSInteger
{
    kProximiioObjectPlace       = 0,
    kProximiioObjectFloor       = 1,
    kProximiioObjectDepartment  = 2,
    kProximiioObjectInput       = 3,
    kProximiioObjectGeofence    = 4,
    kProximiioObjectApplication = 5
} ProximiioNetworkObjectType;


@interface ProximiioNetworkObject : NSObject


/*!
 @brief The unique object ID.
 */
@property (nonatomic, readonly) NSString *ID;
/*!
 @brief The network parents of this object.
 */
@property (nonatomic, readonly) ProximiioNetworkObject *parent;
/*!
 @brief The network parents of this object.
 */
@property (nonatomic, readonly) NSString *parentID;
/*!
 @brief The network children of this object.
 */
@property (nonatomic, readonly) NSArray *children;
/*!
 @brief The name of this object.
 */
@property (nonatomic, readonly) NSString *name;
/*!
 @brief The description of this object.
 */
@property (nonatomic, readonly) NSString *objectDescription;
/*!
 @brief The description of this object.
 */
@property (nonatomic, readonly) NSString *json;
/*!
 @brief The description of this object.
 */
@property (nonatomic, readonly) ProximiioNetworkObjectType type;
/*!
 @brief The organization ID of this object.
 */
@property (nonatomic, readonly) NSString *organizationID;


+ (NSString*) stringForType:(ProximiioNetworkObjectType)type;

- (NSArray*) ancenstorsToLevel:(int)level;

@end
