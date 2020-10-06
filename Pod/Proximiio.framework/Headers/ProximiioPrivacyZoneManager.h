//
//  ProximiioPrivacyZoneManager.h
//  Proximiio
//
//  Created by Matej Drzik on 01/11/2018.
//  Copyright © 2018 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Proximiio/ProximiioGeofence.h>
#import <Proximiio/ProximiioLocation.h>
#import <Proximiio/ProximiioPrivacyZone.h>

@interface ProximiioPrivacyZoneManager : NSObject

-(NSArray *)privacyZonesForLocation:(ProximiioLocation *)location;
-(void)updateWithLocation:(ProximiioLocation *)location;
-(void)exitAllPrivacyZones;
+(id)sharedManager;

@property (weak) id delegate;
@property (nonatomic, strong, readonly) NSArray *lastPrivacyZones;

@end

@protocol ProximiioPrivacyZoneManagerDelegate

- (void)didEnterPrivacyZone:(ProximiioPrivacyZone *)privacyZone;
- (void)didLeavePrivacyZone:(ProximiioPrivacyZone *)privacyZone;

@end

