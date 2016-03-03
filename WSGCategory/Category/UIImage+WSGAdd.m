//
//  UIImage+WSGAdd.m
//  WSGCategory
//
//  Created by user on 16/3/3.
//  Copyright © 2016年 user. All rights reserved.
//

#import "UIImage+WSGAdd.h"

@implementation UIImage (WSGAdd)

+ (UIImage*)imageWithImageSimple:(UIImage*)image scaledToSize:(CGSize)newSize
{
    // Create a graphics image context
    UIGraphicsBeginImageContext(newSize);
    
    // Tell the old image to draw in this new context, with the desired
    // new size
    [image drawInRect:CGRectMake(0,0,newSize.width,newSize.height)];
    
    // Get the new image from the context
    UIImage* newImage = UIGraphicsGetImageFromCurrentImageContext();
    
    // End the context
    UIGraphicsEndImageContext();
    
    // Return the new image.
    return newImage;
}

@end
