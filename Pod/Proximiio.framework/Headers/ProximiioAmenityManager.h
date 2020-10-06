//
//  ProximiioAmenityManager.h
//  Proximiio
//
//  Created by dev on 12/12/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Proximiio/ProximiioLocation.h>

@interface ProximiioAmenityManager : NSObject
+ (id)sharedManager;
- (void) networkGetAmenities:(void (^)(BOOL completed))callback;
@end
