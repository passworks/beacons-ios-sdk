//
//  LHUtils.h
//  Lighthouse
//
//

#import <Foundation/Foundation.h>

@interface LHUtils : NSObject

/**
 *  Saves an object to the NSUserDefaults of the application.
 *
 *  @param object The object to be saved
 *  @param key    The key in which it should be saved to.
 */
+ (void)saveObject:(id)object key:(NSString *)key;

/**
 *  Reads an object from the NSUserDefaults of the application.
 *
 *  @param key The key in which the object was previously saved.
 *
 *  @return The actual object read from NSUserDefaults
 */
+ (id)objectForKey:(NSString *)key;

/**
 *  Saves an object to a file within the Documents folder of the application.
 *
 *  @param object   The object to be saved
 *  @param filename The filename in which it should be saved to.
 */
+ (void)saveObject:(id)object toFile:(NSString *)filename;

/**
 *  Reads an object from a file within the Documents folder of the application.
 *
 *  @param filename The file name in which the object was previously saved.
 *
 *  @return The actual object read from file.
 */
+ (id)objectFromFile:(NSString *)filename;

/**
 *  Safely return an object or an NSNull object in case the object is nil.
 *
 *  @param object An object
 *
 *  @return The object or [NSNull null]
 */
+ (id)jsonValue:(id)object;

/**
 *  Serializes an object to NSData.
 *
 *  @param object An object
 *
 *  @return The serialized object.
 */
+ (NSData *)encodedObject:(id)object;

/**
 *  Deserializes an object from an NSData object.
 *
 *  @param data The NSData object corresponding to the serialized object.
 *
 *  @return The actual deserialized object.
 */
+ (id)decodedObject:(NSData *)data;

/**
 *  Generates a unique identifier to be used throughout the SDK instance.
 *
 *  @return A randomized unique identifier.
 */
+ (NSString *)generateUUID;

/**
 *  Converts an NSDate object to a formatted NSString object.
 *
 *  @param date An NSDate object
 *
 *  @return The formatted NSString representation.
 */
+ (NSString *)stringFromDate:(NSDate *)date;

/**
 *  Converts an NSDate object to a formatted NSString object.
 *
 *  @param date An NSDate object
 *  @param dateOnly YES if it should only return the Date or NO if it should return the Time as well.
 *
 *  @return The formatted NSString representation.
 */
+ (NSString *)stringFromDate:(NSDate *)date dateOnly:(BOOL)dateOnly;

+ (NSDate *)dateFromString:(NSString *)dateString;

+ (NSDate *)timeFromDate:(NSDate *)date;

+ (NSUInteger)currentWeekday;

+ (id)json:(id)json key:(NSString *)key;

@end