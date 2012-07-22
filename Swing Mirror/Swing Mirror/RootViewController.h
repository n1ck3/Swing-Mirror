//
//  RootViewController.h
//  Swing Mirror
//
//  Created by Niclas Helbro on 7/22/12.
//  Copyright (c) 2012 Fickle Mills. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end
