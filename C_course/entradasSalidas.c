/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on February 9, 2018.
 * */

// Entradas y salidas

#include <stdio.h>

int main(){

    char x[50];

    printf("Digite su nombre: \n");
    //scanf("%s", x);  No se pone el & porque es una variable grande a diferencia de un char.
    gets(x);

    printf("El valor es: %s", x);

    return 0;
}

/*
 * Notas:
 * 1. Para poder pedirle al usuario un dato se usa el comando scanf donde primeramente se pondrá el tipo de
 * dato de entrada entre "" seguido de una coma (",") el símbolo de & y la variable a asignar.
 * 2. Códigos:
 *  int a = 10;
    float b = 15.5;
    char c = 'e';

    printf("%i %0.1f %c", a, b, c); // Así es la sintaxis para imprimir varias cosas en un print
    ----------------------------------------------------------------------------------------------------------
*   Pedir e imprimir valor para la variable a.
    int a;
    float b;
    char c;

    printf("Digite los valores de las variables a, b, c: \n");
    scanf("%i %f %c", &a, &b, &c);
    printf("Los valores son: a)%i,  b)%0.3f y c)%c\n", a, b, c);

* 3. Cuando se declara una variable char de esta forma x[tamaño] a la hora de pedirlo o de imprimirlo es con el comando
* %s de String.
* 4. El scanf solo te le hasta donde se encuentra un espacio. Para solucionar esto se usa el comando gets(nombreVaraible)
 * */