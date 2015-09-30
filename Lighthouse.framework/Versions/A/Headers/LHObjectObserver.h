//
//  LHObjectObserver.h
//  Lighthouse
//

#import <Foundation/Foundation.h>

typedef BOOL (^LHObjectObserverTriggered)(id object, id oldValue, id newValue);

@interface LHObjectObserver : NSObject

- (instancetype)initWithObject:(id)object keyPath:(NSString *)keyPath triggered:(LHObjectObserverTriggered)triggered;

@property (nonatomic, strong) id object;
@property (nonatomic, strong) NSString *keyPath;
@property (nonatomic, copy) LHObjectObserverTriggered triggered;

@end