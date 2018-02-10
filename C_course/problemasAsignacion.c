/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on February 10, 2018.
 * */

// Problemas asignación.

/*
 * 1. Pedir dos números al usuario, sumarlos, restarlos, multiplicarlos y dividirlos.
 * 2. Convertir grados celsius a grados fahrenheit.
 * */

#include <stdio.h>

void celciusFahrenheit(float celsius);

int main(void){
    // Declaración de variables.
    int n1, n2;
    float gradosCelsius;


    printf("Digite el valor de n1 y n2: \n");
    scanf("%i %i", &n1, &n2);


    // Print en pantalla de las operaciones.
    sumar(n1, n2);
    restar(n1, n2);
    multiplicar(n1, n2);
    dividir(n1, n2);

    // Conversión de grados celsius a grados fahrenheit.
    printf("Digite los grados Celsius a convertir a Fahrenheit: \n");
    scanf("%f", &gradosCelsius);

    //Print en pantalla de la conversión.
    celciusFahrenheit(gradosCelsius);


    return 0;
}

void celciusFahrenheit(float celsius) {

    float gradosFahrenheit = 0;
    gradosFahrenheit = (9/5 * celsius) + 32;
    printf("%0.1f grados Celsius  son %0.1f grados Fahrenheit ", celsius, gradosFahrenheit);

}

// Método para hacer la suma.
void sumar (int n1, int n2){

    int suma  = 0;
    suma = n1 + n2;
    printf("La suma es: %i\n", suma);

}

// Método para hacer la resta.
void restar (int n1, int n2) {

    int resta = 0;
    resta = n1 - n2;
    printf("La resta es: %i\n", resta);
}

// Método para hacer la multiplicación.
void multiplicar (int n1, int n2){

    int multiplicacion = 0;
    multiplicacion = n1 * n2;
    printf("La multiplicacion es: %i\n", multiplicacion);
}

// Método para hacer la división.
void dividir (int n1, int n2){

    float division, fln1 = n1, fln2 = n2;
    division = fln1 / fln2;
    printf("La division es: %0.1f\n", division);
}