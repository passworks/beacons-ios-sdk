//
//  LHTag.h
//  
//
//  Created by Ivan Bruel on 12/03/15.
//
//

#import <Foundation/Foundation.h>

@interface LHTag : NSObject

@property (nonatomic, readonly) NSInteger identifier;
@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, readonly) NSInteger timeout;
@property (nonatomic, strong, readonly) NSDate *lastSeenAt;
@property (nonatomic, strong, readonly) NSString *sessionId;

@end
