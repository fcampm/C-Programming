/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on April 20, 2018.
 * */

// Libraries to use.
#include <stdio.h>

int main(){

    // Instance variable. In this case the variable it's a counter.
    int i = 1;
    int j = 10;
    int star = 1;

    // While loop to print the first 10 numbers beginning with 1.
    printf("First 10 numbers beginning with 1: \n");
    while(i <= 10){
        printf("%i \n", i); // Output expected: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10.
        i++; // We need to add 1 because if qe don't this will be an endless loop or cycle.
    }

    // While loop to print the first 10 numbers beginning with 10.
    printf("\nFirst 10 numbers beginning with 10: \n");
    while(j >= 1){
        printf("%i \n", j); // Output expected: 10, 9, 8, 7, 6, 5, 4, 3, 2, 1.
        j--; // In this scenario we need to subtract 1 to j, to avoid an endless loop or cycle.
    }

    // While loop that will print 5 '*'.
    printf("\nStars loop: \n");
    while(star <= 5){
        printf("*"); // Output expected: *****.
        star++;
    }

    return 0;
}

/* Notes:
 * 1. The while loop has the following syntax:
 * while(condition){
 *      the code that will execute within this loop;
 * }
 *
 * The condition can numbers or boolean values.
 * */