//
//  CFUser1.m
//  CFMusicDemo
//
//  Created by GuTian on 2019/12/29.
//  Copyright © 2019 chenfeng. All rights reserved.
//

#import "CFUser.h"

@implementation CFUser

+ (instancetype)shareInstance
{
    static CFUser *_instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _instance = [[self alloc] init];
    });
    
    return _instance;
}

@end
