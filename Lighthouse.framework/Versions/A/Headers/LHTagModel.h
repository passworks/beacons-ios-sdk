//
//  LHTagModel.h
//  
//
//  Created by Ivan Bruel on 13/03/15.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class LHAppModel, LHBeaconModel;

@interface LHTagModel : NSManagedObject

@property (nonatomic, retain) NSNumber * identifier;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * timeout;
@property (nonatomic, retain) NSDate * lastSeenAt;
@property (nonatomic, retain) NSString * sessionId;
@property (nonatomic, retain) LHAppModel *app;
@property (nonatomic, retain) NSSet *beacons;
@end

@interface LHTagModel (CoreDataGeneratedAccessors)

- (void)addBeaconsObject:(LHBeaconModel *)value;
- (void)removeBeaconsObject:(LHBeaconModel *)value;
- (void)addBeacons:(NSSet *)values;
- (void)removeBeacons:(NSSet *)values;

@end
