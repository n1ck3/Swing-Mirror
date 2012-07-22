//
//  ModelController.h
//  Swing Mirror
//
//  Created by Niclas Helbro on 7/22/12.
//  Copyright (c) 2012 Fickle Mills. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
