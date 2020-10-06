//
//  ProximiioMetricsManager.h
//  Proximiio
//
//  Created by Matej Drzik on 29/01/2019.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Proximiio/Proximiio.h>

NS_ASSUME_NONNULL_BEGIN

@interface ProximiioMetricsManager : NSObject

+ (id)sharedManager;
- (void)sawInput:(ProximiioInput *)input;
- (void)sawUnregisteredBeacon:(ProximiioBeacon *)beacon atLocation:(ProximiioLocation *)location;
- (void)sawMisplacedInput:(ProximiioInput *)input atLocation:(ProximiioLocation *)location error:(int)error;
- (void)sawBeacon:(ProximiioBeacon *)beacon atLocation:(ProximiioLocation *)location;
- (void)enable;
- (void)disable;

@property BOOL reachable;
@property BOOL flushing;
@property (nonatomic, strong) NSTimer *flushTimer;
@property (nonatomic, strong) NSMutableDictionary *foundInputs;
@property (nonatomic, strong) NSMutableDictionary *unregisteredNotified;

@end

NS_ASSUME_NONNULL_END
