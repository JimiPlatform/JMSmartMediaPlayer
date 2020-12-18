//
//  JMMediaNetworkTalker.h
//  JMSmartMediaPlayer
//
//  Created by lzj<lizhijian_21@163.com> on 2020/4/8.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JMSingleton.h"
#import "JMError.h"
#import "JMMediaPlayerEnum.h"

NS_ASSUME_NONNULL_BEGIN

@protocol JMMediaNetworkTalkerDelegate;

@interface JMMediaNetworkTalker : NSObject
singleton_h();

@property (nonatomic,weak) id<JMMediaNetworkTalkerDelegate> _Nullable delegate;

- (void)startTalk:(NSString *)url;

- (void)stopTalk;

- (BOOL)isTalking;

@end

#pragma mark - JMMediaNetworkTalkerDelegate

@protocol JMMediaNetworkTalkerDelegate <NSObject>
@optional

/// 实时视频对讲状态
/// @param status 对讲状态
/// @param error 错误提示
- (void)didJMMediaNetworkTalkerWithStatus:(enum JM_MEDIA_TALK_STATUS)status error:(JMError *)error;

@end

NS_ASSUME_NONNULL_END
