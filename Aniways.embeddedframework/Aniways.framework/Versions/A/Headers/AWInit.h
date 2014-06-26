//
//  AniwaysInit.h
//  Aniways
//
//  Created by Ram Greenberg on 5/9/13.
//  Copyright (c) 2013 Ram Greenberg. All rights reserved.
//

#import <Foundation/Foundation.h>
/**
 *  Use this class to init Aniways.
 */
@interface AWInit : NSObject

/**
*  This is the designated initializer for Aniways objects.
*
*  @param appId      The application id that was assigned to your app.
*  @param upgradeURL An URL where your users can download your app latest version. This will be used by users to upgrade to the latest version of your app in order to be able to see Aniways Icons inside messages.
*/
+ (void) initAniwaysWithAppId:(NSString*)appId;

@end
