//
//  ILiveRoomOption.h
//  ILiveSDK
//
//  Created by AlexiChen on 2016/10/24.
//  Copyright © 2016年 AlexiChen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QAVSDK/QAVVideoCtrl.h>
#import <QAVSDK/QAVCommon.h>
#import "ILiveCommon.h"

@interface ILiveRoomOption : NSObject

@property (nonatomic, assign) int audioCategory;
@property (nonatomic, assign) unsigned long long authBits;
@property (nonatomic, strong) NSData *authBuffer;
@property (nonatomic, assign) BOOL autoCamera;
@property (nonatomic, assign) BOOL autoMic;
@property (nonatomic, assign) cameraPos cameraId;
@property (nonatomic, copy) NSString *controlRole;
@property (nonatomic, copy) TCIErrorBlock exceptionListener;
@property (nonatomic, assign) BOOL gbMode;

@property (nonatomic, copy) NSString *imGroupId;
@property (nonatomic, copy) NSString *groupType;
@property (nonatomic, assign) BOOL imSupport;

@property (nonatomic, copy) NSString *hostID;
@property (nonatomic, assign) VideoRecvMode videoRecvMode;


+ (instancetype)defaultHostLiveOption;
+ (instancetype)defaultGuestLiveOption;
+ (instancetype)defaultInteractUserLiveOption;

@end
