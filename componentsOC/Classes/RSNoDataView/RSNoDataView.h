//
//  RSNoDataView.h
//  RepublicShare
//
//  Created by 王攀登 on 2017/9/26.
//  Copyright © 2017年 王攀登. All rights reserved.
//

#import "MMView.h"

typedef void(^noDataButtonBlock)(NSInteger index);

@interface RSNoDataView : MMView

- (instancetype)initWithFrame:(CGRect)frame noDataImage:(NSString *)noDataImage FirstNoDataLabelStr:(NSString*)FirstNoDataLabelStr noDataButtonTitle:(NSString *)noDataButtonTitle;
@property (nonatomic,strong)noDataButtonBlock nodataButtonBlock;

@end
