//
//  ViewController.h
//  AppcessorizeDemo
//
//  Created by Yasser Mabrouk on 11/3/14.
//  Copyright (c) 2014 nWeave LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (IBAction)appcessorizeButtonClicked:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *appcessorizeButton;
@property (weak, nonatomic) IBOutlet UIView *appcessorizeView;

@end
