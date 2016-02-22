//
//  Lighthouse.h
//  
//
//  Created by Ivan Bruel on 11/03/15.
//
//

#import <UIKit/UIKit.h>

#import "LHTag.h"
#import "LHEvent.h"
#import "LHBeacon.h"

@protocol LHDelegate <NSObject>

@optional
- (void)lighthouseBeaconsRefreshed:(NSArray *)beacons;
- (void)lighthouseBeaconDidChangeProximity:(LHBeacon *)beacon;

- (BOOL)lighthouseShouldTriggerEvent:(LHEvent *)event onBeacon:(LHBeacon *)beacon;
- (void)lighthouseEventTriggered:(LHEvent *)event onBeacon:(LHBeacon *)beacon;

@end

/**
 *  Lighthouse is an easy-to-use Framework to handle Beacons and the Analytics around it.
 *
 *  This is a simple drop-in class for handling all your beacons.
 *
 *  You should setup Lighthouse on your AppDelegate's application:didFinishLaunchingWithOptions:, by calling
 *  [Lighthouse setupWithToken:@"YOUR-APP-TOKEN"].
 *
 */
@interface Lighthouse : NSObject

/**
 *  Setups all the Lighthouse dependencies, logging and asynchronous networking queues.
 *  Setting up with a token will make sure you can take full advantage of the Passworks
 *  beacons service, as you will be able to track everything through manual or automatic
 *  Analytics, which will be shown on your Passworks beacons dashboards.
 *
 *  @param token Lighthouse service API key.
 */
+ (void)setupWithToken:(NSString *)token;

/**
 *  The static instance representing the Lighthouse SDK. Any SDK calls should occur
 *  in this instance.
 *
 *  @return The static Lighthouse instance.
 */
+ (instancetype)sharedInstance;

/**
 *  Calling lightUp will make Lighthouse ask for permission to the user's location
 *  but only in case the app never asked for it beforehand. This will start the
 *  scanning of nearby beacons.
 */
- (void)lightUp;

/**
 *  turnOff will stop scanning for nearby beacons. Scanning will only be resumed by
 *  calling lightUp again.
 */
- (void)turnOff;

/**
 *  Calling refresh will trigger an update from the Passworks' Beacon backend, making
 *  sure you have the database updated. This is automatically called when your applicaiton
 *  resumes or the SDK is setup.
 */
- (void)refresh;

/**
 *  logout serves the purpose of considering the user from that point on as an 
 *  anonymous user.
 */
- (void)logoutUser;

/**
 *  identifyUser serves the purpose of considering the user from that point on as an
 *  anonymous user.
 */
- (void)identifyUser;

/**
 *  By calling identifyUser: you can identify the application's current user.
 *  This will help you track user behavior in regards to Beacons, Tags and Events.
 *
 *  @param userId An identification for the user. (email, name, numeric ID, etc)
 */
- (void)identifyUser:(NSString *)userId;

/**
 *  By calling identifyUser:attributes: you can identify the application's current user,
 *  along with his user attributes in form of an NSDictionary.
 *  This will help you track user behavior in regards to Beacons, Tags and Events.
 *
 *  @param userId An identification for the user. (email, name, numeric ID, etc)
 *  @param attributes An NSDictionary containing the user attributes (only NSString and NSNumber are allowed).
 */
- (void)identifyUser:(NSString *)userId attributes:(NSDictionary *)attributes;

/**
 *  A delegate to receive notifications of when beacons change their proximity with
 *  the device.
 */
@property (nonatomic, strong) id<LHDelegate> delegate;

/**
 *  Configuration for the SDK to show UIAlertViews corresponding to their UILocalNotification
 *  counterparts
 */
@property (nonatomic) BOOL triggerAlertViewInForeground;

/**
 *  An array of beacons registered in the Lighthouse SDK.
 */
@property (nonatomic, strong, readonly) NSArray *beacons;

/**
 *  An array of beacons in range registered in the Lighthouse SDK.
 */
@property (nonatomic, strong, readonly) NSArray *beaconsInRange;

/**
 *  An array of events registered in the Lighthouse SDK.
 */
@property (nonatomic, strong, readonly) NSArray *events;

/**
 *  An array of tags registered in the Lighthouse SDK.
 */
@property (nonatomic, strong, readonly) NSArray *tags;

@property (nonatomic) NSInteger networkMaxQueueSize;
@property (nonatomic, readonly) NSInteger networkQueueSize;

/**
 *  Use this function to enable or disable logging from the Lighthouse SDK
 *
 *  @param verbose YES to enable logging, NO to disable.
 */
+ (void)setVerbose:(BOOL)verbose;

@end
