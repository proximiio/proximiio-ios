//
//  ProximiioMotionManager.h
//  Proximiio
//
//  Created by Marian Frische on 08.06.18.
//  Copyright © 2018 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ProximiioMotionManagerDelegate.h"

@interface ProximiioMotionManager : NSObject
+ (id)sharedManager;

- (void)start;
- (void)startMotion;
- (void)stop;
- (void)stopMotion;

- (BOOL)isMoving;

@property (nonatomic, weak) id <ProximiioMotionManagerDelegate> delegate;
@end
