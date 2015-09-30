//
//  LHUser.h
//  
//
//  Created by Ivan Bruel on 18/03/15.
//
//

#import <Foundation/Foundation.h>

@interface LHUser : NSObject

@property (nonatomic) BOOL anonymous;
@property (nonatomic, strong) NSString *identifier;
@property (nonatomic, strong) NSString *previousIdentifier;
@property (nonatomic, strong) NSDictionary *attributes;

@end
