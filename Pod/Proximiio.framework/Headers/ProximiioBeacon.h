//
//  ProximiioBeacon.h
//  ProximiioApp
//
//  Created by Matej Držík on 17/06/16.
//  Copyright © 2016 Quanto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProximiioInputType.h"
#import "ProximiioLocationSource.h"

@interface ProximiioBeacon : ProximiioLocationSource;

@property ProximiioInputType type;

@end
