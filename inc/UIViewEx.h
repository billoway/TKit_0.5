//
//  UIViewEx.h
//  TKit
//
//  Created by bill on 12-12-21.
//  Copyright (c) 2012年 _Mac. All rights reserved.
//

#import "UIView+CAAnimation.h"

@interface UIView (TExt)

+ (id)newView:(CGRect)frame;
+ (id)newView:(CGRect)frame bgColor:(UIColor *)bgColor;
+ (id)newViewByXibName:(NSString *)xibName owner:(id)owner options:(NSDictionary *)options;

- (id)muCopy;
- (id)muCopy:(CGRect)frame;


/// the size of UIview‘s frame
@property(nonatomic) CGSize size;
/// the origin of UIview‘s frame
@property(nonatomic) CGPoint origin;
/// the x of UIview‘s frame
@property(nonatomic) CGFloat left;
/// the y of UIview‘s frame
@property(nonatomic) CGFloat right;
/// the top of UIview‘s frame
@property(nonatomic) CGFloat top;
/// the bottom of UIview‘s frame
@property(nonatomic) CGFloat bottom;
/// the width of UIview‘s frame
@property(nonatomic) CGFloat width;
/// the height of UIview‘s frame
@property(nonatomic) CGFloat height;


/// view 的背景图片 图片填充做颜色
- (void)setBackImage:(UIImage *)backImage;
/// 设置视图的圆角  radius	:圆角半径
- (void)setCornerRadius:(CGFloat)radius;
/// 设置视图的边框 width:边框宽度 color:边框颜色
- (void)setBorderWidth:(CGFloat)width coror:(UIColor *)color;
/// 设置view 的阴影 color:	阴影颜色 offset:阴影偏移量 radius:阴影半径
- (void)setShadowCoror:(UIColor *)color offset:(CGSize)offset radius:(CGFloat)radius;


- (NSInteger)getSubviewIndex;
- (void)bringToFront;
- (void)sendToBack;
- (void)bringOneLevelUp;
- (void)sendOneLevelDown;
- (BOOL)isInFront;
- (BOOL)isAtBack;
- (BOOL)containsSubView:(UIView *)subView;
- (BOOL)containsSubViewOfClassType:(Class)tClass;
- (void)swapDepthsWithView:(UIView *)swapView;
- (void)removeSubviews;

@end

#define  k_float_int(tmp)    ( ( (int)( (tmp) * 2 ) ) / 2.f )