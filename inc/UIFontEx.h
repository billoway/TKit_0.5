//
//  UIFontEx.h
//  TKit
//
//  Created by bill on 12-12-21.
//  Copyright (c) 2012年 _Mac. All rights reserved.
//

@interface UIFont (TExt)

/// 预设字体
+(void) registerFontName:(NSString*)fontName;

+ (UIFont *)FontOfSize:(CGFloat)f;
+ (UIFont *)YaHeiOfSize:(CGFloat)f;
+ (UIFont *)HelveticaOfSize:(CGFloat)f;
+ (UIFont *)HelveticaBoldOfSize:(CGFloat)f;

//+ (void)logAllFont;

@end