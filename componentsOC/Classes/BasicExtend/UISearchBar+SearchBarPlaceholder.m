//
//  UISearchBar+SearchBarPlaceholder_h.m
//  RepublicShare
//
//  Created by 姜鸥人 on 2017/8/31.
//  Copyright © 2017年 王攀登. All rights reserved.
//

#import "UISearchBar+SearchBarPlaceholder.h"

@implementation UISearchBar (ZMSearchBarPlaceholder)
-(void)changeLeftPlaceholder:(NSString *)placeholder {
    self.placeholder = placeholder;
    SEL centerSelector = NSSelectorFromString([NSString stringWithFormat:@"%@%@", @"setCenter", @"Placeholder:"]);
    if ([self respondsToSelector:centerSelector]) {
        BOOL centeredPlaceholder = NO;
        NSMethodSignature *signature = [[UISearchBar class] instanceMethodSignatureForSelector:centerSelector];
        NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:signature];
        [invocation setTarget:self];
        [invocation setSelector:centerSelector];
        [invocation setArgument:&centeredPlaceholder atIndex:2];
        [invocation invoke];
    }
}
@end
