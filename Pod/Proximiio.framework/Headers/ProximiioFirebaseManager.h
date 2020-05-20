//
//  ProximiioFirebaseManager.h
//  ProximiioApp
//
//  Created by Proximi.io Developer Team on 19/06/16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Proximiio/ProximiioVisitor.h>
#import <Proximiio/ProximiioSession.h>

@interface ProximiioFirebaseManager : NSObject {
    
}

+ (id)sharedManager;
- (id)initWithVisitor:(ProximiioVisitor *)visitor
              session:(ProximiioSession *)session;

- (void)enable;
- (void)disable;

@property (weak) id delegate;
@property ProximiioVisitor *visitor;

@property BOOL ignoreFirebaseItems;

@end
