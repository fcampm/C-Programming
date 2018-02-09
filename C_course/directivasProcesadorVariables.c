/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on February 9, 2018.
 * */

// Directivas del preprocesador y variables.

#include <stdio.h> // Cabecera estándar de entrada y salida de datos. stdio.h es una libreria.

#define PI 3.1416 // Macros, se usa para definir una variable a usar a lo largo del programa.

int y = 5; // Variable global.

int main(){

    // Variables locales.
    double suma = 0;
    int x = 10; // Variable local, porque está adentro de esta función.

    suma = PI + x;

    printf("La suma es: %f\n", suma); // Se pone el %i porque se le está indicando que el tipo de dato es entero.

    return 0; // Le indica a la función que terminó bien el proceso.
}