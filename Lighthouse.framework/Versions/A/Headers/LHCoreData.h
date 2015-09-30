//
//  LHCoreData.h
//  
//
//  Created by Ivan Bruel on 11/03/15.
//
//

#import <Foundation/Foundation.h>

/**
 *  Helper class for finding and/or creating objects in the CoreData database.
 *  This class also allows the saving of the context and the creation of the 
 *  actual database.
 */
@interface LHCoreData : NSObject

+ (instancetype)sharedInstance;

- (id)findFirstEntityForName:(NSString *)entityName;
- (id)findEntityForName:(NSString *)entityName identifier:(NSNumber *)identifier;
- (NSArray *)findEntitiesForName:(NSString *)entityName predicate:(NSPredicate *)predicate;
- (id)findOrCreateEntityForName:(NSString *)entityName identifier:(NSNumber *)identifier;
- (id)findOrCreateFirstEntityForName:(NSString *)entityName;
- (void)saveContext;

@end
