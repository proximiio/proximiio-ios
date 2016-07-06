//
//  ProximiioFormatter.h
//  ProximiioApp
//
//  Created by Matej Držík on 06/06/16.
//  Copyright © 2016 Quanto. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProximiioFormatter : NSObject

+ (ProximiioFormatter *)sharedManager;
+ (NSDate *)dateFromJsonString:(NSString *)dateString;
+ (NSString *)shortTimeFromDate:(NSDate *)date;

@property (nonatomic, strong) NSDateFormatter *dateFromJSONFormatter;
@property (nonatomic, strong) NSDateFormatter *shortTimeFormatter;

@end
