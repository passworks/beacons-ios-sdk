//
//  LHApplication.h
//  Lighthouse
//

#import <UIKit/UIImage.h>

/**
 *  This class serves the purpose of retrieving all the information about the
 *  application on which the SDK is being ran on.
 */
@interface LHApplication : NSObject

+ (instancetype)application;

@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) NSString *bundle;
@property (nonatomic, strong, readonly) NSString *version;
@property (nonatomic, strong, readonly) NSString *build;
@property (nonatomic, readonly) BOOL isDebugBuild;
@property (nonatomic, strong, readonly) NSString *environment;
@property (nonatomic, strong, readonly) id json;

@end
