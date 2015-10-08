//
//  UIColorEx
//  TKit
//
//  Created by bill on 12-12-21.
//  Copyright (c) 2012年 _Mac. All rights reserved.
//

#import "UIColor+expanded.h"

@interface UIColor (TExt)

#pragma mark - -------- Get Color ----------

/// 根据字符串 => 16进制颜色
+ (UIColor *)hexColor:(NSString *)stringToConvert;
/// 根据字符串 => 16进制颜色
+ (UIColor *)hexColor:(NSString *)stringToConvert alpha:(float)alpha;
/// 字符串 => 16进制颜色
+ (UIColor *)getRGBColor:(float)r g:(float)g b:(float)b a:(float)a;
/// 字符串 => 16进制颜色
+ (UIColor *)getRGBColor:(float)r g:(float)g b:(float)b;

@end