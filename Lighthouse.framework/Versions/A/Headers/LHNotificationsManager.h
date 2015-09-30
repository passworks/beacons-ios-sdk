//
//  LHNotificationsManager.h
//  
//
//  Created by Ivan Bruel on 19/03/15.
//
//

#import <UIKit/UIKit.h>

@class LHEvent;
@class LHBeacon;

@interface LHNotificationsManager : NSObject

- (void)handleEvent:(LHEvent *)event fromBeacon:(LHBeacon *)beacon;
- (BOOL)didReceiveLocalNotification:(UILocalNotification *)localNotification;

@property (nonatomic) BOOL triggerAlertViewInForeground;

@end
