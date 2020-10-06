//
//  ProximiioAmenity.h
//  Proximiio
//
//  Created by dev on 12/10/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CrystDBCipher/CrystDB.h>

@interface ProximiioAmenity : NSObject <CrystDB>
- (id)initWithDictionary:(NSDictionary *)dict;

@property (nonatomic, copy) NSDictionary *dictionary;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSArray *iconOffset;
@end
