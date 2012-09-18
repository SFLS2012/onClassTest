//
//  ViewController.h
//  onClassTest
//
//  Created by 朱 皓斌 on 12-9-17.
//  Copyright (c) 2012年 朱 皓斌. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
- (IBAction)slider:(id)sender;

@property (weak, nonatomic) IBOutlet UISlider *theSlider;

@property (weak, nonatomic) IBOutlet UILabel *number;
@end
