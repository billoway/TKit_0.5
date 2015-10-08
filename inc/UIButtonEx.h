//
//  UIButtonEx.h
//  TKit
//
//  Created by bill on 12-12-21.
//  Copyright (c) 2012年 _Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (TExt)

/// 设置 标题, 字体, 颜色
- (void)dosetTitle:(NSString *)title font:(float)font color:(id)color;
/// 设置 标题, 字体, 颜色
- (void)dosetTitle:(NSString *)title fontSize:(float)font colorHex:(id)color;
/// 设置 点击相应, target, tag
- (void)dosetClick:(SEL)click target:(id)target tag:(NSInteger)tag;
/// 设置 标题 ==> 选中, 高亮
- (void)dosetTitle:(NSString *)title selectTitle:(NSString *)sTitle highlightedTitle:(NSString *)hTitle;
/// 设置 标题颜色 ==> 选中, 高亮
- (void)dosetColor:(UIColor *)color selectColor:(UIColor *)sColor highlightedColor:(UIColor *)hColor;
/// 设置 图片 UIImage or imgName => [UIImage getImage:imgName]
- (void)dosetImg:(id)img selectImg:(id)sImg highlightedImg:(id)hImg;
/// 设置 图片 UIImage or imgName => [UIImage getImage:imgName]
- (void)setImg:(id)img selectImg:(id)sImg highlightedImg:(id)hImg;
/// 设置 背景图片 UIImage or imgName => [UIImage getImage:imgName]
- (void)dosetBgImg:(id)img selectImg:(id)sImg highlightedImg:(id)hImg;

/// image EdgeInsets (left, top)
@property (nonatomic, assign) CGPoint imageOrigin;
/// title EdgeInsets (left, top)
@property (nonatomic, assign) CGPoint titleOrigin;

+ (id)newButton:(CGRect)frame;

@end