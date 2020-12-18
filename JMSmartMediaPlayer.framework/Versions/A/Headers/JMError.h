//
//  JMError.h
//  JMSmartUtils
//
//  Created by lzj on 2020/8/18.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JMError : NSObject

@property (nonatomic, assign) NSInteger errCode;        //错误码
@property (nonatomic, strong) NSString *errMsg;         //错误信息

/// 生成错误信息对象
/// @param errCode 错误码
/// @param errMsg 错误信息
+ (JMError *)initWithCode:(NSInteger)errCode msg:(NSString *)errMsg;

@end

NS_ASSUME_NONNULL_END
