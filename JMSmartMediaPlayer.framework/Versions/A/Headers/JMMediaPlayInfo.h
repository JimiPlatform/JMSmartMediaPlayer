//
//  JMMediaPlayInfo.h
//  JMSmartMediaPlayer
//
//  Created by lzj<lizhijian_21@163.com> on 2020/6/16.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/// 视频播放信息(每秒更新1次)
@interface JMMediaPlayInfo : NSObject

@property (nonatomic,assign) NSInteger videoWidth;      //视频宽度
@property (nonatomic,assign) NSInteger videoHeight;     //视频高度
@property (nonatomic,assign) NSInteger videoBps;        //视频码率(s/Bps)
@property (nonatomic,assign) NSInteger audioBps;        //音频码率(s/Bps)
@property (nonatomic,assign) NSInteger timestamp;       //时间戳
@property (nonatomic,assign) NSInteger onlineCount;     //在线人数

@end

NS_ASSUME_NONNULL_END
