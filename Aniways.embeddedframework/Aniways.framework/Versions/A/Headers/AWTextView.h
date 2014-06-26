//
//  AniwaysTextView.h
//  Aniways
//
//  Created by Ram Greenberg on 3/28/13.
//  Copyright (c) 2013 Ram Greenberg. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  Subclass of UITextView which adds the functionality of Aniways text recognition and enables embedding images.
 */
@interface AWTextView : UITextView <UITextViewDelegate>

@property(nonatomic, weak, setter = setAniwaysDelegate:, getter = aniwaysDelegate) id<UITextViewDelegate> aniwaysDelegate;

@end
