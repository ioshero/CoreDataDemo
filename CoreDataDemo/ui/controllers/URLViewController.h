//  Copyright (c) 2017 ioshero

#import <UIKit/UIKit.h>

@interface URLViewController : UIViewController

// displays the url
// it is not a popover-specific class in any way
// it would work in any environment
// (e.g. pushed in a navigation controller would work)

@property (nonatomic, strong) NSURL *url;

@end
