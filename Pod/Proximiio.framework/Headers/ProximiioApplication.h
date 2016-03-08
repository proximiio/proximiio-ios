//
//  ProximiioApplication.h
//  Proximiio
//
//  Created by Marian Frische on 24.02.16.
//  Copyright © 2016 proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProximiioNetworkObject.h"

@interface ProximiioApplication : ProximiioNetworkObject

/*!
 @brief Settings of this organization.
 */
@property (nonatomic, readonly) NSDictionary    *settings;
/*!
 @brief Defines if the advanced settings are set and should be utilized.
 */
@property (nonatomic, readonly) BOOL            isAdvanced;


@end
