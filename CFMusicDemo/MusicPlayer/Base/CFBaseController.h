//
//  CFBaseController1.h
//  MusicPlayer
//
//  Created by GuTian on 2019/12/29.
//  Copyright © 2019 chenfeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CFBaseController : UIViewController

- (void)backAction;

- (void)showLeftButtonItemWithTitle:(NSString *)title Sel:(SEL)sel;
- (void)showLeftButtonItemWithImage:(NSString *)imageName Sel:(SEL)sel;

- (void)showRightButtonItemWithTitle:(NSString *)title Sel:(SEL)sel;
- (void)showRightButtonItemWithImage:(NSString *)imageName Sel:(SEL)sel;

- (void)showAlertMsg:(NSString *)msg;

@end
