//
//  LHCoreData.h
//  
//
//  Created by Ivan Bruel on 11/03/15.
//
//

#import "LHCoreData.h"

@interface LHCoreData (Private)

+ (instancetype)sharedInstanceInMemory;

+ (NSBundle *)lighthouseBundle;

+ (void)reset;

@end
