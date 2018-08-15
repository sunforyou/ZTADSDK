//
//  SFY_AppLaunchType.h
//  ZTADSDK
//
//  Created by 宋旭 on 2018/5/14.
//  Copyright © 2018年 sunforyou. All rights reserved.
//

#ifndef SFY_AppLaunchType_h
#define SFY_AppLaunchType_h

/**
 启动图来源
 */
typedef NS_ENUM(NSUInteger, SFY_AppLaunchFrom) {
    /** LaunchScreen.storyboard(default) */
    SFY_AppLaunchFromLaunchStoryboard = 1,
    /** LaunchImage */
    SFY_AppLaunchFromLaunchImage = 2,
};

#endif /* SFY_AppLaunchType_h */
