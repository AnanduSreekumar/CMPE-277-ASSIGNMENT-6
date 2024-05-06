//
//  UnitConverterViewController.h
//  UnitConverter
//
//  Created by Neil Smyth on 9/17/13.
//  Copyright (c) 2013 Neil Smyth. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UnitConverterViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *tempText;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;
- (IBAction)convertTemp:(id)sender;

@property (weak, nonatomic) IBOutlet UITextField *milesTextField;
@property (weak, nonatomic) IBOutlet UILabel *kilometersLabel;
- (IBAction)convertDistance:(id)sender;


@end
