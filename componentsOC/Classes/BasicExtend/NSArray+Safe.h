//
//  NSArray+Safe.h
//  RepublicShare
//
//  Created by 王攀登 on 2017/8/23.
//  Copyright © 2017年 王攀登. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  解决NSArray和NSMutableArray数组越界的crash问题，当debug模式下会crash报错方便调试，release模式下会返回nil
 */

@interface NSArray (Safe)

@end

@interface NSMutableArray (Safe)

@end
