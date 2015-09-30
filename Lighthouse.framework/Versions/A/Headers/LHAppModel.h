//
//  LHAppModel.h
//  
//
//  Created by Ivan Bruel on 12/03/15.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class LHBeaconModel, LHEventModel, LHTagModel;

@interface LHAppModel : NSManagedObject

@property (nonatomic, retain) NSNumber * identifier;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *beacons;
@property (nonatomic, retain) NSSet *events;
@property (nonatomic, retain) NSSet *tags;
@end

@interface LHAppModel (CoreDataGeneratedAccessors)

- (void)addBeaconsObject:(LHBeaconModel *)value;
- (void)removeBeaconsObject:(LHBeaconModel *)value;
- (void)addBeacons:(NSSet *)values;
- (void)removeBeacons:(NSSet *)values;

- (void)addEventsObject:(LHEventModel *)value;
- (void)removeEventsObject:(LHEventModel *)value;
- (void)addEvents:(NSSet *)values;
- (void)removeEvents:(NSSet *)values;

- (void)addTagsObject:(LHTagModel *)value;
- (void)removeTagsObject:(LHTagModel *)value;
- (void)addTags:(NSSet *)values;
- (void)removeTags:(NSSet *)values;

@end
