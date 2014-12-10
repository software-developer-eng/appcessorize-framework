//
//  PaymentDetailsViewController.h
//  AppcessorizeDemo
//
//  Created by Maha Ghoneim on 11/11/14.
//  Copyright (c) 2014 nWeave LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PayPalMobile.h"
#import "PaypalManager.h"

@interface PaymentDetailsViewController : UIViewController <PayPalPaymentDelegate, PaypalManagerDelegate>
{
    NSMutableData *data;
}

@property (strong, nonatomic) IBOutlet UILabel *cartTotalPriceLabel;

@property (retain, nonatomic) IBOutlet UIImageView *userIcon;
@property (retain, nonatomic) IBOutlet UIImageView *emailIcon;
@property (retain, nonatomic) IBOutlet UIImageView *streetIcon;
@property (retain, nonatomic) IBOutlet UIImageView *cardNumberIcon;
@property (retain, nonatomic) IBOutlet UIImageView *calendarIcon;
@property (retain, nonatomic) IBOutlet UIImageView *lockIcon;

@property (strong, nonatomic) IBOutlet UIView *nameContainerView;
@property (strong, nonatomic) IBOutlet UIView *emailContainerView;
@property (strong, nonatomic) IBOutlet UIView *streetContainerView;
@property (strong, nonatomic) IBOutlet UIView *zipContainerView;
@property (strong, nonatomic) IBOutlet UIView *cityContainerView;
@property (strong, nonatomic) IBOutlet UIView *unitedKingdomContainerView;
@property (strong, nonatomic) IBOutlet UIView *cardNumberContainerView;
@property (strong, nonatomic) IBOutlet UIView *expiryDateContainerView;
@property (strong, nonatomic) IBOutlet UIView *cvcContainerView;

@property (strong, nonatomic) IBOutlet UIButton *continueButton;

@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UITextField *emailTextField;
@property (strong, nonatomic) IBOutlet UITextField *streetTextField;
@property (strong, nonatomic) IBOutlet UITextField *zipTextField;
@property (strong, nonatomic) IBOutlet UITextField *cityTextField;
@property (strong, nonatomic) IBOutlet UITextField *cardNumberTextField;
@property (strong, nonatomic) IBOutlet UITextField *expiryDateTextField;
@property (strong, nonatomic) IBOutlet UITextField *cvcTextField;

- (IBAction)continueButtonClicked:(id)sender;


@end
