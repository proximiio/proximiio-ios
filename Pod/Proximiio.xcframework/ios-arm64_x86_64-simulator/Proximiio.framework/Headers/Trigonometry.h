//
//  Trigonometry.h
//  Proximiio
//
//  Created by Matej Drzik on 10/01/2017.
//  Copyright © 2017 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "ProximiioLocation.h"

@interface Trigonometry : NSObject

+ (ProximiioLocation *)calculate:(NSArray *)devices;

@end
