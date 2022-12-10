//
//  ProximiioMotionManagerDelegate.h
//  Proximiio
//
//  Created by dev on 10/26/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ProximiioMotionManagerDelegate <NSObject>
-(void)didUpdateWithHeading:(double)heading;
@end
