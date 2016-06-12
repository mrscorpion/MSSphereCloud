//
//  SphereView.h
//  MSSphereCloud
//
//  Created by mrscorpion on 16/6/12.
//  Copyright © 2016年 com.mrscorpion. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SphereView : UIView
/**
 *  Sets the cloud's tag views.
 *
 *	@remarks Any @c UIView subview can be passed in the array.
 *
 *  @param array The array of tag views.
 */
- (void)setCloudTags:(NSArray *)array;

/**
 *  Starts the cloud autorotation animation.
 */
- (void)timerStart;

/**
 *  Stops the cloud autorotation animation.
 */
- (void)timerStop;
@end
