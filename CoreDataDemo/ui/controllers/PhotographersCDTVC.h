//  Copyright (c) 2017 ioshero

#import "CoreDataTableViewController.h"

// will segue to a PhotosByPhotographerCDTVC
// use @"Photographer Cell" as your cells' reuse identifer

@interface PhotographersCDTVC : CoreDataTableViewController

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;

@end
