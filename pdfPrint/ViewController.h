//
//  ViewController.h
//  pdfPrint
//
//  Created by qainfotech on 2/25/15.
//  Copyright (c) 2015 Bablu Joshi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "APLPrintPageRenderer.h"

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *printButton;

@end

