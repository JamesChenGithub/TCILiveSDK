//
//  ILiveLoginManager.m
//  ILiveSDK
//
//  Created by AlexiChen on 2016/10/24.
//  Copyright © 2016年 AlexiChen. All rights reserved.
//

#import "ILiveLoginManager.h"

@implementation ILiveLoginManager

// 获取实例
+ (instancetype)getInstance
{
    // TODO:
    return nil;
}

// 获取AVSDK的句柄
- (QAVContext *)getAVContext
{
    // TODO:
    return nil;
}

// 获取id的密钥
- (NSString *)getSig
{
    // TODO:
    return nil;
}

// 获取登录的ID
- (NSString *)getLoginID
{
    // TODO:
    return nil;
}

// 设置用户状态回调
- (void)setUserStatusListener:(id<TIMUserStatusListener>)listener
{
    // TODO:
//    return nil;
}

//iLiveSDK 登录(独立模式下直接使用该接口，托管模式需先用tlsLogin登录)
- (void)tilvbLogin:(NSString *)uid sig:(NSString *)sig succ:(TCIVoidBlock)succ failed:(TCIErrorBlock *)failed
{
    // TODO:
    //    return nil;
}
//iLiveSDK 登出
- (void)tilvbLogout:(TCIVoidBlock)succ failed:(TCIErrorBlock *)failed
{
    // TODO:
    //    return nil;
}

//账号登录(托管模式)
- (void)tlsLogin:(NSString *)uid sig:(NSString *)sig succ:(TCIVoidBlock)succ failed:(TCIErrorBlock *)failed
{
    // TODO:
    //    return nil;
}

//账号注册
- (void)tlsRegister:(NSString *)uid sig:(NSString *)sig succ:(TCIVoidBlock)succ failed:(TCIErrorBlock *)failed
{
    // TODO:
    //    return nil;
}


@end
