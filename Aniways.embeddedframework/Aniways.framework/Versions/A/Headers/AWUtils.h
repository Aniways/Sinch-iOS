//
//  AniwaysUtils.h
//  Aniways
//
//  Created by Ram Greenberg on 8/26/13.
//  Copyright (c) 2013 Ram Greenberg. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  Util for dealing with Aniways encoded text
 */
@interface AWUtils : NSObject

/**
*  Extracts the original text from aniways encoded text (text wont include icons).
*
*  @param aniwaysEncodedText The encoded text
*
*  @return The original text that was sent by the user, without Aniways additional encoding part. The returned string wont include any icons
*/
+(NSString*) extractOriginText:(NSString*)aniwaysEncodedText;

@end
