//
//  Printer.h
//  WordPrinter
//
//  Created by Philip Ha on 2016-09-08.
//  Copyright © 2016 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Printer;

@protocol PrinterDelegate <NSObject>

-(int)printer:(Printer *)printer numberOfTimesToPrint:(NSString *)text;
-(BOOL)addSymbol:(NSString *)symbol;

@end

@interface Printer : NSObject

@property (nonatomic, weak) id<PrinterDelegate> delegate;

-(void)printText:(NSString *)text;


@end
