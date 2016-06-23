//
//  ProximiioLocationSource.h
//  ProximiioApp
//
//  Created by Matej Držík on 06/06/16.
//  Copyright © 2016 Quanto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@class ProximiioLocation;

@interface ProximiioLocationSource : NSObject

- (id)initWithDelegate:(id)delegate updateInterval:(int)updateInterval;
- (void)start;
- (void)stop;
- (void)didStart;
- (void)didStop;

- (int)lastLocationUpdatedAgo;
- (int)getInterval;
- (void)updateLocation:(CLLocation *)location;

@property (weak) id delegate;
@property (nonatomic, strong) NSString *identifier;
@property (nonatomic, strong) ProximiioLocation *lastLocation;
@property int updateInterval;

@end

@protocol ProximiioLocationSourceDelegate

- (void)didUpdateLocation:(ProximiioLocation *)location;
- (void)didInitializeLocationSource:(ProximiioLocationSource *)source;
- (void)didStartLocationSource:(ProximiioLocationSource *)source;
- (void)didStopLocationSource:(ProximiioLocationSource *)source;

@end
