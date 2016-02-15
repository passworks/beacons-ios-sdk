//
//  LHUserModel.h
//  
//
//  Created by Ivan Bruel on 25/03/15.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface LHUserModel : NSManagedObject

@property (nonatomic, retain) NSData * attributes;
@property (nonatomic, retain) NSString * identifier;
@property (nonatomic, retain) NSNumber * anonymous;
@property (nonatomic, retain) NSString * previousIdentifier;

@end
