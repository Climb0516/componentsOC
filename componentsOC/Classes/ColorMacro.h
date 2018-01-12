//
//  ColorMacro.h
//  RepublicShare
//
//  Created by 王攀登 on 2017/8/23.
//  Copyright © 2017年 王攀登. All rights reserved.
//

#ifndef ColorMacro_h
#define ColorMacro_h

//颜色宏定义 
#define kBaseBgColor            kRGB16(0x1F1F28)
#define kClearColor             [UIColor  clearColor]
#define kWhite                  [UIColor  whiteColor]
#define kBlack                  [UIColor  blackColor]
#define kDeepDark               kRGB16(0x333333)
#define kDark                   kRGB16(0x666666)
#define kGray                   kRGB16(0x999999)
#define kRed                    kRGB16(0xf6306d)
#define kLineColor              kRGB16(0x34303f)
#define kPlayBgViewColor        kRGB16(0x1f1f1f)
#define kYellow                 kRGB16(0xffd634)
#define kTextColor              kRGB16(0xcac9cd)
#define kCellColor              kRGB16(0x2A2937)

// 获取RGB颜色
#define kRGBACOLOR(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define kRGBCOLOR(r,g,b) kRGBACOLOR(r,g,b,1.0f)
#define kRGB(a) kRGBCOLOR(a, a, a)
#define randomColor [UIColor colorWithRed:(arc4random() % 256)/255.0f green:(arc4random() % 256)/255.0f blue:(arc4random() % 256)/255.0f alpha:1]
// RGB颜色转换（16进制）
#define kRGB16(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define kRGB16Alpha(rgbValue,a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:a]





#endif /* ColorMacro_h */
