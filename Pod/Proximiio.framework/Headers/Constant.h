//
//  Constant.h
//  Proximiio
//
//  Created by dev on 10/18/19.
//  Copyright © 2019 proximi.io. All rights reserved.
//

// MARK: - Earth
/// using same value used in TURF.js
#define EARTH_RADIUS_METERS 6371008.8

// MARK: - Conversion
#define DEGREES_TO_RADIANS(degrees) (fmod(degrees, 360) * M_PI / 180)
#define RADIANS_TO_DEGREE(radians) (fmod(radians, 2 * M_PI) * 180.0 / M_PI)

#define METERS_TO_RADIANS(distance) (distance / EARTH_RADIUS_METERS)
#define RADIANS_TO_METERS(radians) (radians * EARTH_RADIUS_METERS)
