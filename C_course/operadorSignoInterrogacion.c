/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on April 16, 2018.
 * */

#include <stdio.h>

int main(){

    // Variables de instancia del problema a realizar.
    int numero;

    printf("Digite un numero: ");
    scanf("%i", &numero);

    (numero % 2 == 0)? printf("El numero es par"): printf("El numero es impar");
    return 0;
}

/* Notas:
 * 1. Expresión con el condicional '?'. Esta expresión tiene la siguiente sintaxis:
 * Condición ? Expresión1: Expresión2*/