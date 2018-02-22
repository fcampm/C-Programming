/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on February 14, 2018.
 * */

// Problemas asignación.

/*
 * 1. Pedir dos números al usuario, sumarlos, restarlos, multiplicarlos y dividirlos.
 * 2. Convertir grados celsius a grados fahrenheit.
 * 3. Sacar la hipotenusa de un triángulo rectángulo, pidiendo al usuario el valor de los dos catetos.
 * 4. Hacer un programa que calcule longitudes de la circunferencia.
 * 5. Hacer un programa que calcule áreas de trapecios.
 * */

#include <stdio.h>
#include <math.h>



int main(){
    // Declaración de variables.
    int n1, n2;
    int baseMayor, baseMenor, altura;
    int horas;
    float gradosCelsius;
    double cateto1, cateto2;
    double radio;
    double subtotal, descuento;
    double dineroPorHora;
    double salarioTrabajador, porcentajeSalarioExtra;

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

    // Print área de trapecio.
    printf("Digite base mayor, base menor y altura: ");
    scanf("%i %i %i", &baseMayor, &baseMenor, &altura);
    areaTrapecio(baseMayor, baseMenor, altura);

    // Print problema descuentos.
    printf("Digite el subtotal de la compra y el descuento a realizar: ");
    scanf("%lf %lf", &subtotal, &descuento);
    descuentosCompra(subtotal, descuento);

    // Print peoblema salarios trabajadores.
    printf("Digite el costo por hora y las horas laboradas: ");
    scanf("%lf %i", &dineroPorHora, &horas);
    calcularSueldosPorHora(dineroPorHora, horas);

    // Print problema nuevo salario con un porcentaje extra.
    printf("Digite el salario y el porcentaje a sumar: ");
    scanf("%lf %lf", &salarioTrabajador, &porcentajeSalarioExtra);
    nuevoSalarioExtra(salarioTrabajador, porcentajeSalarioExtra);

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

// Método para calcular el área de un trapecio
void areaTrapecio(int baseMayor, int baseMenor, int altura){

    double resultado;

    resultado = (altura * (baseMayor + baseMenor) )/ 2;
    printf("El resultado del área del trapecio es: %0.2lf", resultado);
}

// Método descuentos sobre la compra.
void descuentosCompra (double subtotalPagar, double descuento){

    double totalPagar;

    totalPagar += subtotalPagar - (subtotalPagar * (descuento/100));
    printf("El total a pagar despues de aplicar el %.lf porciento es: $%0.2lf", descuento, totalPagar);
}

// Método que calcula sueldos de los trabajadores
void calcularSueldosPorHora (double dineroPorHora, int horasTrabajadas){

    double salario;
    salario = horasTrabajadas * dineroPorHora;
    printf("El sueldo total es: $%0.2lf", salario);
}

// Método que calcula sueldo con el 25% extra.
void nuevoSalarioExtra (double salarioTrabajador, double porcentajeSalarioExtra){

    double salarioTotal;
    salarioTotal = salarioTrabajador + (salarioTrabajador * (porcentajeSalarioExtra/100));
    printf("El nuevo salario es: $%0.2lf", salarioTotal);
}