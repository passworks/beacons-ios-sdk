//
//  LHBeaconModel.h
//  
//
//  Created by Ivan Bruel on 20/03/15.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class LHAppModel, LHEventModel, LHTagModel;

@interface LHBeaconModel : NSManagedObject

@property (nonatomic, retain) NSNumber * identifier;
@property (nonatomic, retain) NSNumber * major;
@property (nonatomic, retain) NSNumber * minor;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * proximity;
@property (nonatomic, retain) NSString * uuid;
@property (nonatomic, retain) NSString * vendorName;
@property (nonatomic, retain) NSString * vendorSlug;
@property (nonatomic, retain) NSNumber * possibleProximityCount;
@property (nonatomic, retain) NSNumber * possibleProximity;
@property (nonatomic, retain) LHAppModel *app;
@property (nonatomic, retain) NSSet *events;
@property (nonatomic, retain) NSSet *tags;
@end

@interface LHBeaconModel (CoreDataGeneratedAccessors)

- (void)addEventsObject:(LHEventModel *)value;
- (void)removeEventsObject:(LHEventModel *)value;
- (void)addEvents:(NSSet *)values;
- (void)removeEvents:(NSSet *)values;

- (void)addTagsObject:(LHTagModel *)value;
- (void)removeTagsObject:(LHTagModel *)value;
- (void)addTags:(NSSet *)values;
- (void)removeTags:(NSSet *)values;

@end
