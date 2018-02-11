/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on February 10, 2018.
 * */

// Problemas asignación.

/*
 * 1. Pedir dos números al usuario, sumarlos, restarlos, multiplicarlos y dividirlos.
 * 2. Convertir grados celsius a grados fahrenheit.
 * 3. Sacar la hipotenusa de un triángulo rectángulo, pidiendo al usuario el valor de los dos catetos.
 * 4. Hacer un programa que calcule longitudes de la circunferencia.
 * */

#include <stdio.h>
#include <math.h>



int main(void){
    // Declaración de variables.
    int n1, n2;
    float gradosCelsius;
    double cateto1, cateto2;
    double radio;

    // Operaciones de suma, resta, multiplicación y división de dos números enteros.
    printf("Digite el valor de n1 y n2: ");
    scanf("%i %i", &n1, &n2);
    sumar(n1, n2);
    restar(n1, n2);
    multiplicar(n1, n2);
    dividir(n1, n2);

    // Conversión de grados celsius a grados fahrenheit.
    printf("Digite los grados Celsius a convertir a Fahrenheit: ");
    scanf("%f", &gradosCelsius);
    celciusFahrenheit(gradosCelsius);

    // Print de la hipotenusa de un triángulo.
    printf("Digite los dos catetos: ");
    scanf("%lf %lf", &cateto1, &cateto2);
    trianguloHipotenusa(cateto1, cateto2);

    // Print de la longitud de un círculo.
    printf("Digite el radio del circulo: ");
    scanf("%lf", &radio);
    perimetroCirculo(radio);

    return 0;
}

// Método para realizar la conversión de Celcius a Fahrenheit.
void celciusFahrenheit(float celsius) {

    float gradosFahrenheit = 0;
    gradosFahrenheit = (9/5 * celsius) + 32;
    printf("%0.1f grados Celsius  son %0.1f grados Fahrenheit \n", celsius, gradosFahrenheit);

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

// Método para calcular la hipotenusa de un triángulo dados dos catetos.
void trianguloHipotenusa (double cateto1, double cateto2){

    double hyp;
    hyp = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    printf("La hipotenusa del triangulo es: %0.2lf\n", hyp);
}

// Método para calcular la longitud o diámetro de un circulo con un radio determinado.
void perimetroCirculo(double radio){

    double perimetro;
    perimetro = M_PI * radio * 2;
    printf("El perimetro del circulo con radio %lf es: %lf\n", radio, perimetro);
}