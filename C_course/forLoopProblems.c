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
    //secondProblem();
    //thirdProblem();
    //fourthProblem();
    //fifthProblem();
    sixthProblem();
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
    // Variables to use.
    char result[10] = "";
    for(int i = 1; i <= 5; i++){
        strcat(result, "*");
        printf("%s\n", result);
    }
}

// Determine if a number it's prime or not.
void thirdProblem(){
    // Variables to use.
    int iterator;
    int number;
    int counter = 0;

    printf("Compute a number: ");
    scanf("%i", &number);

    for(iterator = 1; iterator <= number; iterator++){
        if(number  % iterator == 0){
            counter++;
        }
    }

    if(counter > 2){
        printf("The number %i is not a prime number", number);
    }
    else{
        printf("The number %i is a prime number", number);
    }
}

// Compute the factorial of a number.
void fourthProblem(){
    // Variables to use.
    int number;
    int iterator;
    long result = 1;

    printf("Digit a number to obtain the factorial: ");
    scanf("%i", &number);

    for(iterator = 1; iterator <= number; iterator++){
        result *= iterator;
    }

    printf("The result is: %li", result);
}

// Fibonacci series.
void fifthProblem(){
    // Variables to use.
    int number;
    int iterator;
    int x = 0;
    int y = 1;
    int z;

    printf("Compute the number of elements: ");
    scanf("%i", &number);

    printf("1\t");

    for(iterator = 1; iterator < number; iterator++){
        z = x + y;
        x = y;
        y = z;

        printf("%i\t", z);
    }
}

// Make a program that prints de sum of all even numbers that exist between 1 to n, and print how many numbers are.
void sixthProblem(){
    // Variables to use.
    int number;
    int iterator;
    int counter = 0;
    int result = 0;

    printf("Digit the superior limit to sum the even numbers: ");
    scanf("%i", &number);

    for(iterator = 1; iterator <= number; iterator++){
        if(iterator % 2 == 0){
            result += iterator;
            counter++;
        }
    }

    printf("The result of the sum is: %i\nTotal of numbers are: %i", result, counter);
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