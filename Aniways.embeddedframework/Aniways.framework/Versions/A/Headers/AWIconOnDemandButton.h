//
//  AniwaysIconOnDemandButton.h
//  Aniways
//
//  Created by Ram Greenberg on 11/11/13.
//  Copyright (c) 2013 Ram Greenberg. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AWTextView.h"

/**
 *  Subclass of UIButton which adds the functionality of inserting icons on demand (without replacing part of the text).
 */
@interface AWIconOnDemandButton : UIButton

/** The AniwaysTextView that is conncted to the button.
 
  Icons which were selected through the button would be added to this textview.
  @see AWTextView
*/
@property (nonatomic, weak) AWTextView *textview;

/** 
 * A Boolean value that indicates if the button is in state of swapping keyboards.
 * This can be useful in case you want to ignore some notifications while keyboards are being swaped.
 * For example - when swapping keyboards the notifications of closing and opening keyboard will be invoked and might be ignored.
 */
@property (nonatomic, readonly) BOOL isSwappingKeyboards;

@end
