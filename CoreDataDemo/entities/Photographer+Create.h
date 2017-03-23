//  Copyright (c) 2017 ioshero

#import "Photographer.h"

@interface Photographer (Create)

+ (Photographer *)userInManagedObjectContext:(NSManagedObjectContext *)context;

- (BOOL)isUser;

+ (Photographer *)photographerWithName:(NSString *)name
                inManagedObjectContext:(NSManagedObjectContext *)context;

@end
