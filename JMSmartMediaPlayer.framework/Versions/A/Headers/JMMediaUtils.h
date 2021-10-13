//
//  JMMediaUtils.h
//  JMSmartMediaPlayer
//
//  Created by lzj<lizhijian_21@163.com> on 2020/4/8.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JMMediaUtils : NSObject

+ (NSString *)CStringtoNSString:(const char *)errStr;

/// 视频转码成H264+AAC数据流文件(请放置子线程)
/// @param inFilePath 视频输入路径
/// @param outFilePath 视频输出路径
+ (BOOL)startVideoConverter:(NSString *)inFilePath outFilePath:(NSString *)outFilePath;

/// 视频转码成H264+AAC数据流文件（强制转码，请放置子线程）
/// @param inFilePath 视频输入路径
/// @param outFilePath 视频输出路径
+ (BOOL)startForceVideoConverter:(NSString *)inFilePath outFilePath:(NSString *)outFilePath;

/// 中断视频转码
+ (void)interruptVideoConverter;

@end

NS_ASSUME_NONNULL_END
