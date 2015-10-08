//
//  UIImageEx
//  TKit
//
//  Created by bill on 12-12-21.
//  Copyright (c) 2012年 _Mac. All rights reserved.
//

#define iPhone5_Tag @"-568h"

#import "UIImage+Alpha.h"
#import "UIImage+Resize.h"
#import "UIImage+RoundedCorner.h"


@interface UIImage (TExt)

/// image 宽度(素材仅支持高清屏)
@property (nonatomic, readonly) CGFloat width;
/// image 高度(素材仅支持高清屏)
@property (nonatomic, readonly) CGFloat height;


/// 去除图片方向信息
- (UIImage *)fixOrientation;

/// 压缩图片
- (UIImage *)imgCompressByMaxWidth:(float)maxWidth;

/// 压缩图片
- (NSData *)imgCompressByMaxWidth:(float)maxWidth maxSize:(long)maxSize;
/// 压缩图片
- (NSData *)imgCompress;

#pragma mark - -------- Image sava ----------

/// 保存图片到相册
+ (void)savaToAlbum:(UIImage *)image;

#pragma mark - -------- Image Manage ----------

+ (UIImage *)getImage:(NSString *)imageName;
+ (UIImage *)getDeviceImg:(NSString *)imageName;
+ (UIImage *)getThemeImg:(NSString *)imgName theme:(NSString *)theme;

+ (void)removeImage:(NSString *)imageName;
+ (void)removeAllImage;

#pragma mark - -------- Scale ----------

///// 压缩图片 把原图按比例放大或缩小 <注, UIImageView 渲染过大的原图比较占用资源, 把原图压缩后返回新的UIImage>
//- (UIImage *)resizeImage:(CGSize)targetSize;
///截取图片的一部分 <注, 据原图和目标尺寸 截出可最大截取的图片部分, 避免原图过大,目标尺寸过小,只截取一个角的情况>
- (UIImage *)cutImage:(CGSize)size;

///压缩图片为@2x状态,用于Retina 设备
- (UIImage *)scale2xImage;
///创建一个边角可拉伸的UIImage, top left bottom right 分别为上下左右不拉伸部分的长度
- (UIImage *)resizableImage:(CGFloat)top left:(CGFloat)left bottom:(CGFloat)bottom right:(CGFloat)right;
///创建一个边角可拉伸的UIImage, top left bottom right 分别为上下左右不拉伸部分的长度
+ (UIImage *)resizImg:(NSString *)name top:(CGFloat)top left:(CGFloat)left bottom:(CGFloat)bottom right:(CGFloat)right;

#pragma mark - -------- Other ----------

+ (UIImage *)launchImage;

/**
 *	Constructs launch image name and returns it via @code [UIImage imageNamed:] @endcode method.
 *  App should use Asset catalog or this method may return nil.
 *
 *  @return Launch image with current status bar orientation.
 */
+ (UIImage *)assetLaunchImage;

/**
 *  Constructs launch image name and returns it via @code [UIImage imageNamed:] @endcode method.
 *  App should use IB based launch image or this method may return nil.
 *
 *  @return Launch image with current status bar orientation.
 */
+ (UIImage *)interfaceBuilderBasedLaunchImage;

/**
 *  Constructs launch image name and returns it via @code [UIImage imageNamed:] @endcode method if cache is YES
 *  or via @code [UIImage imageWithContentsOfFile:] @endcode if cache is NO.
 *  App should use IB based launch image or this method may return nil.
 *
 *  @param orientation Image orientation to find.
 *  @param cache       If image should be cached by system means.
 *
 *  @return Launch image with passed orientation.
 */
+ (UIImage *)interfaceBuilderBasedLaunchImageWithOrientation:(UIInterfaceOrientation)orientation
                                              useSystemCache:(BOOL)cache;

/**
 *  Constructs launch image name and returns it via @code [UIImage imageNamed:] @endcode method if cache is YES
 *  or via @code [UIImage imageWithContentsOfFile:] @endcode if cache is NO.
 *  App should use Asset catalog or this method may return nil.
 *
 *  @param orientation Image orientation to find.
 *  @param cache       If image should be cached by system means.
 *
 *  @return Launch image with passed orientation.
 */
+ (UIImage *)assetLaunchImageWithOrientation:(UIInterfaceOrientation)orientation useSystemCache:(BOOL)cache;

/**
 *  Constructs launch image name and returns it via @code [UIImage imageNamed:] @endcode method if cache is YES
 *  or via @code [UIImage imageWithContentsOfFile:] @endcode if cache is NO
 *  App should use Asset catalog or this method may return nil.
 *  This method is useful for iOS 8 rotation methods where we get size app will transition to.
 *
 *  @param size  Size used to determine image orientation (if height > width - portrait, landscape left otherwise).
 *  @param cache If image should be cached by system means.
 *
 *  @return Launch image with constructed orientation.
 */
+ (UIImage *)assetLaunchImageWithSize:(CGSize)size useSystemCache:(BOOL)cache;

/**
 *  Constructs launch image name and returns it via @code [UIImage imageNamed:] @endcode method if cache is YES
 *  or via @code [UIImage imageWithContentsOfFile:] @endcode if cache is NO.
 *  App should use Asset catalog or this method may return nil.
 *  This method is useful for iOS 8 rotation methods where we get size app will transition to.
 *
 *  @param size  Size used to determine image orientation (if height > width - portrait, landscape left otherwise).
 *  @param cache If image should be cached by system means.
 *
 *  @return Launch image with constructed orientation.
 */
+ (UIImage *)interfaceBuilderBasedLaunchImageWithSize:(CGSize)size useSystemCache:(BOOL)cache;


- (UIImage *)imageRotatedByRadians:(CGFloat)radians;
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees;

@end