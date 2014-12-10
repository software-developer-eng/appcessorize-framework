//
//  ViewController.m
//  AppcessorizeDemo
//
//  Created by Yasser Mabrouk on 11/3/14.
//  Copyright (c) 2014 nWeave LLC. All rights reserved.
//

#import "ViewController.h"
//#import <Appcessorize/AppcessorizeNavigationController.h>
#import <Appcessorize/Appcessorize.h>
//#import <Appcessorize/AppcessorizeNavigationController.h>
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.appcessorizeView.layer.cornerRadius = 10;
    self.appcessorizeView.clipsToBounds = YES;
    
    UIColor *topColor = [UIColor colorWithRed:(75/255) green:(68/255) blue:(86/255) alpha:1];
    UIColor *bottomColor = [[UIColor alloc] initWithRed:(224/255.0) green:(63/255.0) blue:(55/255.0) alpha:1];
  
    NSArray *gradientColors = [NSArray arrayWithObjects:(id)bottomColor.CGColor,(id)topColor.CGColor,  nil];
    NSArray *gradientLocations = [NSArray arrayWithObjects:[NSNumber numberWithInt:0.0],[NSNumber numberWithInt:1.0], nil];
    
    CAGradientLayer *gradientLayer = [CAGradientLayer layer];
    gradientLayer.colors = gradientColors;
    gradientLayer.locations = gradientLocations;
    gradientLayer.startPoint = CGPointZero;
    gradientLayer.endPoint = CGPointMake(1, 1);
    gradientLayer.frame = self.view.frame;
    [self.view.layer insertSublayer:gradientLayer atIndex:0];
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
}

- (IBAction)appcessorizeButtonClicked:(id)sender {
    AppcessorizeNavigationController *controller = [[AppcessorizeNavigationController alloc] init];
    
    if (controller) {
        [self presentViewController:controller animated:YES completion:NULL];
    }
}
@end
