//
//  LHGZip.h
//  Lighthouse
//
//  Created by Ivan Bruel on 01/12/14.
//  Copyright (c) 2015 Lighthouse S.A. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  LHGZip focuses on gziping and gunzipping data objects.
 */
@interface LHGZip : NSObject

+ (NSData *)gzippedData:(NSData *)data;
+ (NSData *)gunzippedData:(NSData *)data;

@end
