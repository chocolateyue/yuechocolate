//
//  ChocolateDetailViewController.h
//  coredata
//
//  Created by Chocolate on 12-11-5.
//  Copyright (c) 2012年 Chocolate. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChocolateDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
