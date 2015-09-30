//
//  LHTag+Private.h
//  
//
//  Created by Ivan Bruel on 12/03/15.
//
//

#import "LHTag.h"
#import "LHTagModel.h"

@class LHApp;

@interface LHTag (Private)

+ (instancetype)tagWithModel:(LHTagModel *)model;

+ (NSArray *)tagsWithJSON:(id)jsonArray;
+ (NSArray *)tagsWithModels:(NSSet *)models;
+ (NSArray *)tagsWithIdentifiers:(NSArray *)identifiers;

- (LHTagModel *)tagModel;
- (id)json;
- (void)startSession;

@property (nonatomic, strong, readonly) NSArray *beacons;
@property (nonatomic, strong, readonly) LHApp *app;

@end
