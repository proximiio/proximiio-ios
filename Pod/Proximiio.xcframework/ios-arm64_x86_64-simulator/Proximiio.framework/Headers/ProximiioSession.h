//
//  ProximiioSession.h
//  ProximiioApp
//
//  Created by Proximi.io Developer Team on 07/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProximiioOrganization.h"
#import "ProximiioUser.h"
#import "ProximiioApplication.h"
#import "ProximiioVisitor.h"

typedef enum ProximiioSessionType {
    kProximiioUserSession,
    kProximiioApplicationSession
} ProximiioSessionType;


@interface ProximiioSession : NSObject

+(ProximiioSession *)sessionFromJSON:(NSDictionary *)json;

-(void)setVisitor:(ProximiioVisitor *)visitor;
-(BOOL)isApplicationSession;
-(BOOL)isUserSession;

@property (readonly) ProximiioSessionType type;
@property (readonly, nonatomic, strong) NSString *token;
@property (readonly, nonatomic, strong) NSDate *createdAt;
@property (readonly, nonatomic, strong) ProximiioOrganization *organization;
@property (nonatomic, strong) ProximiioApplication *application;
@property (readonly, nonatomic, strong) ProximiioUser *user;
@property (readonly, nonatomic, strong) NSString *proximiioBusToken;
@property (readonly, nonatomic, strong) NSString *proximiioBusRef;
@property (readonly, nonatomic, strong) ProximiioVisitor *visitor;

@end
