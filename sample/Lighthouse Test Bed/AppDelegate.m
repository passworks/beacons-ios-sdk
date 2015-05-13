//
//  AppDelegate.m
//  Lighthouse Test Bed
//
//  Created by Ivan Bruel on 20/03/15.
//  Copyright (c) 2015 Passworks. All rights reserved.
//

#import "AppDelegate.h"

#import <Lighthouse/Lighthouse.h>

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    [Lighthouse setVerbose:YES];
    [Lighthouse setupWithToken:nil]; // INSERT YOUR TOKEN HERE
    [[Lighthouse sharedInstance] lightUp];
    return YES;
}


@end
