//
//  LHBeacon.h
//  
//
//  Created by Ivan Bruel on 12/03/15.
//
//

#import <Foundation/Foundation.h>

@import CoreLocation;

@class LHApp;

@interface LHBeacon : NSObject

@property (nonatomic, readonly) NSInteger identifier;
@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) NSString *uuid;
@property (nonatomic, readonly) NSInteger major;
@property (nonatomic, readonly) NSInteger minor;
@property (nonatomic, strong, readonly) NSString *vendorName;
@property (nonatomic, strong, readonly) NSString *vendorSlug;
@property (nonatomic, strong, readonly) NSArray *tags;
@property (nonatomic, strong, readonly) NSArray *events;

@property (nonatomic, readonly) CLProximity proximity;

@end
