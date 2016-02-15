//
//  LHBeacon+Private.h
//  
//
//  Created by Ivan Bruel on 12/03/15.
//
//

#import "LHBeacon.h"
#import "LHBeaconModel.h"

extern NSInteger const LHBeaconProximityTriggerCount;

@interface LHBeacon (Private)

+ (instancetype)beaconWithModel:(LHBeaconModel *)beaconModel;

+ (NSArray *)beaconsWithJSON:(id)jsonArray;
+ (NSArray *)beaconsWithModels:(NSSet *)models;
+ (LHBeacon *)beaconWithIdentifier:(NSInteger)identifier;
+ (NSArray *)beaconsWithIdentifiers:(NSArray *)identifiers;
+ (NSArray *)beaconsWithUUID:(NSString *)uuid major:(NSInteger)major minor:(NSInteger)minor;

- (void)setProximity:(CLProximity)proximity;

@property (nonatomic, strong, readonly) LHApp *app;
@property (nonatomic, strong, readonly) CLBeaconRegion *region;
@property (nonatomic, readonly) NSInteger possibleProximityCount;
@property (nonatomic, readonly) CLProximity possibleProximity;


@end
