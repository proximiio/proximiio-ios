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
@property (nonatomic, copy) NSDictionary *geometry;
@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic, copy) NSDictionary *feature;

/// expose quick filterings
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *classItem;
@property (nonatomic, assign) NSInteger level;
@property (nonatomic, assign) double centerLatitude;
@property (nonatomic, assign) double centerLongitude;
@property (nonatomic, copy) NSString* geometryType;
@property (nonatomic, copy) NSString* propertyType;
@property (nonatomic, assign) BOOL isLevelChanger;

# pragma mark - Feature
+ (NSArray *)features;
+ (ProximiioGeoJSON *)featureInitWithJson:(NSDictionary *)json;
+ (ProximiioGeoJSON *)featureLineWithCoordinates:(NSArray *)coordinates properties:(NSDictionary *)properties;
+ (ProximiioGeoJSON *)featureEmptyLine;
@end
