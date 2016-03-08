//
//  ProximiioBeaconFilter.h
//  Proximiio
//
//  Created by Marian Frische on 10.02.16.
//  Copyright © 2016 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef enum : NSUInteger {
    kProximiioiBeacon,
    kProximiioEddystone
} ProximiioBeaconType;

@interface ProximiioBeaconFilter : NSObject

@property (nonatomic, readonly) ProximiioBeaconType beaconType;
@property (nonatomic, readonly) NSString            *uuidString;
@property (nonatomic, readonly) int                 major;
@property (nonatomic, readonly) int                 minor;
@property (nonatomic, readonly) NSString            *namespaceString;
@property (nonatomic, readonly) NSString            *instanceID;

@end
