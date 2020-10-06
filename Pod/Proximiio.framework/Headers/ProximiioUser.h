//
//  ProximiioUser.h
//  ProximiioApp
//
//  Created by Proximi.io Developer Team on 07/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProximiioUser : NSObject

+(ProximiioUser *)userFromJSON:(NSDictionary *)json;

@property (nonatomic, strong) NSString *uuid;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *email;

@end
