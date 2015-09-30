//
//  LHApp.h
//  
//
//  Created by Ivan Bruel on 12/03/15.
//
//

#import <Foundation/Foundation.h>

@interface LHApp : NSObject

@property (nonatomic, readonly) NSInteger identifier;
@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) NSArray *events;
@property (nonatomic, strong, readonly) NSArray *beacons;
@property (nonatomic, strong, readonly) NSArray *tags;

@end
