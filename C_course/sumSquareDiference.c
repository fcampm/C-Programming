/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on February 11, 2018.
 * */

// Problema de la página projecteuler.net

#include <stdio.h>
#include <math.h>

int main(){

    int n = 100, cuadradosNat = 0, sumaCuadradosNat = 0, resultado;

    for(int i = 1; i <= n; i++){

        sumaCuadradosNat += i;
    }

    for(int j = 1; j <= n; j++){

        cuadradosNat += pow(j, 2);
    }

    sumaCuadradosNat = pow(sumaCuadradosNat, 2);

    resultado = sumaCuadradosNat - cuadradosNat;

    printf("El resultado es: %i", resultado);
    return 0;
}
