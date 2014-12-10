//
//  CheckOutViewController.h
//  AppcessorizeDemo
//
//  Created by Shimaa Essam on 11/6/14.
//  Copyright (c) 2014 nWeave LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CheckOutViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIView *containerView;
@property (strong, nonatomic) IBOutlet UILabel *standardShippingPriceLabel;
@property (strong, nonatomic) IBOutlet UILabel *loremIpsumShippingPriceLabel;
@property (strong, nonatomic) IBOutlet UILabel *expressipsumShippingPriceLabel;
@property (strong, nonatomic) IBOutlet UILabel *itemTotalPriceLabel;
@property (strong, nonatomic) IBOutlet UILabel *shippingPriceLabel;
@property (strong, nonatomic) IBOutlet UILabel *totalPriceLabel;

@property (retain, nonatomic) IBOutlet UIImageView *maestroCard;
@property (retain, nonatomic) IBOutlet UIImageView *masterCard;
@property (retain, nonatomic) IBOutlet UIImageView *visaElectronCard;
@property (retain, nonatomic) IBOutlet UIImageView *visaCard;
@property (retain, nonatomic) IBOutlet UIImageView *paypalCard;

@property (strong, nonatomic) IBOutlet UIButton *checkoutButton;
@property (strong, nonatomic) IBOutlet UIButton *paypalButton;

- (IBAction)checkoutButtonClicked:(id)sender;
- (IBAction)paypalButtonClicked:(id)sender;

@end
