//
//  DetailViewController.h
//  ImageCollectionViewer
//
//  Created by Weichuan Tian on 3/1/15.
//  Copyright (c) 2015 Weichuan Tian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

