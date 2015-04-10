//
//  LHBeaconManager.h
//  
//
//  Created by Ivan Bruel on 12/03/15.
//
//

#import <Foundation/Foundation.h>

#import "Lighthouse.h"
/**
 *  LHBeaconManager handles everything beacon related, from detecting nearby
 *  beacons, checking if they are on the database, and if they are, it will
 *  trigger them with their new proximity status.
 */
@interface LHBeaconManager : NSObject

/**
 *  Starts the Beacon Scanning process, with a dependency on top of all
 *  the beacons stored in the CoreData database layer.
 */
- (void)start;

/**
 *  Stops the Beacon Scanning process until it is resumed.
 */
- (void)stop;

- (void)restart;

@property (nonatomic, strong) id<LHDelegate> delegate;

@end
