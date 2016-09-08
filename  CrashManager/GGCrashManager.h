//
//  GGCrashManager.h
//  XiYuan
//
//  Created by 贵永冬 on 16/9/7.
//  Copyright © 2016年 贵永冬. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface GGCrashManager : NSObject <UIAlertViewDelegate>

/**
 *  开启捕获crash
 */
+ (void)startCatchCrash;

/**
 *  应用进入后天 调用此方法crash应用 防止用户正在操作崩溃，影响体验
 */
+ (void)exit;

@end
