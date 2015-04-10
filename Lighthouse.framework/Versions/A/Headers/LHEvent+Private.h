//
//  LHEvent+Private.h
//  
//
//  Created by Ivan Bruel on 12/03/15.
//
//

#import "LHEvent.h"
#import "LHEventModel.h"

@class LHBeacon;

@interface LHEvent (Private)

+ (instancetype)eventWithModel:(LHEventModel *)eventModel;

+ (NSArray *)eventsWithJSON:(id)jsonArray;
+ (NSArray *)eventsWithModels:(NSSet *)models;
+ (NSArray *)eventsWithIdentifiers:(NSArray *)identifiers;
+ (LHEvent *)eventWithIdentifier:(NSInteger)identifier;


- (LHEventModel *)eventModel;
- (BOOL)trigger:(LHEventTrigger)trigger onBeacon:(LHBeacon *)beacon withProximity:(CLProximity)proximity;
- (NSTimeInterval)timeoutForTriggerEventOnce;

- (void)setTriggeredAt:(NSDate *)date;
- (id)json;
- (id)webhookJSONWithBeacon:(LHBeacon *)beacon;
- (void)postWithBeacon:(LHBeacon *)beacon;

@property (nonatomic, strong, readonly) LHApp *app;

+ (NSString *)triggerStringFromTrigger:(LHEventTrigger)trigger;
+ (NSString *)proximityStringFromProximity:(CLProximity)proximity;
+ (NSString *)typeStringFromType:(LHEventType)type;

@end
