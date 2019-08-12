//
//  OtherHeader.h
//  MVCDemo
//
//  Created by 浮生似梦、Dream on 2018/6/21.
//  Copyright © 2018年 浮生似梦、Dream. All rights reserved.
//


/************** system-Method-start **************/

#define kNSNotificationCenter      [NSNotificationCenter defaultCenter]
#define kNSUserDefaults            [NSUserDefaults standardUserDefaults]
#define kAppDelegate               ((AppDelegate *)[UIApplication sharedApplication].delegate)
#define kKeyWindow [[UIApplication sharedApplication] keyWindow]

#define kBtnTouchUpInside           UIControlEventTouchUpInside

#define kGetURL(urlStr)             [NSURL URLWithString:urlStr]
#define kGetImage(imageName)        [UIImage imageNamed:[NSString stringWithFormat:@"%@",imageName]]


//获取沙盒 Document
#define kDocumentPath [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject]
//获取沙盒 Cache
#define kCachePath [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject]


//MARK: - UIScreen
#define kWidth                     [UIScreen mainScreen].bounds.size.width
#define kHeight                    [UIScreen mainScreen].bounds.size.height
#define kScaleWH(width_or_height)      (width_or_height)*kWidth/375
#define k_1PX                       (1 / [UIScreen mainScreen].scale)


#define kIPhoneX     (((kHeight == 812) && (kWidth == 375)) || ((kHeight == 896) && (kWidth == 414)))

#define kNavBarH      (KIPhoneX ?  88 : 64)
#define kTabbarH      (KIPhoneX ?  83 : 49)


//MARK: - Prinyt
#ifdef DEBUG
#define NSLog(...) NSLog(__VA_ARGS__) 
#else
#define NSLog(...)
#endif


//MARK: - Info.plist信息

//获取APP名字
#define kGetAppName   [[NSBundle mainBundle].infoDictionary valueForKey:@"CFBundleDisplayName"]

#define kGetBundleID   [NSBundle mainBundle].infoDictionary[@"CFBundleIdentifier"]




//MARK: - UIDevice系统相关

//获取系统版本号
#define kGetSystemVersion       [[[UIDevice currentDevice] systemVersion] floatValue]

//获取系统的名字
#define kGetSystemName          [[UIDevice currentDevice] systemName]

#define kIOS11VersionMoreThan   ([UIDevice currentDevice].systemVersion.floatValue >= 11)

#define kIOS10VersionMoreThan   ([UIDevice currentDevice].systemVersion.floatValue >= 10)


#define kIOS9VersionMoreThan   ([UIDevice currentDevice].systemVersion.floatValue >= 9)

#define kIOS8VersionMoreThan   ([UIDevice currentDevice].systemVersion.floatValue >= 8)


/**
 [[UIDevice currentDevice] identifierForVendor]
 一个替代UDID的东西,这个东西跟应用绑定,一个设备的一个应用对应一个UUID,不管卸载重装多少次,这个设备的这个应用都是对应这个UUID,需要用钥匙串保存起来
 */
#define kGetUUID           [[[UIDevice currentDevice] identifierForVendor] UUIDString]


//MARK: - UIView


/************** system-Method-end **************/


