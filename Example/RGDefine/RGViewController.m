//
//  RGViewController.m
//  RGDefine
//
//  Created by 18607304107@163.com on 08/12/2019.
//  Copyright (c) 2019 18607304107@163.com. All rights reserved.
//

#import "RGViewController.h"
#import "RGClassHeader.h"

@interface RGViewController ()
@property (weak, nonatomic) IBOutlet UITextField *tf;

@end

@implementation RGViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	
    [kNSNotificationCenter postNotificationName:@"TEST" object:@""];
    
//    kAlertViewTips(@"测试", @"取消23213321321");
    
//    UITableViewCell *cell = [UITableViewCell new];
   
    kTextFieldPlaceholderAndPlaceholderColor(self.tf, @"测试一下", [UIColor redColor]);
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



@end
