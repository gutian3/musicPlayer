//
//  LyricsManager1.h
//  CFMusicDemo
//
//  Created by GuTian on 2019/12/29.
//  Copyright © 2019 chenfeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DisplayLyricView;

@interface LyricsManager : NSObject

@property (nonatomic, strong) NSMutableArray *textArray;
@property (nonatomic, strong) NSMutableArray *timeArray;

@property (nonatomic, strong) DisplayLyricView *lyricView;

@property (nonatomic, assign) NSInteger currentRow;

- (void)analysisOfLyrics:(NSString *)lyrics;

- (NSInteger)updateSelectedIndexLyricWithTime:(CGFloat )time;

- (void)clearLyricsInfo;

- (DisplayLyricView *)configLyricViewWithFrame:(CGRect )frame;

- (void)reloadLyricView;

- (void)reloadLyricViewWithCurrentRow;

@end
