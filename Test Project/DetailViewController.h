//
//  DetailViewController.h
//  Test Project
//
//  Created by Qingkai Pong on 8/11/16.
//  Copyright © 2016 Kai Pong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

