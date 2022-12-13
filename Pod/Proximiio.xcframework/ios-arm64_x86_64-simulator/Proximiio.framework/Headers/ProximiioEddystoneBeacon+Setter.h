//
//  ProximiioEddystoneBeacon+Setter.h
//  Proximiio
//
//  Created by Marian Frische on 01.08.15.
//  Copyright (c) 2015 NavtureApps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProximiioEddystoneBeacon.h"

@interface ProximiioEddystoneBeacon ()
{
    NSTimer *_lostTimer;
}

- (void)setIDData:(NSData*)data;
- (void)setRSSI:(NSNumber*)RSSI;
- (void)setTXPower:(int)txPower;

- (void)setBatteryVoltage:(NSNumber*)voltage;
- (void)setTemperature:(NSNumber*)temperature;
- (void)setUptime:(NSNumber*)uptime;
- (void)setPDUCount:(NSNumber*)pdu;

- (NSTimer*)lostTimer;
- (void)setLostTimer:(NSTimer*)timer;

- (void)setURL:(NSString*)url;


- (void)attestUIDFrame;
- (void)attestTLMFrame;
- (void)attestURLFrame;

@end
