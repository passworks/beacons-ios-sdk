//
//  LHDevice.h
//  Lighthouse
//
//

#import <Foundation/Foundation.h>

/**
 *  This class serves the purpose of retrieving all the information about the
 *  device on which the SDK is being ran on.
 */
@interface LHDevice : NSObject

+ (instancetype)device;

- (void)setupReachability;

@property (nonatomic, strong, readonly) NSString *vendorPlatform;
@property (nonatomic, strong, readonly) NSString *vendor;
@property (nonatomic, strong, readonly) NSString *platform;
@property (nonatomic, strong, readonly) NSString *model;
@property (nonatomic, strong, readonly) NSString *systemVersion;
@property (nonatomic, strong, readonly) NSString *systemLanguage;
@property (nonatomic, strong, readonly) NSString *locale;
@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) NSString *screenSize;
@property (nonatomic, strong, readonly) NSString *carrier;
@property (nonatomic, strong, readonly) NSString *uid;
@property (nonatomic, strong) NSString *apnsToken;
@property (nonatomic, readonly) BOOL hasInternetConnection;
@property (nonatomic, readonly) BOOL isSimulator;
@property (nonatomic, strong, readonly) id json;

@end
