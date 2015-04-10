//
//  LHWebViewController.h
//  
//
//  Created by Ivan Bruel on 20/03/15.
//
//

#import <UIKit/UIKit.h>

#import "LHViewController.h"

@class LHEvent;

@interface LHWebViewController : LHViewController

- (instancetype)initWithEvent:(LHEvent *)event;

@end
