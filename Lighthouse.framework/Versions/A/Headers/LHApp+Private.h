//
//  LHApp+Private.h
//  
//
//  Created by Ivan Bruel on 12/03/15.
//
//

#import "LHApp.h"

#import "LHAppModel.h"

@interface LHApp (Private)

+ (instancetype)app;

- (instancetype)initWithJSON:(id)json;

+ (instancetype)appWithModel:(LHAppModel *)model;
+ (instancetype)appWithJSON:(id)json;

+ (void)requestApp:(void(^)(LHApp *app))handler;

@end