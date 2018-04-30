/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on April 29, 2018.
 * */

// Libraries to use
#include <stdio.h>

int main(){

    //firstProblem();
    //firstProblemSecondSolution();
    //secondProblem();
    secondProblemSecondSolution();

    return 0;
}

/* Sum of the n first numbers. */
void firstProblem(){

    int counter = 1;
    int n;
    int total = 0;

    printf("Digit the total of numbers to sum: ");
    scanf("%i", &n);

    // While loop to sum the n numbers.
    while(counter <= n){
        total += counter;
        counter++;
    }

    printf("The total of the sum is: %i", total);
}

// This solution uses the formula of the sum of the n numbers without using a while loop. This represents minor usage of memory and time.
void firstProblemSecondSolution(){

    int n;
    int result;

    printf("Digit the total of numbers to sum: ");
    scanf("%i", &n);

    result = (n * (n + 1))/2;
    printf("The total of the sum is: %i", result);
}

/* Digit a number, if the number it's better than 10 inclusive, make the multiplication of the 10 first numbers, otherwise add them. */
void secondProblem(){

    int n;
    int counter = 1;
    int result;

    printf("Digit a number: ");
    scanf("%i", &n);

    if(n < 10){
        result = 0;
        while(counter <= n){
            result += counter;
            counter++;
        }
        printf("The result is: %i", result);
    }
    else{
        result = 1;
        while(counter <= n){
            result *= counter;
            counter++;
        }
        printf("The result is: %i", result);
    }
}

// This solution uses the factorial definition for the conditional if the number it's better than 10 inclusive.
void secondProblemSecondSolution(){

    int n;
    int counter = 1;
    int result;

    printf("Digit a number: ");
    scanf("%i", &n);

    if(n < 10){
        result = 0;
        while(counter <= n){
            result += counter;
            counter++;
        }
        printf("The result is: %i", result);
    }
    else{
        result = factorial(n);
        printf("The result is: %i", result);

    }
}

// This is the definition of the factorial number using recursion. This is the solution of the conditional of the secondProblem.
int factorial(int n){

    int result;
    if (n == 1){
        return 1;
    }
    else{
        result = n * factorial(n-1);
        return result;
    }

}
