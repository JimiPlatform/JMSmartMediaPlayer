//
//  JMMediaPlayerEnum.h
//  JMSmartMediaPlayer
//
//  Created by lzj<lizhijian_21@163.com> on 2020/4/8.
//  Copyright © 2020 Jimi. All rights reserved.
//

#ifndef JMMediaPlayerEnum_h
#define JMMediaPlayerEnum_h

#define JM_MEDIA_ERR_NO_ERR 0

#define JM_MEDIA_ERR_URL_INVALID -1     //URL无效
#define JM_MEDIA_ERR_PATH_INVALID -2    //路径无效
#define JM_MEDIA_ERR_OPEN_FAILED -3     //打开URL失败
#define JM_MEDIA_ERR_PLAY_ABNORMAL -4   //播放异常中断

#define JM_MEDIA_ERR_VIDEO_DECODE_FAILED -100    //视频解码失败

#define JM_MEDIA_ERR_AUDIO_DECODE_FAILED -200    //音频解码失败
#define JM_MEDIA_ERR_MICROPHONE_AUTHORITY -201   //无麦克风权限
#define JM_MEDIA_ERR_MICROPHONE_INIT -202  //麦克风初始化失败


#define JM_MEDIA_ERR_RECORD_NO_PLAY -300      //没有开始播放或数据流
#define JM_MEDIA_ERR_RECORD_INIT -301      //录制初始化失败
#define JM_MEDIA_ERR_RECORD_RECORDING -302      //正在录制中

//播放文件或类枚举枚举
enum JM_MEDIA_PLAY_TYPE {
    JM_MEDIA_PLAY_TYPE_NONE = 0,
    JM_MEDIA_PLAY_TYPE_RTMP,
    JM_MEDIA_PLAY_TYPE_FILE,
    JM_MEDIA_PLAY_TYPE_STREAM,
};

enum JM_MEDIA_VDEIO_TYPE {
    JM_MEDIA_VIDEO_TYPE_H264 = 1,
};

enum JM_MEDIA_AUDIO_TYPE {
    JM_MEDIA_AUDIO_TYPE_AAC  = 1,
};

//多媒体音视频播放参数信息
typedef struct JMMediaInfoConfig {
    enum JM_MEDIA_VDEIO_TYPE videoCodecType;
    int64_t videoCodecID;
    int videoFrameRate;
    int64_t videoBitRate;
    int videoWidth;
    int videoHeight;

    enum JM_MEDIA_AUDIO_TYPE audioCodecType;
    int64_t audioCodecID;
    int audioSampleRate;
    int64_t audioBitRate;
    int audioChannels;
} JMMediaInfoConfig;

//播放状态枚举
enum JM_MEDIA_PLAY_STATUS {
    JM_MEDIA_PLAY_STATUS_NONE = 0,
    JM_MEDIA_PLAY_STATUS_PREPARE,                //准备播放
    JM_MEDIA_PLAY_STATUS_START,                  //正在播放
    JM_MEDIA_PLAY_STATUS_STOP,                   //播放结束
    JM_MEDIA_PLAY_STATUS_FAILED,                 //播放失败
};

//视频录制枚举
enum JM_MEDIA_RECORD_STATUS {
    JM_MEDIA_RECORD_STATUS_NONE = 0,
    JM_MEDIA_RECORD_STATUS_START,               //开始录制
    JM_MEDIA_RECORD_STATUS_COMPLETE,            //录制完成
    JM_MEDIA_RECORD_STATUS_FAILED,              //录制失败
    JM_MEDIA_RECORD_STATUS_RECORDING,           //正在录制
};

//对讲状态枚举
enum JM_MEDIA_TALK_STATUS {
    JM_MEDIA_TALK_STATUS_NONE = 0,
    JM_MEDIA_TALK_STATUS_PREPARE,                //准备播放
    JM_MEDIA_TALK_STATUS_START,                  //正在播放
    JM_MEDIA_TALK_STATUS_STOP,                   //播放结束
    JM_MEDIA_TALK_STATUS_FAILED,                 //对讲失败
};

#endif /* JMMediaPlayerEnum_h */
