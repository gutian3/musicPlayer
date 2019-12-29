//
//  CFStreamerModel1.m
//  MusicPlayer
//
//  Created by GuTian on 2019/12/29.
//  Copyright © 2019 chenfeng. All rights reserved.
//

#import "CFStreamerModel.h"

@implementation CFStreamerModel

- (id)initWithDic:(NSDictionary *)dic
{
    self = [super init];
    if (self) {
        
        self.songName = dic[@"songName"];
        self.url = dic[@"url"];
        self.songId = dic[@"id"];
        self.imageString = dic[@"image"];
        self.lyric = dic[@"lyric"];
    }
    return self;
}
@end
