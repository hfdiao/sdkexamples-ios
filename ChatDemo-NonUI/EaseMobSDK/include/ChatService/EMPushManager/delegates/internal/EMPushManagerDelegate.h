//
//  EMPushManagerDelegate.h
//  EaseMobClientSDK
//
//  Created by Ji Fang on 4/22/14.
//  Copyright (c) 2014 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EMPushManagerDelegateChat.h"

@protocol EMPushManagerDelegate <EMPushManagerDelegateChat>

@optional
- (void)didReceiveRemoteNotification:(NSDictionary *)userInfo;

- (void)didRegisterDeviceWithToken:(NSString *)deviceToken
                                  error:(EMError *)error;

- (void)didUnregisterDeviceWithError:(EMError *)error;

@end
