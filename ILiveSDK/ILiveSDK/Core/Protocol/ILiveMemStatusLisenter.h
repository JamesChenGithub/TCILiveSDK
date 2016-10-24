//
//  ILiveMemStatusLisenter.h
//  ILiveSDK
//
//  Created by AlexiChen on 2016/10/24.
//  Copyright © 2016年 AlexiChen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QAVSDK/QAVCommon.h>

@protocol ILiveMemStatusLisenter <NSObject>

//eventid - 用户事件
//updateList - userID列表, NSString类型
- (BOOL)onEndpointsUpdateInfo:(QAVUpdateEvent)event updateList:(NSString *)ul;

@end
