//
//  ProximiioResource.h
//  ProximiioApp
//
//  Created by Matej Držík on 06/06/16.
//  Copyright © 2016 Quanto. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProximiioResource : NSObject

-(void)assignStandardData:(NSDictionary *)json;
- (id)initWithResourceString:(NSString *)resourceString;
- (id)parent;

@property (nonatomic, strong) NSString *uuid;
@property (nonatomic, strong) NSDate *createdAt;
@property (nonatomic, strong) NSDate *updatedAt;
@property (readonly, nonatomic, strong) NSString *resourceString;
@property (nonatomic, strong) NSDictionary *data;

@end
