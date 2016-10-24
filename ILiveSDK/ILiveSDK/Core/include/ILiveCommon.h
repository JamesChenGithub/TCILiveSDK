//
//  ILiveCommon.h
//  ILiveSDK
//
//  Created by AlexiChen on 2016/10/24.
//  Copyright © 2016年 AlexiChen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ImSDK/TIMManager.h>

typedef void (^TCIVoidBlock)();

typedef void (^TCIErrorBlock)(int moudleID, int errid, NSString *errmsg);


typedef void (^TCIBlock)(id selfPtr);
//
//typedef void (^TCICompletionBlock)(id selfPtr, BOOL isFinished);
//
//typedef void (^TCIFinishBlock)(BOOL isFinished);
//
//typedef void (^TCIRoomBlock)(BOOL succ, NSError *err);
//
//typedef void (^TCIChatRoomBlock)(BOOL succ, NSString *groupID, NSError *err);

//=========================================================

#define TCILDebugLog(fmt, ...) [[TIMManager sharedInstance] log:TIM_LOG_INFO tag:@"iLiveSDK" msg:[NSString stringWithFormat:@"[%s Line %d]" fmt, __PRETTY_FUNCTION__, __LINE__,  ##__VA_ARGS__]];



