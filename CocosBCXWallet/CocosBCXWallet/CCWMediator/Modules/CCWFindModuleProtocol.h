//
//  CCWFindModuleProtocol.h
//  CocosWallet
//
//  Created by SYL on 2018/11/8.
//  Copyright © 2018 CCW. All rights reserved.
//

#import "CCWModuleProtocol.h"

@protocol CCWFindModuleProtocol <CCWModuleProtocol>

// 发现模块
- (UIViewController *)CCW_FindViewController;

@end
