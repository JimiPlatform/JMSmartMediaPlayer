//
//  JMMediaNetworkPlayer.h
//  JMSmartMediaPlayer
//
//  Created by lzj<lizhijian_21@163.com> on 2020/4/3.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIImage.h>
#import <JMMonitorView/JMMonitor.h>
#import "JMError.h"
#import "JMMediaPlayerEnum.h"
#import "JMMediaPlayInfo.h"

NS_ASSUME_NONNULL_BEGIN

@protocol JMMediaNetworkPlayerDelegate;

@interface JMMediaNetworkPlayer : NSObject

@property (nonatomic,weak) id<JMMediaNetworkPlayerDelegate> _Nullable delegate;
@property (nonatomic,assign) BOOL mute;                 //静音设置
@property (nonatomic,assign) BOOL sniffStreamEnable;    //是否完整探测流信息

/// 加载显示视图
/// @param monitor JMMonitor
- (void)attachMonitor:(JMMonitor *_Nonnull)monitor;

/// 释放显示视图
- (void)deattachMonitor;

/// 开始播放RTMP、RTSP、本地视频
/// @param url RTMP链接
- (BOOL)play:(NSString *)url;

/// 停止播放
- (BOOL)stop;

/// 是否在播放
- (BOOL)isPlaying;

/// 开始录制
/// @param fileName 沙盒MP4文件路径
- (BOOL)startRecord:(NSString *)fileName;

/// 停止录制
- (BOOL)stopRecord;

/// 是否在录制
- (BOOL)isRecording;

/// 录制时长(毫秒)
- (NSInteger)getRecordingDuration;

/// 截图
- (UIImage *)snapshot;

/// 是否开启音频降噪功能及级别
/// @param level 级别：0~3，0表示关闭，默认3
- (void)setDenoiseLevel:(NSInteger)level;

/// 设置最大延迟时间
/// @param time 最大延迟时间
- (void)setDelayMaxTime:(CGFloat)time;

@end

#pragma mark - JMMediaNetworkPlayerDelegate

@protocol JMMediaNetworkPlayerDelegate <NSObject>
@optional

/// 视频播放状态
/// @param status 播放状态，JM_MEDIA_PLAY_STATUS
/// @param error 错误提示结构体
- (void)didJMMediaNetworkPlayerPlay:(JMMediaNetworkPlayer *_Nonnull)player status:(enum JM_MEDIA_PLAY_STATUS)status error:(JMError *_Nullable)error;

/// 视频录制回调函数
/// @param status 录制状态
/// @param filePath 录制的实际路径
/// @param error 错误信息
- (void)didJMMediaNetworkPlayerRecord:(JMMediaNetworkPlayer *_Nonnull)player status:(enum JM_MEDIA_RECORD_STATUS)status path:(NSString *_Nullable)filePath error:(JMError *_Nullable)error;

/// 音视频流信息(每秒更新一次，若视频宽高变化则会立即更新)
/// @param player 播放器
/// @param playInfo 播放器信息对象
- (void)didJMMediaNetworkPlayerPlayInfo:(JMMediaNetworkPlayer *_Nonnull)player playInfo:(JMMediaPlayInfo *)playInfo;

@end

NS_ASSUME_NONNULL_END
