//  Copyright (c) 2017 ioshero

#import "ImageViewController.h"
#import "Photographer.h"

@interface PhotosByPhotographerImageViewController : ImageViewController

// our Model
// passed through to our embedded controller
@property (nonatomic, strong) Photographer *photographer;

@end
