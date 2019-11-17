//
//  ProximiioFeature.h
//  Proximiio
//
//  Created by dev on 10/17/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import "ProximiioGeoJSON.h"

@interface ProximiioFeature : ProximiioGeoJSON
+ (NSArray *)all;
+ (ProximiioFeature *)initWithJson:(NSDictionary *)json;
+ (ProximiioFeature *)lineWithCoordinates:(NSArray *)coordinates properties:(NSDictionary *)properties;
+ (ProximiioFeature *)emptyLine;
@end
