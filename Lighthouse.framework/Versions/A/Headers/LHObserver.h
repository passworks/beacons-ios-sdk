//
//  LHObserver.h
//  Lighthouse
//
//

#import "LHObjectObserver.h"
#import "LHNotificationObserver.h"

/**
 *  This class helps the SDK on detecting changes on objects or notification triggers.
 */
@interface LHObserver : NSObject

+ (instancetype)observer;

- (void)registerForNotification:(NSString *)name triggered:(LHNotificationTriggeredBlock)triggered;
- (void)observe:(id)object keyPath:(NSString *)keyPath triggered:(LHObjectObserverTriggered)triggered;

- (void)removeObserver:(id)observer;

@end
