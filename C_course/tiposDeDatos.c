/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on February 9, 2018.
 * */

// Tipos de datos en C.

#include <stdio.h>

int main(){

    char a = 'e'; // Se pone en comillas simples para especificar que es un char.
    short b = -15; // Usa %i para ser impreso en la pantalla.
    int c = 1024; // Usa %i para ser impreso en la pantalla.
    unsigned int d = 128; // Solo puede ser un número positivo. Usa %i para ser impreso en la pantalla.
    long e = 123456; // Usa %li para ser impreso en la pantalla; li = long int.
    float f = 15.678; // Usa %f para ser impreso en la pantalla.
    double g = 123123.123123; // Usa %f o %lf para ser impreso en la pantalla; lf = long float.

    printf("El elemento es: %c\n", a);
    printf("El elemento es: %i\n", d);
    printf("El elemento es: %li\n", e);
    printf("El elemento es: %lf\n", g);

    return 0; // Si regresa 0 el código corrió de manera exitosa.
}

/*
 * NOTAS:
 *
 * char: tamaño = 1 byte | rango: 0..255
 * short: tamaño = 2 bytes | rango: -128..127
 * int: tamaño = 2 bytes | rango: -32768..32767
 * unsigned int: tamaño = 2 bytes | rango: 0..65535
 * long: tamaño = 4 bytes | rango: -2147483648..2147483637
 * float: tamaño = 4 bytes | rango: -3.4 * (10).. 3.4 * (10)
 * double: tamaño = 8 bytes | rango: -1.7 * (10).. 1.7 * (10)
 * long double: tamaño = 8 bytes | rango: igual que el double.
 */

