//
//  LHNetworkOperationQueue.h
//  Lighthouse
//
//  Created by Lighthouse, S.A. on 23/07/14.
//  Copyright (c) 2015 Lighthouse, S.A. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LHNetworkOperation.h"

/**
 *  The LHNetworkOperationQueue serves the purpose of managing the operations
 *  saving them to disk and enforcing that only one operation is run at the same
 *  time.
 */
@interface LHNetworkOperationQueue : NSObject

+ (instancetype)sharedQueue;

@property (nonatomic, strong, readonly) NSString *token;

- (void)setupWithToken:(NSString *)token;

- (void)addOperation:(LHNetworkOperation *)networkOperation;
- (void)finishedOperation:(LHNetworkOperation *)networkOperation;
- (void)failedOperation:(LHNetworkOperation *)networkOperation;

@end
