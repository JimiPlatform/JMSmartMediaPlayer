//
//  JMMediaConverter.h
//  JMSmartMediaPlayer
//
//  Created by lzj<lizhijian_21@163.com> on 2020/6/23.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JMMediaConverter : NSObject

/// 开始转码成mp4文件(软转码)
/// @param inFilePath 输入的文件路径
/// @param outFilePath 输出的文件路径，以*.mp4
- (void)startToMp4:(NSString *)inFilePath outFilePath:(NSString *)outFilePath completion:(void (^_Nullable)(BOOL success))completion;

/// 开始转码mp4文件(强转码)
/// @param inFilePath 输入的文件路径
/// @param outFilePath 输出的文件路径，以*.mp4
- (void)startForceToMp4:(NSString *)inFilePath outFilePath:(NSString *)outFilePath completion:(void (^_Nullable)(BOOL success))completion;

/// 中断转码
- (void)interrupt;

/// 是否正在转码中
- (BOOL)isConverting;

#pragma mark -

/// 媒体文件是否包含AAC音频
/// @param filePath 文件路径
+ (BOOL)isContainAAC:(NSString *)filePath;

@end

NS_ASSUME_NONNULL_END
