//
//  CalculatorBrain.h
//  BlockDie Calculator v3
//
//  Created by Jeff Jeakins on 11-07-27.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject
{
    //iVars
    int numberOfDice;
    NSString *specialCode;
    
    
}




//Class Method Declarations
- (void)generateSpecialCode: (BOOL)attackerBlock: (BOOL)defenderBlock: (BOOL)defenderDodge;
//- (float)calculateKnockdownPercentage;






@end
