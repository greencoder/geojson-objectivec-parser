//
//  ViewController.h
//  GeoJSONParserSample
//
//  Created by JM on 03/07/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, retain) IBOutlet UITextView *json;
@property (nonatomic, retain) IBOutlet UITextView *result;


- (IBAction)doParse:(id)sender;
@end
