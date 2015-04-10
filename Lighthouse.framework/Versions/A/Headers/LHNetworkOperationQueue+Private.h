//
//  LHNetworkOperationQueue+Private.h
//  Lighthouse
//
//  Created by Lighthouse, S.A. on 23/07/14.
//  Copyright (c) 2015 Lighthouse, S.A. All rights reserved.
//

#import "LHNetworkOperationQueue.h"

extern NSInteger const LHNetworkOperationQueueMaxRetries;

@interface LHNetworkOperationQueue (Private)

- (void)flush;
- (void)saveNetworkOperations;

@property (nonatomic, strong) NSOperationQueue *operationQueue;
@property (nonatomic, strong) NSMutableArray *networkOperations;

@end