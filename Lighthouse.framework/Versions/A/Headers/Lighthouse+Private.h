//
//  Lighthouse+Private.h
//  
//
//  Created by Ivan Bruel on 18/03/15.
//
//

#import "Lighthouse.h"

#import "LHNotificationsManager.h"

extern NSString *const LighthouseVersion;

@interface Lighthouse (Private)

+ (void)reset;

@property (nonatomic, strong, readonly) LHNotificationsManager *notificationsManager;

@end