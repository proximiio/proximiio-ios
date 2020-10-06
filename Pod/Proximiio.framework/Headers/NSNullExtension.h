//
//  NSNullExtension.h
//  Proximiio
//
//  Created by Marian Frische on 13.02.16.
//  Copyright © 2016 Proximi.io. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNull (Safeguard)

- (int) intValue;
- (double) doubleValue;
- (BOOL) boolValue;
- (NSInteger) integerValue;

@end
