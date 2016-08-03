//
//  djtest.m
//  Pods
//
//  Created by cuijianpeng on 16/8/3.
//
//

#import "djtest.h"

@implementation djtest
+(void)test{
    CreateConversationReq *a = [CreateConversationReq new];
    [a setPuid:@"djtest"];
    NSLog(@"djtest");
    NSLog(@"go-%@",[a puid]);
}
@end
