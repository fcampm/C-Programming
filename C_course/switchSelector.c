/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on April 16, 2018.
 * */

// Librerías a usar.
#include <stdio.h>

int main(){
    int numero;

    // Pedimos al usuario un número entre 1 y 3.
    printf("Digite un numero entre 1 y 3: ");
    scanf("%i", &numero);

    //Usamos el condicional switch.
    switch(numero){

        case 1:
            printf("Es el numero 1");
            break;
        case 2:
            printf("Es el numero 2");
            break;
        case 3:
            printf("Es el numero 3");
            break;
        default:
            printf("No ha digitado un numero correcto");

    }

    return 0;
}
/* Notas:
 * 1. La sentencia switch en C, tiene la siguiente sintaxis, teniendo en cuenta que el selector solo puede ser int o char:
 *
 * switch (selector) {
 *  case etiqueta1: |||||
 *  break;
 *  case etiqueta2: |||||
 *  break;
 *  default etiqueraDefault;
 *}
 *
 * 2. Es importante tener en cuenta que después de cada case debe de llevar el break para salir de ese caso. También es importante mencionar
 * que el default no es necesario pero es una buena práctica de programación poner un caso default que se ejecuta solamente cuando no entra
 * el switch en ninguno de los casos que definiste antes del default y este, al estar hasta el final no requiere de un break
 * */