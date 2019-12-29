//
//  UIImage+ImageHandle1.h
//  MusicPlayer
//
//  Created by GuTian on 2019/12/29.
//  Copyright © 2019 chenfeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageHandle)

// 使用vImage实现图片模糊
+ (UIImage *)boxblurImage:(UIImage *)image withBlurNumber:(CGFloat)blur;

@end
