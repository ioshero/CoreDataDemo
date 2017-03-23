//  Copyright (c) 2017 ioshero

#import <UIKit/UIKit.h>

@interface UIImage (Additions)

// makes a copy at a different size
- (UIImage *)imageByScalingToSize:(CGSize)size;

// applies filter as described in Friday section
- (UIImage *)imageByApplyingFilterNamed:(NSString *)filterName;

@end
