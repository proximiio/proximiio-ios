//
//  ProximiioMapStyle.h
//  Proximiio
//
//  Created by Matteo Crippa on 21/06/21.
//  Copyright © 2021 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CrystDBCipher;

@interface ProximiioMapStyle : NSObject <CrystDB>
- (id)initWithDictionary:(NSDictionary *)dict;

@property (nonatomic, copy) NSDictionary *dictionary;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *version;
@property (nonatomic, copy) NSString *identifier;
@end
