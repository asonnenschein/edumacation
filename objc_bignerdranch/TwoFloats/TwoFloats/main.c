//
//  main.c
//  TwoFloats
//
//  Created by Adrian Sonnenschein on 12/1/14.
//  Copyright (c) 2014 BigNerdRanch. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Declare three variables
    float floatOne;
    float floatTwo;
    double sum;
    
    // Assign values to the two float variables
    floatOne = 3.14;
    floatTwo = 42.0;
    
    // Assign the sum of the two floats to the double variable
    sum = floatOne + floatTwo;
    
    // Print the results
    printf("The sum of the two floats is %f.\n", sum);
}
