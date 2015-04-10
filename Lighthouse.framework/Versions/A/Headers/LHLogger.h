//
//  LHLogger.h
//  
//
//  Created by Ivan Bruel on 11/03/15.
//
//

#import <Foundation/Foundation.h>

/**
 *  This class represents the logging mechanic of the Lighthouse SDK.
 *  It will only print out errors and messages if the verbose flag is set to
 *  YES.
 */
@interface LHLogger : NSObject

+ (instancetype)logger;

- (void)log:(NSString *)string;
- (void)logError:(NSError *)error;

@property (nonatomic, assign) BOOL verbose;

@end

#ifndef LHErrorLog
#define LHErrorLog(error) [[LHLogger logger] logError:error]
#endif

#ifndef LHLog
#define LHLog(...) [[LHLogger logger] log:[NSString stringWithFormat:__VA_ARGS__]]
#endif
