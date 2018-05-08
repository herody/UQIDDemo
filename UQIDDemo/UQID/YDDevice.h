//
//  YDDevice.h
//  UQIDDemo
//
//  Created by 侯亚迪 on 17/5/26.
//  Copyright © 2017年 侯亚迪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YDDevice : NSObject

//获取IDFA
+ (NSString *)getIDFA;

//获取IDFV
+ (NSString *)getIDFV;

//获取UUID
+ (NSString *)getUUID;

//获取UQID
+ (NSString *)getUQID;

@end
