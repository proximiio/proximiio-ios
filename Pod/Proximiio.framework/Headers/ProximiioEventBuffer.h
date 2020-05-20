//
//  ProximiioEventBuffer.h
//  Proximiio
//
//  Created by Matej Držík on 18/08/16.
//  Copyright © 2016 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Proximiio/ProximiioEvent.h>

@interface ProximiioEventBuffer : NSObject

- (void)bufferEvent:(NSDictionary *)event;
+ (id)sharedManager;

@property (weak) id delegate;

@property BOOL reachable;
@property BOOL flushing;
@property (nonatomic, strong) NSTimer *flushTimer;
@property (nonatomic, strong) NSMutableArray *buffer;


@end
