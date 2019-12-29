//
//  UIButton+BlockUI1.m
//  MusicPlayer
//
//  Created by GuTian on 2019/12/29.
//  Copyright © 2019 chenfeng. All rights reserved.
//

#import "UIButton+BlockUI.h"
#import <objc/runtime.h>

//------- 添加属性 -------//
static void *cf_buttonEventsBlockKey = &cf_buttonEventsBlockKey;

@implementation UIButton (BlockUI)

- (cf_ButtonEventsBlock)cf_buttonEventsBlock {
    return objc_getAssociatedObject(self, &cf_buttonEventsBlockKey);
}

- (void)setCf_buttonEventsBlock:(cf_ButtonEventsBlock)cf_buttonEventsBlock
{
    objc_setAssociatedObject(self, &cf_buttonEventsBlockKey, cf_buttonEventsBlock, OBJC_ASSOCIATION_COPY);
}

- (void)cf_addEventHandler:(void (^)(UIButton *btn))block forControlEvents:(UIControlEvents)controlEvents {
    self.cf_buttonEventsBlock = block;
    [self addTarget:self action:@selector(cf_blcokButtonClicked:) forControlEvents:controlEvents];
}

// 按钮点击
- (void)cf_blcokButtonClicked:(UIButton *)button {
    if (self.cf_buttonEventsBlock) {
        self.cf_buttonEventsBlock(button);
    }
}

@end
