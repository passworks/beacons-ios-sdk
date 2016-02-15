//
//  LHApp+Private.h
//  
//
//  Created by Ivan Bruel on 12/03/15.
//
//

#import "LHApp.h"

#import "LHAppModel.h"

@class LHUser;

@interface LHApp (Private)

+ (instancetype)app;

- (instancetype)initWithJSON:(id)json;

+ (instancetype)appWithModel:(LHAppModel *)model;
+ (instancetype)appWithJSON:(id)json;

+ (void)requestAppWithUser:(LHUser *)user completion:(void(^)(LHApp *app))completion;

@end