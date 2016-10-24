//
//  ILiveAVGLViewAble.h
//  ILiveSDK
//
//  Created by AlexiChen on 2016/10/24.
//  Copyright © 2016年 AlexiChen. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, ILiveRotationType)
{
    //自动校正
    ILiveRotation_Auto = 0,
    //始终全屏显示
    ILiveRotation_FullScreen,
    //剪裁校正
    ILiveRotation_Crop,
    
};


@protocol  ILiveAVGLRenderViewAble <NSObject>

/// 渲染视图的frame。
@property (nonatomic, readonly) CGRect frame;

/// 渲染视图对应的key
@property (nonatomic, readonly) NSString *key;

@property (nonatomic, assign) ILiveRotationType rotationType;

+ (instancetype)createRenderView:(CGRect)frame;
- (void)setFrame:(CGRect)frame;
- (void)setNeedMirrorReverse:(BOOL)needMirror;

@end


@protocol  ILiveAVGLViewAble <NSObject>

/// 渲染视图的key集合。
@property (nonatomic, readonly) NSMutableArray *subViewsKey;


+ (instancetype)createBaseView:(CGRect)frame;

- (void)destroyBaseView;

- (void)bringSubviewToFront:(NSString *)key;

- (void)bringSubviewToBack:(NSString *)key;

- (void)addSubview:(QAVGLRenderView*)view forKey:(NSString *)key;

- (void)removeSubviewForKey:(NSString *)key;

- (UIView<ILiveAVGLRenderViewAble>)getSubviewForKey:(NSString *)key;

- (void)stopDisplay;

- (void)startDisplay;

@end
