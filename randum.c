// Conditionals Task 16 from 30
//Write a C program to input decimal number from user and convert to binary number system



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "randum.h"

int randum(int low_boundary, int upper_boundary, int seed) {

    time_t t;
    int result = 0;
    srand(0.23 * time(&t) * seed);
    result = low_boundary + (rand() % abs(upper_boundary - low_boundary));
   // printf(" %d \t | ", result);
    return result;
}
