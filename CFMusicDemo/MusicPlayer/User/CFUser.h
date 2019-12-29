//
//  CFUser1.h
//  CFMusicDemo
//
//  Created by GuTian on 2019/12/29.
//  Copyright © 2019 chenfeng. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "CFStreamerModel.h"

@interface CFUser : NSObject

@property (nonatomic, strong) NSString *userName;
@property (nonatomic, assign) NSInteger currentIndex;
@property (nonatomic, strong) CFStreamerModel *currentSongModel;

+ (instancetype)shareInstance;

@end
