#include <stdio.h>
#include <stdlib.h>
/**
* Copyright (C) 2019 idiospace.com
* @brief A file designed to calculate the exponent of base 
* @author HanXuan Chen
* @data july 14th, 2019
*/

double power(double base, int exponent) {
    if (base == 0 && exponent == 0) {
        printf( "0 ^ 0 is illeagal\n");
        exit(EXIT_FAILURE);
    }
    else if (exponent == 0) {
        return 1;
    }
    else if (base == 0) {
        return 0;
    }
    else if (base == 1) {
        return 1;
    }
    double result = base;
    int i = 0;
    int abs_exponent = exponent > 0 ? exponent : -1 * exponent;
    for (i = 1 ; i < abs_exponent ; ++i) {
        result *= base;
    }
    if (exponent < 0) {
        result = 1 / result;
    }
    return result;
} 

int main(int argc, char** argv) {
    if (argc < 3) {
        printf("Usage: %s base(double) exponent(int)\n", argv[0]);
	return -1;
    }
    double base = atof(argv[1]);
    int exponent = atoi(argv[2]);
    double result = power(base, exponent);
    printf("%g ^ %d = %g\n", base, exponent, result);
    return 0;    
}
    
    
