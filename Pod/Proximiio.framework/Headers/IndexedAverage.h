//
//  IndexedAverage.h
//  Proximiio
//
//  Created by dev on 10/31/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IndexedAverage : NSObject
@property (nonatomic, strong) NSMutableArray *items;

- (id)init;
- (id)initValue:(double)value;
- (void)addValue:(double)value;
- (void)resetValue:(double)value;
- (double)average;
@end
