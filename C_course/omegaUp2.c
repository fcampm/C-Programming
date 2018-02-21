/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on February 14, 2018.
 * */

// Problema: Obtener promedio - https://omegaup.com/arena/problem/1-Obtener-promedio#problems

#include <stdio.h>

int main(){

    int a;
    double res = 0, suma;
    scanf("%i", &a);
    for (int i = 1; i <= a; i++){

        scanf("%lf", &suma);
        res += suma;
    }

    printf("%0.2lf", res/a);
    return 0;
}