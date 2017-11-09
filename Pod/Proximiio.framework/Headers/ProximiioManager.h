//
//  Proximiio.h
//  ProximiioApp
//
//  Created by Proximi.io Developer Team on 06/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProximiioApplication.h"
#import "ProximiioState.h"
#import "ProximiioMode.h"
#import "ProximiioResourceManager.h"
#import "ProximiioBufferSize.h"
#import <CoreBluetooth/CoreBluetooth.h>

//! Project version number for Proximiio.
FOUNDATION_EXPORT double ProximiioVersionNumber;

//! Project version string for Proximiio.
FOUNDATION_EXPORT const unsigned char ProximiioVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Proximiio/PublicHeader.h>

@interface ProximiioManager : NSObject

+ (ProximiioManager *)sharedManager;







@end
