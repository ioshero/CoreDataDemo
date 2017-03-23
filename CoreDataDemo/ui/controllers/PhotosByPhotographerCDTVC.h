//  Copyright (c) 2017 ioshero

#import "PhotosCDTVC.h"
#import "Photographer.h"

// this class inherits the ability to display a Photo in its rows
// and the ability to navigate to show the Photo's image
// from it superclass PhotosCDTVC

@interface PhotosByPhotographerCDTVC : PhotosCDTVC

@property (nonatomic, strong) Photographer *photographer;

@end
