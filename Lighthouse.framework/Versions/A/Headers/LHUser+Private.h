//
//  LHUser+Private.h
//  
//
//  Created by Ivan Bruel on 18/03/15.
//
//

#import "LHUser.h"

@interface LHUser (Private)

+ (instancetype)user;

#pragma mark - Identification
- (void)identifyUser;
- (void)identifyUser:(NSString *)userId;
- (void)identifyUser:(NSString *)userId attributes:(NSDictionary *)attributes;

- (void)post;
- (id)json;

@end