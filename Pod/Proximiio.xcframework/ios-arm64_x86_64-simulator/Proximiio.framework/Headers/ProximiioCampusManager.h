//
//  ProximiioCampusManager.h
//  Proximiio
//
//  Created by dev on 11/24/20.
//  Copyright © 2020 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProximiioCampusManager : NSObject
+ (id)sharedManager;
- (void) networkGetCampus:(void (^)(BOOL completed))callback;
@end
