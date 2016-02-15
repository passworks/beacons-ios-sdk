//
//  LHNotificationObserver.h
//  Lighthouse
//

#import <Foundation/Foundation.h>

typedef void (^LHNotificationTriggeredBlock)(NSNotification *notification);

@interface LHNotificationObserver : NSObject

- (instancetype)initWithNotification:(NSString *)name triggered:(LHNotificationTriggeredBlock)triggered;

@property (nonatomic, strong) NSString *name;
@property (nonatomic, copy) LHNotificationTriggeredBlock triggered;

@end