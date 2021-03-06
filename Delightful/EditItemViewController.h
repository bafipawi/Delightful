//
//  EditItemViewController.h
//  Delightful
//
//  Created by Jared on 2/10/13.
//  Copyright (c) 2013 com.company. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "Model.h"
#import "KGNoise.h"
#import "GCDiscreetNotificationView.h"
#import "MasterViewController.h"

@interface EditItemViewController : UIViewController

@property NSIndexPath *selectedIndexPath;
@property (weak, nonatomic) IBOutlet UITextField *nameField;
@property (weak, nonatomic) IBOutlet UITextField *quantityField;
@property (weak, nonatomic) IBOutlet UITextField *priceField;
@property (weak, nonatomic) IBOutlet UIButton *dismissButton;
@property (weak, nonatomic) IBOutlet UISegmentedControl *measurement;
@property (nonatomic, strong) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UIView *formContainerView;
@property Model *model;
@property MasterViewController *parent;
@property (nonatomic, retain) GCDiscreetNotificationView *notificationView;

- (void)updateItem;
- (IBAction)dismissKeyboard:(id)sender;
- (IBAction)incrementQuantity:(id)sender;
- (IBAction)updateMeasurement:(id)sender;


@end
