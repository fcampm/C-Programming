/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on May 21, 2018.
 * */

// Libraries used
#include <stdio.h>
#include <string.h>

int main(){

    //firstProblem();
    //firstProblemSecondSolution();
    secondProblem();
    return 0;
}


// Compute the sum of the first 10 even numbers.
void firstProblem(){
    // Variables to use.
    int result = 0;
    int iterator = 1;

    for (iterator; iterator <= 10; iterator++){
        if(iterator % 2 == 0){
            result += iterator;
        }
    }

    printf("The result of the sum of the first 10 even numbers is: %i", result);
}

// Optimized solution of the first problem (we do not use the if statement)
void firstProblemSecondSolution(){
    // Variables to use.
    int result = 0;
    int iterator = 0;

    for(iterator; iterator <= 10; iterator += 2){
        result += iterator;
    }

    printf("The result of the sum of the first 10 even numbers is: %i", result);
}

// Compute a program that its output be like shown in Notes 1.
void secondProblem(){
    char result[10] = "";
    for(int i = 1; i <= 5; i++){
        strcat(result, "*");
        printf("%s\n", result);
    }
}

/* Notes:
 * 1. Output of the second problem:
 *      *
 *      **
 *      ***
 *      ****
 *      *****
 * 2. For concatenation of two different strings we need to use the library string.h to use the function strcat(str1, str2). This
 * function its been used in the secondProblem function.
 * */