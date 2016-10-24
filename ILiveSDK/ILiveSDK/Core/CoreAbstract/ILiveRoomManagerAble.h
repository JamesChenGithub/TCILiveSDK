//
//  ILiveRoomManagerAble.h
//  ILiveSDK
//
//  Created by AlexiChen on 2016/10/24.
//  Copyright © 2016年 AlexiChen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QAVSDK/QAVMultiRoom.h>
#import <QAVSDK/QAVVideoCtrl.h>
#import <IMSDK/TIMMessage.h>
#import <IMSDK/IMSdkComm.h>
#import "ILiveCommon.h"

@class ILiveRoomOption;
@class ILiveRoomConfig;
@class ILivePushOption;
@class ILiveRecordOption;

@protocol ILiveRoomManagerAble <NSObject>

@required

@property (nonatomic, readonly) ILiveRoomOption *option;

+ (instancetype)getInstance;

- (int)configWith:(ILiveRoomConfig *)config;

- (int)shutdown;

- (int)bindIMGroupId:(NSString *)groupId;

- (int)changeAuthAndRole:(unsigned long long)authBits authBuf:(NSData *)authBuf role:(NSString *)role succ:(TCIBlock)succ failed:(TCIErrorBlock)block;

- (int)createRoom:(int)roomId option:(ILiveRoomOption *)option succ:(TCIBlock)succ failed:(TCIErrorBlock)block;

- (int)joinRoom:(int)roomId option:(ILiveRoomOption *)option succ:(TCIBlock)succ failed:(TCIErrorBlock)block;

- (int)quitRoom:(TCIBlock)succ failed:(TCIErrorBlock)block;

- (int)enableCamera:(int)cameraId enable:(BOOL)bEnable;

- (int)switchCamera:(int)cameraId;

- (int)enableMic:(BOOL)bEnable;

- (QAVMultiRoom *)getAvRoom;

- (cameraPos)getCurCameraId;

- (NSString *)getHostId;

- (NSString *)getIMGroupId;

- (int)getRoomId;

// 发送消息相关
- (int)sendC2CMessage:(NSString *)dstUser message:(TIMMessage *)message succ:(TCIBlock)succ failed:(TCIErrorBlock)block;

- (int)sendGroupMessage:(TIMMessage *)message succ:(TCIBlock)succ failed:(TCIErrorBlock)block;

// 与界面相关的生命周期
- (void)onDealloc;

- (void)onEnterForeground;

- (void)onEnterBackground;

- (int)startPushStream:(ILivePushOption *)option succ:(TCIBlock)succ failed:(TCIErrorBlock)block;

- (int)startRecordVideo:(ILiveRecordOption *)option succ:(void (^)(AVStreamerResp *resp))succ failed:(TCIErrorBlock)block;

- (int)stopPushStream:(long)channelId succ:(TCIBlock)succ failed:(TCIErrorBlock)block;

- (int)stopPushStreams:(NSArray *)longids succ:(TCIBlock)succ failed:(TCIErrorBlock)block;

- (int)stopRecordVideo:(void (^)(NSString *fileID))succ failed:(TCIErrorBlock)block;

@end
