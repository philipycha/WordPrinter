//
//  Printer.m
//  WordPrinter
//
//  Created by Philip Ha on 2016-09-08.
//  Copyright © 2016 Lighthouse Labs. All rights reserved.
//

#import "Printer.h"

@implementation Printer

- (instancetype)init
{
    self = [super init];
    if (self) {
       
        
    }
    return self;
}

-(void)printText:(NSString *)text {
    
    
    int j = [self.delegate printer:self numberOfTimesToPrint:text];
    
    for (int i = 0; i < j ; i++) {
        
        NSLog(@"%@", text);
    }
}

@end
