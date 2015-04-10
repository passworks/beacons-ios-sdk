//
//  LHEventModel.h
//  
//
//  Created by Ivan Bruel on 13/03/15.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class LHAppModel, LHBeaconModel;

@interface LHEventModel : NSManagedObject

@property (nonatomic, retain) NSString * payload;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) NSNumber * identifier;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * proximity;
@property (nonatomic, retain) NSString * triggerOn;
@property (nonatomic, retain) NSNumber * triggerOnce;
@property (nonatomic, retain) NSString * notificationMessage;
@property (nonatomic, retain) NSDate * triggeredAt;
@property (nonatomic, retain) NSNumber * timeout;
@property (nonatomic, retain) LHAppModel *app;
@property (nonatomic, retain) NSSet *beacons;
@end

@interface LHEventModel (CoreDataGeneratedAccessors)

- (void)addBeaconsObject:(LHBeaconModel *)value;
- (void)removeBeaconsObject:(LHBeaconModel *)value;
- (void)addBeacons:(NSSet *)values;
- (void)removeBeacons:(NSSet *)values;

@end
