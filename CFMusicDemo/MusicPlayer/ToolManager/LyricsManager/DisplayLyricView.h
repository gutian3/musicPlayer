//
//  DisplayLyricView1.h
//  MusicPlayer
//
//  Created by GuTian on 2019/12/29.
//  Copyright © 2019 chenfeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DisplayLyricView : UIView

@property (nonatomic, strong) NSArray *textArray;
@property (nonatomic, assign) NSInteger currentRow;


- (void)reloadTableView;
- (void)reloadTableViewWithCurrentRow;

@end
