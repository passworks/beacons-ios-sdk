//
//  LHEvent.h
//  
//
//  Created by Ivan Bruel on 12/03/15.
//
//

#import <Foundation/Foundation.h>

@import CoreLocation;

@class LHApp;

typedef NS_ENUM(NSUInteger, LHEventTrigger) {
    LHEventTriggerEnter = 0,
    LHEventTriggerExit = 1,
};

typedef NS_ENUM(NSUInteger, LHEventType) {
    LHEventTypeURL = 0,
    LHEventTypeNotification = 1,
    LHEventTypeWebhook = 2,
    LHEventTypeImage = 3,
    LHEventTypePassbook = 4,
};

extern NSInteger const LHEventTriggerTimeout;

@interface LHEvent : NSObject

@property (nonatomic, readonly) NSInteger identifier;
@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, readonly) CLProximity proximity;
@property (nonatomic, readonly) LHEventTrigger triggerOn;
@property (nonatomic, readonly) BOOL triggerOnce;
@property (nonatomic, readonly) LHEventType type;
@property (nonatomic, strong, readonly) NSDate *triggeredAt;
@property (nonatomic, readonly) NSInteger timeout;
@property (nonatomic, strong, readonly) NSString *payload;
@property (nonatomic, strong, readonly) NSString *notificationMessage;
@property (nonatomic, strong, readonly) NSArray *beacons;

@end
