//
//  ViewController.m
//  UQIDDemo
//
//  Created by 侯亚迪 on 17/5/26.
//  Copyright © 2017年 侯亚迪. All rights reserved.
//

#import "ViewController.h"
#import "YDDevice.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSString *uqid = [YDDevice getUQID];
    NSLog(@"UQID : %@", uqid);
}


@end
