//
//  ProximiioRouteSnappingManager.h
//  Proximiio
//
//  Created by dev on 10/17/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProximiioLocation.h"

@interface ProximiioRouteSnappingManager : NSObject

+ (id)sharedManager;

- (void)enable;
- (void)disable;
- (BOOL)currentStatus;

- (void)setThreshold:(double) _threshold;
- (double)currentThreshold;

- (void)setRoutePath:(NSArray *) path;
- (NSArray *)currentPath;

- (ProximiioLocation *)getSnappedPosition:(ProximiioLocation*)current;
- (ProximiioLocation *)getSnappedPosition:(ProximiioLocation*)current withPaths:(NSArray *)paths andThreshold:(double) threshold;
@end
