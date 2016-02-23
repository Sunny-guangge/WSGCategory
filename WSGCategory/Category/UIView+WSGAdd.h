//
//  UIView+WSGAdd.h
//  WSGCategory
//
//  Created by user on 16/2/23.
//  Copyright © 2016年 user. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (WSGAdd)

@property (nonatomic) CGFloat left;
@property (nonatomic) CGFloat right;
@property (nonatomic) CGFloat top;
@property (nonatomic) CGFloat bottom;
@property (nonatomic) CGFloat width;
@property (nonatomic) CGFloat height;
@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;
@property (nonatomic) CGPoint origin;
@property (nonatomic) CGSize  size;

#pragma mark - 圆角
- (void)setRoundedCorners:(UIRectCorner)corners radius:(CGSize)size;

#pragma mark - 以递归的方式遍历(查找)subview
- (UIView*)findViewRecursively:(BOOL(^)(UIView* subview, BOOL* stop))recurse;

@end
