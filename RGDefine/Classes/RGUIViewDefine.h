//
//  UIViewDefine.h
//  MVCDemo
//
//  Created by 浮生似梦、Dream on 2018/11/16.
//  Copyright © 2018年 浮生似梦、Dream. All rights reserved.
//

//设置圆角
#define kSetCornerRadius(View,Radius)\
        [View.layer setCornerRadius:Radius];\
        [view.layer setMasksToBounds:YES]

//设置边框颜色和宽度
#define kSetBorderColorAndWidth(View,Color,Width)\
        [View.layer  setBorderColor:[Color CGColor]];\
        [View.layer  setBorderWidth:Width]


//简单的提示框
#define kAlertViewTips(Message,CancelTitle) \
[[[UIAlertView alloc]initWithTitle:nil message:Message delegate:nil cancelButtonTitle:CancelTitle otherButtonTitles: nil] performSelectorOnMainThread:@selector(show) withObject:nil waitUntilDone:YES]

//简单的提示框,带有标题
#define kAlertViewTipsAndTitle(TipsTitle,Message,CancelTitle) \
[[[UIAlertView alloc]initWithTitle:TipsTitle message:Message delegate:nil cancelButtonTitle:CancelTitle otherButtonTitles: nil] performSelectorOnMainThread:@selector(show) withObject:nil waitUntilDone:YES]










