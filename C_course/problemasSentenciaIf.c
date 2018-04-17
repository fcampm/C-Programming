/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on March 20, 2018.
 * */

// Problemas usando sentencia If.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> // Sirce para poder hacer el borrado de pantalla usado en el problema 9.

// Definición de macros a usar en la función problemaTres().
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

// Función main que corre las demás funciones.
int main(){

    //problemaUno();
    //problemaDos();
    //problemaTres();
    //problemaCuatro();
    //problemaCinco();
    //problemaSeis();
    //problemaSiete();
    //problemaOcho();
    //problemaNueve();
    problemaDiez();
    return 0;
}

/* Problema 1: Comprobar a través de un programa si un alumno aprobó o no un examen (aprueba si su nota es mayor a 10.5). */
void problemaUno (){
    float examen;

    printf("Digite la nota del examen: ");
    scanf("%f", &examen);

    // Checar si el alumno está aprobado o reprobado.
    if (examen > 10.5){
        puts("El alumno esta aprobado."); // Checar nota 1 para más información con respecto al comando puts.
    }
    else{
        puts("El alumno esta reprobado."); // Checar nota 1 para más información con respecto al comando puts.
    }
}

/* Problema 2: Comprobar si un número digitado por el usuario es positivo o negativo */
void problemaDos(){
    int entradaUsuario;

    printf("Digite un numero: ");
    scanf("%i", &entradaUsuario);

    // Checar si el número digitado es mayor.
    if (entradaUsuario >= 0){
        puts("El numero es positivo");
    }
    else{
        puts("El numero es negativo");
    }
}

/* Problema 3: Visualizar la tarifa de la luz según el gasto de corriente eléctrica. Para un gasto menor de 1.000 Kwxh la tarifa es
 * 1.2, entre 1.000 y 1.850 Kwxh es 1.0 y mayor de 1.850 Kwxh 0.9 */
void problemaTres(){
    float gasto;
    float tasa;

    printf("Digite el total de gasto de energia: ");
    scanf("%f", &gasto);

    if(gasto < 1000){
        tasa = TARIFA1;
    }
    else if(gasto >= 1000 && gasto < 1850){
        tasa = TARIFA2;
    }
    else{
        tasa = TARIFA3;
    }

    printf("La tasa a pagar es: %0.1f", tasa);
}

/* Problema 4: Determinar si un número es par, impar. */
void problemaCuatro(){
    int entradaUsuario;

    printf("Digite un numero: ");
    scanf("%i", &entradaUsuario);

    if(entradaUsuario % 2 == 0){
        puts("El numero es par");
    }
    else if(entradaUsuario == 0){
        puts("El numero es par");
    }
    else{
        puts("El numero es inpar");
    }
}

/* Problema 5: Calcular el mayor de dos números leídos del teclado y visualizarlo en pantalla. */
void problemaCinco(){
    int numeroUno;
    int numeroDos;

    printf("Digite dos numeros: ");
    scanf("%i %i", &numeroUno, &numeroDos);

    if(numeroUno > numeroDos){
        printf("El mayor es: %i", numeroUno);
    }
    else if(numeroUno == numeroDos){
        printf("Ambos numeros son iguales");
    }
    else{
        printf("El mayor es: %i", numeroDos);
    }
}

/* Problema 6: Ingrese un número, calcule e imprima su raíz cuadrada. Si el número es negativo imprima el número y un mensaje que diga
 * "tiene raíz imaginaria". */
void problemaSeis(){
    int entradaUsuario;
    float respuestaRaiz;

    printf("Digite un numero: ");
    scanf("%i", &entradaUsuario);

    if(entradaUsuario >= 0){
        respuestaRaiz = sqrt(entradaUsuario);
        printf("El numero %i su raiz es: %0.2f", entradaUsuario, respuestaRaiz);
    }
    else{
        printf("El numero %i su raiz es imaginaria", entradaUsuario);
    }
}

/* Problema 7: Ingresar por teclado el nombre y el signo de cualquier persona e imprima, el nombre solo si la persona es signo Aries,
 * caso contrario imprima no es Aries. */
void problemaSiete(){
    char nombre[30];
    char signo[20];

    printf("Digite su nombre: ");
    gets(nombre);
    printf("Digite su signo: ");
    gets(signo);

    if(stricmp(signo, "aries") == 0){ // Checar nota dos para más información del comando stricmp.
        printf("\nEs signo aries, su nombre es %s", nombre); // Checar nota 3 para más información sobre %s y su uso.
    }
    else{
        printf("\nNo es signo aries");
    }
}

/* Problema 8: Ingresar por teclado el nombre, la edad y el sexo de cualquier persona e imprima, solo si la persona es de sexo masculino
 * y mayor de edad, el nombre de la persona. */
void problemaOcho(){
    char nombre[30];
    char sexo[20];
    int edad;

    printf("Digite su nombre: ");
    gets(nombre);
    printf("Digite su sexo: ");
    gets(sexo);
    printf("Digite su edad: ");
    scanf("%i", &edad);

    if(stricmp(sexo, "masculino") == 0 && edad >= 18){
        printf("El nombre es %s", nombre);
    }
}

/* Problema 9: Hacer un programa que borre la pantalla al pulsar 1. */
void problemaNueve(){
    char entradaUsuario;

    printf("Programa de borrado de pantalla!!!");
    printf("\n-------------------------------\n");
    printf("\n-------------------------------\n");
    printf("\nDigite el numero 1: ");
    scanf("%c", &entradaUsuario);

    if (entradaUsuario == '1'){
        system("cls");
        printf("Ha funcionado, el limpiado de pantalla");
    }
    else{
        fflush(stdin); // Comando para limpiar el buffer de la memoria interna del programa.
        printf("\nNo ha funcionado el limpiado de pantalla");
        printf("\nPor favor, digite el numero 1: ");
        scanf("%c", &entradaUsuario);
        if (entradaUsuario == '1'){
            system("cls");
        }
        else{
            printf("No funciono");
        }
    }

}

/* Problema 10: Una distribuidora de motocicletas tiene una promoción de fin de año que consiste en lo siguiente. Las motos marca Honda tienen un descuento
 * del 5%, las marcas Yamaha un 8% y las Suzuki del 10%, las otras marcas 2%. */
void problemaDiez(){
    char marcaMotoEntrada[20];

    printf("Digite una marca de motocicleta para ver si tiene descuento: ");
    scanf("%s", marcaMotoEntrada);

    if(stricmp(marcaMotoEntrada, "honda") == 0){
        printf("Las motocicletas marca %s tiene descuento de 5 porciento", marcaMotoEntrada);
    }
    else if(stricmp(marcaMotoEntrada, "yamaha") == 0){
        printf("Las motocicletas marca %s tiene descuento de 8 porciento", marcaMotoEntrada);
    }
    else if(stricmp(marcaMotoEntrada, "suzuki") == 0){
        printf("Las motocicletas marca %s tiene descuento de 10 porciento", marcaMotoEntrada);
    }
    else{
        printf("Las motocicletas marca %s tiene descuento de 2 porciento", marcaMotoEntrada);
    }
}


/*
 * Notas:
 *
 * 1. Solo cuando se está en un condicional y se desea imprimir se puede usar el puts en lugar de poner printf.
 * 2. El comando stricmp es un string compare ignore case donde sin importar la forma en la que esté escrita checa lexicográficamente
 * que sea la misma palabra; esta función se encuentra en la libreria #include <string.h> .
 * 3. El tipo de dato de cadena de caracteres char[n] su formato a la hora de imprimirlo se usa el %s .
 * 4. Dentro de la libreria stdlib.h se encuentra la función system("cls") que borra la pantalla de salida.
 * 5. El comando fflush(stdin) sirve para limpiar el buffer de memoria para volver a poder recibir otro valor en una variable en la que ya se había guardado otro
 * dato previamente.
 * */