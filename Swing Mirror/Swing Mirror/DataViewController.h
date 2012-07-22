//
//  DataViewController.h
//  Swing Mirror
//
//  Created by Niclas Helbro on 7/22/12.
//  Copyright (c) 2012 Fickle Mills. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end
