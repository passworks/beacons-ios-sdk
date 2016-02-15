//
//  LHNetworking.h
//  Lighthouse
//
//  Created by Lighthouse, S.A. on 23/07/14.
//  Copyright (c) 2015 Lighthouse, S.A. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^LHNetworkingSuccessBlock)(id json);
typedef void (^LHNetworkingFailedBlock)(NSError *error);

extern NSString *const LHNetworkingVersion;

/**
 *  This class is the basis for everything network related on the SDK, 
 *  by doing GETs, POSTs and PUTs to the backend API.
 */
@interface LHNetworking : NSObject

+ (void)requestToPath:(NSString *)path
           parameters:(id)parameters
                token:(NSString *)token
         successBlock:(LHNetworkingSuccessBlock)successBlock
          failedBlock:(LHNetworkingFailedBlock)failedBlock;

+ (void)postToPath:(NSString *)path
        parameters:(id)parameters
             token:(NSString *)token
      successBlock:(LHNetworkingSuccessBlock)successBlock
       failedBlock:(LHNetworkingFailedBlock)failedBlock;

+ (void)putToPath:(NSString *)path
       parameters:(id)parameters
            token:(NSString *)token
     successBlock:(LHNetworkingSuccessBlock)successBlock
      failedBlock:(LHNetworkingFailedBlock)failedBlock;

+ (NSString *)endpoint;

@end
