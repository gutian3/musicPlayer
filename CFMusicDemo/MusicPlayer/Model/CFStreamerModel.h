//
//  CFStreamerModel1.h
//  MusicPlayer
//
//  Created by GuTian on 2019/12/29.
//  Copyright © 2019 chenfeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CFStreamerModel : NSObject

@property (nonatomic, strong) NSString *songName;
@property (nonatomic, strong) NSString *url;
@property (nonatomic, strong) NSString *songId;
@property (nonatomic, strong) NSString *imageString;
@property (nonatomic, strong) NSString *lyric;

- (id)initWithDic:(NSDictionary *)dic;

@end
