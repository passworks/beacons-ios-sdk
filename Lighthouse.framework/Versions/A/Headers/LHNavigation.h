//
//  LHNavigation.h
//  Lighthouse
//

#import <UIKit/UIKit.h>

/**
 *  LHNavigation is a helper class which allows you to push, present and set view
 *  controllers taking basis on your view controller hierararchy. This only takes
 *  account UITabBarControllers, UINavigationControllers and Modal View Controllers
 *  in order to traverse the hierarchy. 
 *
 *  WARNING: If you have custom navigation you should use your own methods to push and present
 *  view controllers, this is only a helper class for common navigation based on Apple's default
 *  view controller hierarchies.
 *
 */
@interface LHNavigation : NSObject

/**
 *  presentViewController:animated: presents a view controller as a modal view controller,
 *  taking basis on the current view controller to present from.
 *
 *  @param viewController Your view controller.
 *  @param animated       If you choose to animate the presenting of the viewController.
 */
+ (void)presentViewController:(UIViewController *)viewController animated:(BOOL)animated;

@end
