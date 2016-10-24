//
//  ILiveRoomConfig.h
//  ILiveSDK
//
//  Created by AlexiChen on 2016/10/24.
//  Copyright © 2016年 AlexiChen. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ILiveMemStatusLisenter.h"

#import <ImSDK/TIMManagerExt.h>


typedef NSString *(^ILiveGroupIDFunc)(unsigned int roomid);

@interface ILiveRoomConfig : NSObject

// 成员变化监听回调
@property (nonatomic, strong) id<ILiveMemStatusLisenter> memberStatusLisenter;

// 消息处理监听回调
@property (nonatomic, strong) id<TIMMessageListener> roomMessageListener;

@property (nonatomic, copy) ILiveGroupIDFunc generateImGroupFunc;

@end
