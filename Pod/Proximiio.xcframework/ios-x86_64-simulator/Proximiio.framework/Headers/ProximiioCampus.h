//
//  ProximiioCampus.h
//  Proximiio
//
//  Created by dev on 11/24/20.
//  Copyright © 2020 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CrystDBCipher/CrystDB.h>

@interface ProximiioCampus : NSObject <CrystDB>
- (id)initWithDictionary:(NSDictionary *)dict;

@property (nonatomic, copy) NSDictionary *dictionary;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSArray *polygon;
@end
