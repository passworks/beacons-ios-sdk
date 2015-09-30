//
//  LHSwizzling.h
//

#import <Foundation/Foundation.h>

/**
 *  LHSwizzling is a helper class to swizzle some particular functions out of the AppDelegate.
 *  Making it easier to integrate the Lighthouse Framework.
 */
@interface LHSwizzling : NSObject

+ (void)swizzleLocalNotifications;

@end
