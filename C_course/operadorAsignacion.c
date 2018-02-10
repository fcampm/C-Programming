/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on February 10, 2018.
 * */

// Operador de asignación.

#include <stdio.h>

int main(){

    int a;
    a = 10;
    a += 10; // a = a + 10; | Cualquiera de las dos opciones arroja el mismo resultado.
    a -= 5; // a = a - 5; | Cualquiera de las dos opciones arroja el mismo resultado.
    a *= 2; // a = a * 2; | Cualquiera de las dos opciones arroja el mismo resultado.
    a /= 10; // a = a / 10; | Cualquiera de las dos opciones arroja el mismo resultado.

    printf("EL valor de a es: %i", a);

    return 0;
}

