//
//  SFY_AdManager.h
//  ZTADSDK
//
//  Created by 宋旭 on 2018/5/18.
//  Copyright © 2018年 sunforyou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SFY_AppLaunchType.h"

/**
 广告资源请求成功回调

 @param adSource 广告资源 E.g. 返回广告文字,图片资源(NSArray<NSDictionary *> *),可以为空
 */
typedef void(^SFY_AdEstablishedSuccessHandler)(NSArray<NSDictionary *> *_Nullable adSource);

/**
 广告创建失败的回调

 @param errorMessage 失败的详细信息
 */
typedef void(^SFY_AdEstablishedFailedHandler)(NSString *errorMessage);

/**
 广告展示完成回调
 */
typedef void(^SFY_AdHadDisplayHandler)(void);

/**
 广告移除回调
 */
typedef void(^SFY_AdWillRemoveFromSuperViewHandler)(void);

@interface SFY_AdManager : NSObject

+ (SFY_AdManager *)shareManager;

/**
 创建开屏广告

 @param appId SDK后台申请的应用唯一标识
 @param adPositionId SDK后台申请的应用广告位标识
 @param channelId SDK后台申请的渠道ID
 @param launchType 启动类型
 */
- (void)sfy_createLaunchScreenAdWithAppId:(NSString *)appId adPositionId:(NSString *)adPositionId channelId:(NSString *)channelId launchType:(SFY_AppLaunchFrom)launchType;

/**
 请求广告资源
 
 @param adPositionId SDK后台申请的应用广告位标识
 @param currentView 当前距离用户最近的视图
 @param frame 广告尺寸位置
 @param displayedHandler 广告展示完成回调
 @param removeHandler 广告关闭回调
 @param successHandler 成功回调,回传已加载完成的广告视图
 @param failedHandler 失败回调,回传错误信息
 */
- (void)sfy_requestAdSourceWithAdPositionId:(NSString *)adPositionId
                                currentView:(UIView *)currentView
                                    adFrame:(CGRect)frame
                                addMaskView:(BOOL)enabled
                                adDisplayed:(SFY_AdHadDisplayHandler)displayedHandler
                  adWillRemoveFromSuperView:(SFY_AdWillRemoveFromSuperViewHandler)removeHandler
                                    success:(_Nonnull SFY_AdEstablishedSuccessHandler)successHandler
                                    failure:(SFY_AdEstablishedFailedHandler)failedHandler;
/**
 SDK版本号

 @return E.g. 1.0.1
 */
- (NSString *)sfy_SDKVersion;

@end
