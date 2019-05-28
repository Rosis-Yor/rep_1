// Arrays Task 4 from 42
// Write a C function, which should return the lowest and
// highest element in a matrix
// and their coordinates


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Math.h>
#include "randum.h"

 void minMaxInField_A( int rows, int cols, int (*p)[cols]);

int main() {

printf(" This program will demonstrate a C function \n");
printf(" which would return the lowest and highest element  \n");
printf(" in a 2-D matrix \n");
printf(" and their coordinates (M(x, y)) . \n");



int x, y;

printf(" Enter the dimentions of the field : ");
scanf("%d%d", &x, &y);

int fieldA[x][y];

int result[2][2];

for (int i = 0; i < x; i++) {

    for(int j = 0; j < y; j++) {

        fieldA[i][j] = randum(1, 200, 100 - (j + 1) * (i + 1));
      //  printf(" | %d %d , %d", i, j, fieldA[i][j]);
    }
}

 printf("\n\n");

for (int i = 0; i < x; i++) {

    for(int j = 0; j < y; j++) {

if (j == 0) { printf("\n"); }
        printf(" %d\t|", fieldA[i][j]);
    }
}
 printf("\n\n");


//int ** fd_A = (int **) fieldA;

//printf(" \n\n%d\n\n |",  fieldA[0][1]);
    minMaxInField_A(x, y , fieldA);

return 0;
}


  void minMaxInField_A( int rows, int cols, int (*p)[cols]) {
int result[2][3] = { {0,0, __INT_MAX__}, {0,0,0}} ;

for (int i = 0; i < rows; i++) {

    for (int j = 0; j < cols; j++) {



        if (p[i][j] < result[0][2]) {
    
    result[0][0] = i ; 
    result[0][1] = j; 
    result[0][2] = p[i][j]; 
    }

    if (p[i][j] > result[1][2]) {
    
    result[1][0] = i ; 
    result[1][1] = j; 
    result[1][2] = p[i][j]; 
    }
if(j == 0) { printf("\n"); }
    printf("% d \t", p[i][j]);
    }
 }

 printf(" \n\nMin value is : %d at M(%d, %d) ", result[0][2], result[0][0], result[0][1]);
printf("Max value is : %d at M(%d, %d) ", result[1][2], result[1][0], result[1][1]);

return;
 }
