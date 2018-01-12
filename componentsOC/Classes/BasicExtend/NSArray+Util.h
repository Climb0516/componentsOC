//
//  NSArray+Util.h
//  RepublicShare
//
//  Created by 王攀登 on 2017/8/23.
//  Copyright © 2017年 王攀登. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Util)

/**
 *  随机化序列
 *  @return return value description
 */
- (NSArray*)shuffleArray;
/**
 *  数组 反转
 */
- (NSArray *)arrayReversal;
/**
 *  升序 排列
 */
- (NSArray *)arraySortASC;
/**
 *  降序 排列
 */
- (NSArray *)arraySortDESC;
@end
