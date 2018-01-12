//
//  NSDictionary+Util.h
//  RepublicShare
//
//  Created by 王攀登 on 2017/9/2.
//  Copyright © 2017年 王攀登. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Util)

- (NSString *)dealDicEmptyWithKey:(NSString *)key;

+ (NSString *)convertToJsonData:(NSDictionary *)dict;

@end
