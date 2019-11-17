//
//  ProximiioGeoJSON.h
//  Proximiio
//
//  Created by dev on 10/18/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CrystDBCipher/CrystDB.h>

@interface ProximiioGeoJSON : NSObject <CrystDB>

- (id)initWithDictionary:(NSDictionary *)dict;

@property (nonatomic, copy) NSString *type;
@property (nonatomic, strong) NSDictionary *geometry;
@property (nonatomic, strong) NSDictionary *properties;
@property (nonatomic, strong) NSDictionary *feature;

/// expose quick filterings
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *classItem;
@property (nonatomic, assign) NSInteger level;
@property (nonatomic, assign) double centerLatitude;
@property (nonatomic, assign) double centerLongitude;
@end
