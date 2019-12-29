//
//  UIButton+BlockUI1.h
//  MusicPlayer
//
//  Created by GuTian on 2019/12/29.
//  Copyright © 2019 chenfeng. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^cf_ButtonEventsBlock)(UIButton *button);

@interface UIButton (BlockUI)

@property (nonatomic, copy) cf_ButtonEventsBlock cf_buttonEventsBlock;

- (void)cf_addEventHandler:(void (^)(UIButton *btn))block forControlEvents:(UIControlEvents)controlEvents;

@end
