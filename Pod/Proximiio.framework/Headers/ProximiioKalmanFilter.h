//
//  ProximiioKalmanFilter.h
//  ProximiioApp
//
//  Created by Matej Držík on 10/06/16.
//  Copyright © 2016 Quanto. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProximiioKalmanFilter : NSObject

- (void)updateWithSignal:(double)signal;
- (double)stateEstimate;

@end
