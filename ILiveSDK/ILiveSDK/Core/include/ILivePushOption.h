//
//  ILivePushOption.h
//  ILiveSDK
//
//  Created by AlexiChen on 2016/10/24.
//  Copyright © 2016年 AlexiChen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ImSDK/IMSdkComm.h>

@interface ILivePushOption : NSObject

@property(nonatomic, assign) AVEncodeType encode;
@property(nonatomic, assign) AVSDKType sdkType;
@property(nonatomic, copy) NSString *channelName;
@property(nonatomic, copy) NSString *channelDesc;
@property(nonatomic, copy) NSString *channelPassword;
@property(nonatomic, assign) BOOL record;
@property(nonatomic, assign) BOOL waterMark;
@property(nonatomic, assign) uint32_t waterMarkId;
@property(nonatomic, assign) AVRateType addRateType;

@end
