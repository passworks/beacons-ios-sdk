//
//  LHNetworkOperation.h
//  Lighthouse
//
//  Created by Lighthouse, S.A. on 23/07/14.
//  Copyright (c) 2015 Lighthouse, S.A. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, LHNetworkOperationType) {
    LHNetworkOperationTypeGET,
    LHNetworkOperationTypePOST,
    LHNetworkOperationTypePUT,
};

FOUNDATION_EXPORT NSString *const LHNetworkingOperationEndpoint;

/**
 *  This class servers the purpose of being able to serialize requests
 *  on the networking operation queue. Each LHNetworkOperation can be saved
 *  to file, to guarantee that requests are not lost in case there are network
 *  issues or the server is down.
 */
@interface LHNetworkOperation : NSOperation <NSCoding>

- (instancetype)initWithOperation:(LHNetworkOperation *)operation;
- (instancetype)initWithOperationType:(LHNetworkOperationType)operationType
                                 path:(NSString *)path
                           parameters:(id)parameters;

+ (NSString *)urlFromPath:(NSString *)path;

@property (nonatomic, assign, readonly) LHNetworkOperationType operationType;
@property (nonatomic, strong, readonly) NSString *path;
@property (nonatomic, strong) NSString *token;
@property (nonatomic, strong, readonly) id parameters;
@property (nonatomic, readonly) NSInteger numberOfRetries;

@end
