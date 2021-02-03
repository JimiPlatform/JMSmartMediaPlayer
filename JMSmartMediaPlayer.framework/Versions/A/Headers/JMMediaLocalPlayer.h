//
//  JMMediaLocalPlayer.h
//  JMSmartMediaPlayer
//
//  Created by lzj<lizhijian_21@163.com> on 2020/6/29.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import "JMMediaNetworkPlayer.h"

NS_ASSUME_NONNULL_BEGIN

@protocol JMMediaLocalPlayerDelegate <JMMediaNetworkPlayerDelegate>
@optional

@end

@interface JMMediaLocalPlayer : JMMediaNetworkPlayer

- (BOOL)configMediaInfo:(JMMediaInfoConfig)config;

- (BOOL)playVideo:(u_char *)data size:(NSUInteger)size timestampt:(NSUInteger)ts;

- (BOOL)playAudio:(u_char *)data size:(NSUInteger)size timestampt:(NSUInteger)ts;

- (void)pause:(BOOL)bPause;

/// 定位重新播放
/// @param msTime 毫秒，具体时间点
- (void)seek:(NSUInteger)msTime;

/// 获取文件时长(毫秒)
- (NSUInteger)getDuration;

/// 是否支持本地播放
- (BOOL)isSupport:(NSString * _Nonnull)filePath;

@end

NS_ASSUME_NONNULL_END
