//
//  ProximiioLocationProcessor.h
//  Proximiio
//
//  Created by dev on 12/24/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Proximiio/ProximiioLocation.h>

@protocol ProximiioLocationProcessor <NSObject>
@required
- (ProximiioLocation *)process: (ProximiioLocation *)currentPosition floor:(ProximiioFloor *) currentFloor hasLevelChanger: (BOOL) levelChanger;
@end
