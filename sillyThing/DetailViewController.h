//
//  DetailViewController.h
//  sillyThing
//
//  Created by Bob Bradley on 8/31/16.
//  Copyright © 2016 Bob Bradley. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

