//
//  ProximiioBatch.h
//  Proximiio
//
//  Created by Matej Drzik on 11/01/2017.
//  Copyright © 2017 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProximiioBatch : NSObject

- (id)initWithResource:(NSString *)resource interval:(int)_interval;
- (void)insert:(NSDictionary *)json;
- (void)flush;
- (void)flush:(BOOL)async;

@property (nonatomic, strong) NSTimer *timer;

@end
