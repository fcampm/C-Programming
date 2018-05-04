/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on April 29, 2018.
 * */

// Libraries to use
#include <stdio.h>
#include <math.h>

int main(){

    //firstProblem();
    //firstProblemSecondSolution();
    //secondProblem();
    //secondProblemSecondSolution();
    //thirdProblem();
    //fourthProblem();
    //fifthProblem();
    sixthProblem();

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

/* Multiples of 3 beginning from 1 to n. */
void thirdProblem(){
    int n, i = 1;

    printf("Digit the total of numbers to corroborate: ");
    scanf("%i", &n);

    while(i <= n){
        if(i % 3 == 0){
            printf("The number %i, it's a multiple of 3\n", i);
        }
        i++;
    }
}

/* Multiples of 5 beginning from 1 to n. */
void fourthProblem(){
    int n, i = 1;

    printf("Digit the total of numbers to corroborate: ");
    scanf("%i", &n);

    while(i <= n){
        if(i % 5 == 0){
            printf("The number %i, it's a multiple of 5\n", i);
        }
        i++;
    }

}

/* Exercise: add 1-2 + 3-4 + 5-6 + .... + n. */
void fifthProblem(){

    int n, i = 1,res = 0;

    printf("Digit the total of numbers to calculate: ");
    scanf("%i", &n);

    while (i <= n){
        res += pow(-1,i+1) * i;
        i++;
    }

    printf("The result is: %i", res);
}

/* Add the par numbers beginning from n to m. */
void sixthProblem(){

    int n, m, res = 0;

    printf("Digit the range of numbers to sum [n, m]: ");
    scanf("%i %i", &n, &m);

    while (n <= m){
        if(n % 2 == 0){
            res += n;
        }
        n++;
    }
    printf("The result of the sum it's: %i", res);
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
