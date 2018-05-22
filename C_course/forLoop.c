/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on May 21, 2018.
 * */

// Libraries used
#include <stdio.h>

int main(){

    // for cycle upward form.
    for(int i = 1; i <= 10; i++){
        printf("%i\n", i);
    }

    printf("\n");

    // for cycle falling form.
    for(int j = 10; j >= 1; j--){
        printf("%i\n", j);
    }
    return 0;
}

/* Notes:
 * 1. The syntax of the foor loop its:
 *
 * for(iterator; condition; increment or decrement){
 *      instructions;
 * }
 *
 * */

