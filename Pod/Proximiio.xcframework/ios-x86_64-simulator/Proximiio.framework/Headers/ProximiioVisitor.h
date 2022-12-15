//
//  ProximiioVisitor.h
//  ProximiioApp
//
//  Created by Proximi.io Developer Team on 19/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import "ProximiioResource.h"

#define VISITOR_KEY @"visitorId"

@interface ProximiioVisitor : ProximiioResource

+(void)currentWithCallback:(void (^)(ProximiioVisitor *visitor))callback;

+(void)resetVisitor;

@property (nonatomic, strong) NSString *visitorId;

@end
