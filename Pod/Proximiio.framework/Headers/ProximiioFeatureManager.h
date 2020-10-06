//
//  ProximiioRouteSnappingManager.h
//  Proximiio
//
//  Created by dev on 10/17/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Proximiio/ProximiioLocation.h>

@interface ProximiioFeatureManager : NSObject

+ (id)sharedManager;
- (void) networkGetFeatures:(void (^)(BOOL completed))callback;
@end
