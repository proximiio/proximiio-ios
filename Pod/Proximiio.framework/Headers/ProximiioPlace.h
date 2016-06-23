//
//  ProximiioPlace.h
//  ProximiioApp
//
//  Created by Matej Držík on 08/06/16.
//  Copyright © 2016 Quanto. All rights reserved.
//

#import "ProximiioResource.h"
#import "ProximiioLocation.h"

@interface ProximiioPlace : ProximiioResource

+ (ProximiioPlace *)placeFromJSON:(NSDictionary *)json;

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *address;
@property (nonatomic, strong) NSArray *tags;
@property (nonatomic, strong) ProximiioLocation *location;

@end
