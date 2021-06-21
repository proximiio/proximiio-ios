//
//  ProximiioAmenityCategory.h
//  Proximiio
//
//  Created by Matteo Crippa on 21/06/21.
//  Copyright © 2021 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CrystDBCipher/CrystDB.h>

@interface ProximiioAmenityCategory : NSObject <CrystDB>
- (id)initWithDictionary:(NSDictionary *)dict;

@property (nonatomic, copy) NSDictionary *dictionary;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *organizationIdentifier;
@end
