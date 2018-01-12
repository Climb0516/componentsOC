//
//  CFAViewController.m
//  componentsOC
//
//  Created by Climb0516 on 11/20/2017.
//  Copyright (c) 2017 Climb0516. All rights reserved.
//

#import "CFAViewController.h"

#import <SizeMacro.h>
#import <ColorMacro.h>
#import <NSDate+Util.h>
#import <NSString+Util.h>
#import <BaseHorSwipableViewController.h>

#import "FirstViewController.h"
#import "SecondViewController.h"

@interface CFAViewController ()

@property (nonatomic, strong) FirstViewController  *firstVC;
@property (nonatomic, strong) SecondViewController *secondVC;
@property (nonatomic, strong) BaseHorSwipableViewController *swipableVC;

@end

@implementation CFAViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	
    
    NSLog(@"test:%@",[@"" dealWithEmpty]);
    
    NSMutableArray *vcArray = [NSMutableArray new];
    _firstVC  = [[FirstViewController alloc] init];
    [vcArray addObject:_firstVC];
    _secondVC = [[SecondViewController alloc] init];
    [vcArray addObject:_secondVC];
    
    _swipableVC = [[BaseHorSwipableViewController alloc] initWithViewControllers:vcArray andTitles:@[@"first",@"second"]];
    _swipableVC.view.frame             = CGRectMake(0, kStatusBarHeight, kScreenWidth, kScreenHeight-kStatusBarHeight);
    _swipableVC.currentLineLabelHeight = 4.5f;
    _swipableVC.titleHeight            = 58.0f;
    _swipableVC.selectedTitleColor     = kRGB16(0xFFD634);
    [self addChildViewController:self.swipableVC];
    [self.view addSubview:_swipableVC.view];
}

@end
