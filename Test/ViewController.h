//
//  ViewController.h
//  Test
//
//  Created by Leon on 9/12/13.
//  Copyright (c) 2013 lemil. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UITextField *textfield;
//- (IBAction)changeGreeting:(id)sender;
- (IBAction)changeGreeting:(id)sender;
@property (copy, nonatomic) NSString *userName;
@end
